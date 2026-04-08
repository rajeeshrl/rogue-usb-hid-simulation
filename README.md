# 🔌 Rogue USB HID Attack (Simulation)

![Project Type](https://img.shields.io/badge/Type-Simulation-blue)

---

## 📌 Overview

This project simulates a **HID-based Rogue USB attack** where a malicious USB device emulates a keyboard to inject keystrokes and execute commands on a target system.

The goal of this project is to understand how HID devices can bypass traditional security controls by exploiting the inherent trust systems place in keyboard inputs.

> ⚠️ This is a simulation-based project focused on understanding attack techniques and defensive strategies.

---

## ⚙️ How It Works

- The USB device is identified as a **Human Interface Device (HID)**
- The operating system automatically trusts HID input
- Predefined keystrokes are injected into the system
- Commands are executed without requiring user interaction

---

## 💻 Payload Explanation

```cpp
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
```
➡ Opens the Run dialog (Windows + R)

```cpp
DigiKeyboard.println("cmd");
```
➡ Launches Command Prompt

```cpp
DigiKeyboard.println("whoami");
```
➡ Executes a system command to display the current user

---

## 🧪 Simulated Execution

Since this project was developed without physical hardware, execution was simulated manually.

- Commands were executed in Command Prompt
- Output represents the expected behavior of the payload

📸 See: `screenshots/demo.png`

---

## 🔄 Attack Flow

```
USB Inserted
   ↓
Recognized as Keyboard (HID)
   ↓
Keystrokes Injected
   ↓
Command Executed
```

---

## 🧠 Real-World Relevance

HID-based USB attacks are particularly effective because they bypass traditional security mechanisms. Since the device behaves like a trusted keyboard, most systems do not restrict or inspect its input.

This technique is relevant in:
- Insider threat scenarios
- Social engineering attacks (e.g., malicious USB drop)
- Physical access exploitation

---

## 🛠️ Skills Demonstrated

- Understanding of HID-based attack techniques  
- Keystroke injection logic  
- Command execution flow analysis  
- Basic threat modeling  
- Security mitigation strategies  

---

## 🛡️ Mitigation Strategies

- Disable or restrict unauthorized USB devices  
- Enforce HID device control using group policies  
- Implement Endpoint Detection & Response (EDR) solutions  
- Monitor abnormal command execution patterns  

---

## 📚 MITRE ATT&CK Mapping

- **T1059** – Command and Scripting Interpreter  
- **T1204** – User Execution  

---

## 🚀 Future Improvements

- Deploy the payload on Digispark hardware  
- Develop advanced payloads (PowerShell, reverse shell)  
- Record a real-world demonstration  
- Integrate detection techniques from a SOC perspective  

---

## ⚠️ Disclaimer

This project is intended for **educational purposes only**.  
Do not use these techniques on systems without proper authorization.

---

## 👨‍💻 Author

**Rajeesh R L**  
Cybersecurity Enthusiast | SOC Analyst Aspirant  

- 🔗 GitHub: https://github.com/rajeeshrl  
- 📧 Email: rajeesh8214@gmail.com  
- 💼 LinkedIn: https://linkedin.com/in/rajeeshrl-

---
