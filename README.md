# 🔐 Affine Cipher (C++ Implementation)

A simple and elegant **Affine Cipher** program built in **C++**, featuring encryption and decryption with user-defined keys, clean console UI, and modular arithmetic validation.  
This project demonstrates classical cryptography concepts in a modern, readable C++ style — perfect for students, beginners in cybersecurity, or anyone exploring encryption algorithms.

---

## 🧠 What is the Affine Cipher?

The **Affine Cipher** is a type of **monoalphabetic substitution cipher** based on modular arithmetic.  
Each letter in the plaintext is transformed into its numeric equivalent, encrypted using a linear function, and then converted back into a letter.

### 📘 Formula

**Encryption:**  
\[
E(x) = (a \times x + b) \mod 26
\]

**Decryption:**  
\[
D(x) = a^{-1} \times (x - b) \mod 26
\]

Where:
- `x` → position of the letter (A=0, B=1, ..., Z=25)
- `a` and `b` → cipher keys
- `a` must be **coprime with 26**
- `a⁻¹` → modular inverse of `a` (so that \( a \times a⁻¹ \equiv 1 \mod 26 \))

---

## ⚙️ Features

✅ Encrypt and decrypt any text using custom `(a, b)` keys  
✅ Handles **uppercase** and **lowercase** letters  
✅ Automatically validates that `a` is coprime with 26  
✅ Preserves **spaces** and **punctuation**  
✅ Clean, readable, and well-commented C++ code  
✅ Beginner-friendly console interface  

---

## 🧩 Project Structure

AffineCipher
├── src
│ └── affine.cpp 
├── README.md  


---

## 🛠️ Setup & Usage

### 1️⃣ Clone the Repository
```bash
git clone https://github.com/stutipanda/AffineCipher.git
cd AffineCipher
```
2️⃣ Compile the Code
```bash
Copy code
g++ src/affine.cpp -o affine
```
3️⃣ Run the Program
```bash
Copy code
./affine
```

🧰 Technologies Used
Language: C++17

Compiler: GCC / MinGW / Clang

Concepts: Modular Arithmetic, Cryptography, String Processing

📚 Learning Outcomes
This project demonstrates:

Application of modular arithmetic in encryption

Implementation of classical cipher logic

Validation of mathematical constraints in code

Writing clean, modular, and commented C++ programs

🧑‍💻 Author
Stuti Panda
🔗 GitHub
💬 Passionate about cybersecurity, coding, and clean project design.

📜 License
This project is open-source and available under the MIT License.
Feel free to use, modify, and share with proper credit.

⭐ If you found this project helpful, please star the repository!
Your support motivates further open-source contributions.






