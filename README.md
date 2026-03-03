# RC4

A simple implementation of the RC4 (Rivest Cipher 4) stream cipher.

## Overview

RC4 is a symmetric stream cipher designed by Ron Rivest. It generates a pseudorandom keystream that is XORed with plaintext to produce ciphertext. The same operation is used for decryption.

This repository provides a minimal and easy-to-understand RC4 implementation for educational and experimental purposes.

## Features

- RC4 Key Scheduling Algorithm (KSA)
- RC4 Pseudo-Random Generation Algorithm (PRGA)
- Encryption and decryption support
- Lightweight and dependency-free

## How It Works

1. **Key Scheduling Algorithm (KSA)**  
   Initializes a 256-byte state array using the provided key.

2. **Pseudo-Random Generation Algorithm (PRGA)**  
   Generates the keystream byte-by-byte from the internal state.

3. **Encryption / Decryption**  
   Each byte of plaintext or ciphertext is XORed with the generated keystream.

Since RC4 is symmetric, the same function is used for both encryption and decryption.

## Usage

### Clone the repository

```bash
git clone https://github.com/v1rtu3x/Rc4.git
cd Rc4
```

### Security Notice

RC4 is considered cryptographically insecure and should not be used in production systems. This implementation is intended for learning and experimentation only.