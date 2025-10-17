#include <iostream>
#include <string>
#include <cctype>
using namespace std;

const int MOD = 26;

// Function to compute modular inverse of 'a' under modulo 26
int modInverse(int a) {
    a = a % MOD;
    for (int x = 1; x < MOD; x++) {
        if ((a * x) % MOD == 1) {
            return x;
        }
    }
    return -1; // No modular inverse exists
}

// Encryption function
string encryptAffine(string text, int a, int b) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += char(((a * (c - base) + b) % MOD) + base);
        } else {
            result += c; // keep spaces or punctuation
        }
    }
    return result;
}

// Decryption function
string decryptAffine(string cipher, int a, int b) {
    string result = "";
    int a_inv = modInverse(a);
    if (a_inv == -1) {
        return "Error: Invalid key (no modular inverse for 'a')";
    }
    for (char c : cipher) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += char((a_inv * ((c - base - b + MOD)) % MOD) + base);
        } else {
            result += c;
        }
    }
    return result;
}

// Simple console UI
int main() {
    cout << "==============================\n";
    cout << "     AFFINE CIPHER TOOL\n";
    cout << "==============================\n\n";

    int a, b, choice;
    string text;

    cout << "Enter key 'a' (must be coprime with 26): ";
    cin >> a;
    cout << "Enter key 'b': ";
    cin >> b;

    if (modInverse(a) == -1) {
        cout << "\n❌ Invalid key 'a'! No modular inverse exists.\n";
        return 0;
    }

    cout << "\n1. Encrypt\n2. Decrypt\nEnter choice: ";
    cin >> choice;
    cin.ignore(); // clear newline

    cout << "Enter text: ";
    getline(cin, text);

    if (choice == 1) {
        cout << "\n🔒 Encrypted Text: " << encryptAffine(text, a, b) << endl;
    } else if (choice == 2) {
        cout << "\n🔓 Decrypted Text: " << decryptAffine(text, a, b) << endl;
    } else {
        cout << "\nInvalid choice.\n";
    }

    cout << "\n==============================\n";
    cout << "       PROGRAM ENDED\n";
    cout << "==============================\n";
    return 0;
}
