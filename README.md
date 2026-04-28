# Proyecto Arduino

Este repositorio contiene un código de Arduino que se colocará aquí para su referencia y uso. La implementación del código servirá para ejecutar diversas funcionalidades que se describirán más adelante.

# Notas 
👉 VCC = Voltaje positivo (+)

Es el pin por donde entra la energía al componente.

💡 En simple:
Es como el cable positivo de una batería
Alimenta el sensor o módulo

👉 GND = Ground (tierra o negativo)

Es el pin por donde la corriente regresa

💡 En simple:
Es el cable negativo (-)
Cierra el circuito


# Componentes
Aquí tienes una explicación **clara y directa** de ambos componentes para tu proyecto 👇

---

# 📏 Sensor ultrasónico HC-SR04

## 🔍 ¿Qué es?

Es un sensor que **mide distancia** usando sonido (ultrasonido).

👉 Funciona así:

* Envía una onda sonora
* Espera que rebote
* Calcula la distancia

---

## 🎯 ¿Para qué sirve?

* Medir qué tan lejos está un objeto
* Detectar obstáculos
* Ver si algo se acerca o se mueve

👉 En tu proyecto (bicicleta o mina):

* Detectar si algo se mueve o se acerca

---

## 🔌 Pines del HC-SR04

| Pin  | Función         |
| ---- | --------------- |
| VCC  | Energía (+5V)   |
| GND  | Tierra (-)      |
| TRIG | Envía la señal  |
| ECHO | Recibe la señal |

---

## 🧠 Cómo se usa (lógica básica)

```text
1. ESP32 activa TRIG
2. Sensor envía sonido
3. ECHO recibe rebote
4. Se calcula distancia
```

---

# 📺 LCD 20x4 con I2C

## 🔍 ¿Qué es?

Es una pantalla que muestra texto:

👉 Puede mostrar:

* 20 caracteres por línea
* 4 líneas en total

💡 “I2C” significa que usa **menos cables**

---

## 🎯 ¿Para qué sirve?

* Mostrar datos del sistema
* Mostrar alertas
* Mostrar estado del proyecto

---

## 🔌 Pines del LCD 20x4 (I2C)

| Pin | Función       |
| --- | ------------- |
| GND | Tierra (-)    |
| VCC | Energía (+5V) |
| SDA | Datos         |
| SCL | Reloj         |

---


Si quieres, puedo darte el **código para usar ambos con ESP32** en tu proyecto 🚲 o mina 🔥
