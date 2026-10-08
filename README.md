<div align="center">

# Banking System
# 🏦

### A C++ console desk for savings and current accounts

A small terminal bank: one account class, then a savings account and a current account. Deposit, withdraw, show the balance, and apply the rule that belongs to that account.

<br>

# 👨‍💻 **Sadra Hatami**

### *Developer • Software Engineer • Creator*

<br>

[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Console](https://img.shields.io/badge/Interface-Console-2C3E50?style=for-the-badge)](https://en.wikipedia.org/wiki/Command-line_interface)
[![License](https://img.shields.io/badge/License-MIT-green.svg?style=for-the-badge)](https://opensource.org/license/mit)
![Open Source](https://img.shields.io/badge/Open_Source-Project-black?style=for-the-badge&logo=github)

<br>

[🌐 GitHub Profile](https://github.com/sadra-hatami)
•
[📧 Email](mailto:sadra.hatami.1732@gmail.com)

</div>

---

# 📑 Table of Contents

- [About](#-about)
- [Why This Project?](#-why-this-project)
- [Key Features](#-key-features)
- [Account Types](#-account-types)
- [Project Structure](#-project-structure)
- [Technologies](#️-technologies)
- [Build](#-build)
- [Usage](#️-usage)
- [Notes](#-notes)
- [FAQ](#-faq)
- [Contact](#-contact)
- [License](#-license)
- [Support](#-support)

---

# 📖 About

**Banking System** is a console program written in C++.

An `account` stores the customer name, account number, and account type. `sav_acct` and `cur_acct` extend that base. Savings can earn compound interest and allow withdrawal, without a cheque book. Current provides a cheque-book path, pays no interest, and charges a service fee if the balance falls under the minimum.

> **Tagline:** *A C++ console program for a savings account and a current account.*

---

# 🚀 Why This Project?

A bank menu is a clean place to practice inheritance.

This one keeps that scope:

- One base account
- Two derived account types with different rules
- Deposit, balance, interest, and withdrawal
- A minimum-balance check on the current account

It is a study program, not a bank.

---

# ✨ Key Features

- 💵 Accept a deposit and update the balance
- 👁️ Display the balance
- 📈 Compute and deposit interest on savings
- 💸 Permit withdrawal and update the balance
- ⚠️ Check the minimum balance and apply a penalty when needed
- 💻 Console menus only

---

# 🏦 Account Types

| Account | Interest | Withdrawal | Cheque book | Minimum balance |
|---|---|---|---|---|
| Savings | Compound interest | Yes | No | No |
| Current | No | Yes | Yes | Yes, with a service charge if it falls below |

---

# 📁 Project Structure

```text
Banking-System/
├── main.cpp
├── welcome.cpp
└── README.md
```

`main.cpp` is the desk. `welcome.cpp` is the welcome screen. Do not commit a compiled `.exe`.

---

# 🛠️ Technologies

- C++
- Classes and inheritance
- Standard library streams
- No database and no extra packages

---

# 🚀 Build

```bash
git clone https://github.com/sadra-hatami/Banking-System.git
cd Banking-System
g++ main.cpp welcome.cpp -o bank
./bank
```

On Windows, MinGW can build the same files.

---

# ▶️ Usage

1. Build and run.
2. Choose savings or current.
3. Deposit, show the balance, or withdraw.
4. On savings, compute interest. On current, watch the minimum balance.

---

# 📝 Notes

- The program handles one customer activity at a time.
- There is no database and no file save, so data is temporary.
- This is a practice desk, not a real banking service.

---

# ❓ FAQ

### Does it save the account?

No. Closing the program clears the balance.

### Why two account classes?

Savings and current do not share the same rules. Inheritance keeps the shared fields in `account`.

### Is this a website?

No. It is a terminal menu.

---

# 📬 Contact

**Developer:**

### Sadra Hatami

📧 [Email](mailto:sadra.hatami.1732@gmail.com)

🌐 [GitHub](https://github.com/sadra-hatami)

---

# 📄 License

This project is licensed under the **MIT License**.

---

# ⭐ Support

If this program is useful as a study sample, please consider giving it a ⭐ on GitHub.

---

<div align="center">

## Designed & Developed with ❤️ for the developer community of Iran and the world by **Sadra Hatami**

</div>
