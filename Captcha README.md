# CAPTCHA System in C
This project implements a simple CAPTCHA verification system in C that generates a random sequence of characters and asks the user to enter the correct value to verify that they are human.
CAPTCHA (Completely Automated Public Turing test to tell Computers and Humans Apart) is commonly used in applications and websites to prevent automated bots from accessing services.  

# How It Works
- The program generates a random CAPTCHA string consisting of:  
  1. uppercase letters (A–Z)  
  2. numbers (0–9)  
- The CAPTCHA is displayed with random noise characters to make it harder for automated scripts to read.  
- The user must type the correct sequence of characters.  
- The program compares the user input with the generated CAPTCHA and either:  
  - grants access, or  
  - denies access.

  # Features
  - Random CAPTCHA generation
  - Noise characters added for basic obfuscation
  - Case-sensitive verification
  - Simple and lightweight C implementation

 # Program Structure
```
 captcha.c  
 README.md
```
## Main Functions
generate_captcha()  
Generates a random CAPTCHA string.  
display_captcha()  
Displays the CAPTCHA with random noise characters.  
main()  
Controls the program flow and verifies user input.  

# Compilation 
Compile the program using GCC:
```
gcc captcha.c -o captcha
```

# Running the Program
```
./captcha
```

# Concepts Used
- Random number generation (rand())
- String manipulation
- Basic input/output in C
- CAPTCHA verification logic
