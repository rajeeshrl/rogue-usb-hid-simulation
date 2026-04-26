# Rogue USB HID Attack — Keystroke Injection Simulation

> **Type:** Security Research & Simulation | **Category:** Physical Security / Endpoint | **Platform:** Digispark (ATtiny85)

---

## Overview

This project simulates a HID-based Rogue USB attack where a malicious USB device emulates a keyboard to inject keystrokes and execute commands on a target system — without any user interaction.

The goal is to understand how HID devices bypass traditional security controls by exploiting the inherent trust operating systems place in keyboard input. Every command executed here reflects what a real attacker could run within seconds of plugging in a device.

> ⚠️ **This is a simulation-based project built for educational purposes and security awareness. Do not use these techniques on systems without explicit authorization.**

---

## How It Works

Most operating systems automatically trust Human Interface Devices (HID) — keyboards, mice, and similar peripherals. This trust is the attack surface.

When a rogue USB is inserted:

1. The OS recognizes it as a trusted keyboard (HID device)
2. No driver installation or user confirmation is required
3. Pre-programmed keystrokes are injected automatically
4. Commands execute silently in the background

There's no malware to detect, no file to scan — just keystrokes the system thinks came from a human.

---

## Payload Breakdown

```cpp
// Open Run dialog (Windows + R)
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

// Launch Command Prompt
DigiKeyboard.println("cmd");

// Execute system command — display current logged-in user
DigiKeyboard.println("whoami");
```

| Command | Purpose |
|---|---|
| `WIN + R` | Opens the Run dialog silently |
| `cmd` | Launches Command Prompt |
| `whoami` | Confirms execution context and privilege level |

This is a minimal proof-of-concept. Real-world payloads can include PowerShell execution, reverse shells, credential dumping, or persistence mechanisms.

---

## Attack Flow

```
USB Device Inserted
        ↓
OS Recognizes as Trusted HID (Keyboard)
        ↓
No Driver / Confirmation Required
        ↓
Keystrokes Injected Automatically
        ↓
Commands Execute on Target System
        ↓
Attacker Achieves Code Execution
```

---

## Simulated Execution

This project was developed and tested without physical Digispark hardware. The payload logic was manually simulated through Command Prompt to verify expected behavior.

Screenshots of simulated output are available in `screenshots/demo.png`.

---

## Real-World Relevance

HID attacks are particularly dangerous because they operate outside the visibility of most security tools. Since the device behaves like a trusted keyboard, traditional defenses like antivirus, firewalls, and even some EDR solutions don't flag the activity at the point of injection.

Common attack scenarios include:

- **Insider threats** — a disgruntled employee with brief physical access
- **USB drop attacks** — leaving devices in car parks or lobbies and waiting for curiosity to do the rest
- **Physical penetration testing** — testing whether target environments enforce USB controls
- **Social engineering** — disguising the device as a charging cable or branded USB drive

---

## MITRE ATT&CK Mapping

| Technique | ID | Description |
|---|---|---|
| Command and Scripting Interpreter | T1059 | Executing commands via injected keystrokes |
| User Execution | T1204 | System executes payload as trusted HID input |
| Hardware Additions | T1200 | Rogue USB device introduced to target system |

---

## Mitigation Strategies

| Control | Description |
|---|---|
| USB Device Control | Restrict or whitelist authorized HID devices via Group Policy or MDM |
| EDR Monitoring | Deploy endpoint detection tools that flag unusual process spawning |
| Physical Security | Enforce clean desk policies and restrict unattended physical access |
| User Awareness | Train staff to report unknown USB devices — never plug in unfamiliar hardware |
| Command Monitoring | Alert on `whoami`, `powershell`, and `cmd` execution from unexpected sources |

---

## Skills Demonstrated

- Understanding of HID-based physical attack techniques
- Keystroke injection logic and payload design
- Attack flow analysis and threat modeling
- MITRE ATT&CK framework mapping
- Defensive countermeasure documentation

---

## Future Improvements

- [ ] Deploy payload on physical Digispark (ATtiny85) hardware
- [ ] Develop advanced payloads — PowerShell execution, reverse shell
- [ ] Record a real-world hardware demonstration
- [ ] Add a SOC detection lab — simulate the attack and detect it via Splunk/SIEM
- [ ] Document full incident response workflow triggered by this attack

---

## Disclaimer

This project is intended **strictly for educational and research purposes**.
All techniques demonstrated here are simulated in a controlled environment.
Do not replicate or deploy this on any system without explicit written authorization from the owner.

---

*Part of my cybersecurity portfolio. More projects at [rajeeshrl.github.io](https://rajeeshrl.github.io)*
