# Rogue USB HID Attack Flow

1. USB device is inserted into target system
2. Device is recognized as a Human Interface Device (HID)
3. Operating system trusts it as a keyboard
4. Pre-programmed keystrokes are injected
5. Commands are executed without user interaction

## Key Concept

Unlike traditional USB storage devices, HID devices do not require user permission to send input.

## Impact

- Unauthorized command execution
- System compromise
- Data exposure

## MITRE ATT&CK Mapping

- T1059 – Command and Scripting Interpreter
- T1204 – User Execution
