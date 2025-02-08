# 👏 Clap Switch Using Arduino

This is a **Clap Switch** project using an **Arduino board** and a **microphone sensor**. The system detects claps and toggles an LED accordingly.

---

## 📌 Features

- ✅ **Detects claps** using a microphone sensor
- ✅ **Toggles an LED** ON and OFF based on sound detection
- ✅ **Low-power circuit** with minimal components
- ✅ **Uses Arduino for easy implementation**

---

## 🖥️ Components Required

- 🔹 **Arduino Board** (Uno, Mega, or Nano)
- 🔹 **Microphone Sensor Module**
- 🔹 **Resistors and Capacitors** (if needed for signal conditioning)
- 🔹 **LED**
- 🔹 **Connecting Wires**

---

## 📜 How to Upload and Run on Arduino?

1. **Download & Install** the [Arduino IDE](https://www.arduino.cc/en/software)
2. **Connect Arduino** to your PC via USB cable
3. **Copy & Paste the Code** from `clap_switch.ino`
4. **Select the Correct Board & Port** from the **Tools** menu
5. **Click Upload** and wait for the code to be uploaded
6. **Observe the LED** toggling with each clap

---

## 📝 Code Explanation

1. **Microphone Input Handling**: Reads the analog value from the mic sensor.
2. **Clap Detection Logic**: If the difference between two consecutive mic readings is greater than a threshold, it toggles the LED.
3. **LED Control**: Changes LED state based on detected claps.

---

## ⚡ Example Output (Serial Monitor)

```
Mic Value1: 520
Mic Value2: 515
LED Toggled!
Mic Value1: 490
Mic Value2: 495
LED Toggled!
```

---

## 🛠️ Future Enhancements

- 📌 **Increase Sensitivity** for better clap recognition
- 📌 **Add Debouncing** to prevent false triggers
- 📌 **Use a Relay Module** to control AC appliances
- 📌 **Implement a Smart Mode** with voice control

---

## 🤝 Contribution

Want to improve this project? Feel free to **fork, modify, and submit pull requests**! 🚀

---

## 📩 Contact

📧 Email: [Mail_me](mailto:iasma.channa@gmail.com)  
🔗 GitHub: [my_github](https://github.com/asma-13)  
🔗 LinkedIn: [my_linkedin](https://linkedin.com/in/iasmachanna)
