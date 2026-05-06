# Práctica 1: Control de LED + Temperatura Interna - ESP32

## Descripción

Proyecto desarrollado para la **Práctica 1: BLINK** del curso de microcontroladores.  
Se parte del objetivo básico de hacer parpadear un LED y enviar mensajes por puerto serie, evolucionando hacia un **sistema avanzado de control remoto** mediante interfaz web.

## Objetivos Cumplidos

- **Objetivo básico**: Control del LED (encendido/apagado) con mensajes por Serial.
- **Mejora principal**: Control del LED a través de una página web profesional.
- **Mejora voluntaria (nota extra)**: Lectura y visualización de la **temperatura interna** del chip ESP32 tanto por Serial como en la web.

## Características

- Servidor Web en modo **SoftAP** (Access Point)
- LED verde controlable desde cualquier dispositivo conectado a la red del ESP32
- Dashboard moderno y responsive con animaciones
- Estadísticas en tiempo real:
  - Tiempo encendido (sesión y total)
  - Número de ciclos
  - Frecuencia de encendido
  - Consumo energético estimado
  - Temperatura del chip
  - Clientes conectados
- Actualización automática de datos cada segundo
- Temperatura interna mostrada por puerto serie

## Hardware Utilizado

- ESP32-S3-DevKitC-1
- LED integrado en **GPIO 2** (verde)
- Comunicación USB-Serial (115200 baudios)

## Cómo Usar

1. Subir el código al ESP32 mediante Arduino IDE.
2. Conectarse a la red WiFi:  
   **SSID**: `MARCOCARRASCO-ESP32`  
   **Password**: `300101Aa`
3. Abrir un navegador e ingresar la IP: `192.168.4.1`
4. Usar los botones para controlar el LED y ver las estadísticas en tiempo real.

## Tecnologías Utilizadas

- C++ (Arduino Framework)
- WiFi + Servidor HTTP
- HTML5, CSS3 (Glassmorphism + animaciones)
- JavaScript (Fetch API + actualización en tiempo real)
- Sensor de temperatura interno del ESP32

---

**Desarrollado como parte de la Práctica 1 - Marzo 2026**
