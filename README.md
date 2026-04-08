# 🔌 Rogue USB HID Attack (Simulation)

## 📌 Overview

This project demonstrates a **simulated Rogue USB attack** using a Digispark-style HID payload.

The goal is to understand how malicious USB devices can emulate a keyboard and inject keystrokes to execute commands on a target system.

> ⚠️ This is a **simulation-based project** focused on learning and understanding attack behavior.

---

## ⚙️ How It Works

- The USB device acts as a **Human Interface Device (HID)**
- The system recognizes it as a keyboard
- Predefined keystrokes are automatically executed

---

## 💻 Payload Explanation

```cpp
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
```
➡ Opens Run dialog (Windows + R)

```cpp
DigiKeyboard.println("cmd");
```
➡ Launches Command Prompt

```cpp
DigiKeyboard.println("whoami");
```
➡ Executes system command

---

## 🧪 Simulated Execution

Since this project is implemented without physical hardware:

- Commands were executed manually in CMD
- Output represents expected payload behavior

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

## 🎯 Key Concepts Learned

- HID-based attacks
- Keystroke injection
- Command execution flow
- Trust model of USB devices

---

## 🛡️ Mitigation Strategies

- Disable unauthorized USB devices
- Implement endpoint detection & response (EDR)
- Restrict HID device access via group policies
- Monitor unusual command execution

---

## 📚 MITRE ATT&CK Mapping

- T1059 – Command Execution
- T1204 – User Execution

---

## 🚀 Future Improvements

- Deploy on Digispark hardware
- Create advanced payloads (PowerShell, reverse shell)
- Add real-world demo video

---

## ⚠️ Disclaimer

This project is for **educational purposes only**.  
Do not use these techniques on systems without proper authorization.

---

## 👨‍💻 Author

**RAJEESH R L** 
Cybersecurity Enthusiast | SOC Analyst Aspirant
