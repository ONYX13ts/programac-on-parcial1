# Programación — Primer parcial

Repositorio de los códigos de las prácticas realizadas durante el primer parcial de la asignatura Programación en la Escuela de Ingeniería de la Universidad Modelo.

- **Estudiante:** Yasmin Fernanda Godoy Martínez
- **Asignatura:** Programación, clave 33161
- **Profesor:** Roberto Sotelo
- **Periodo:** Agosto–septiembre de 2026

## Prácticas

### 1. Analog Read Serial
**Fecha:** 17 y 18 de septiembre de 2026  
**Archivo:** `sketch_sep30a.ino`

Lectura de la entrada analógica A0 mediante un potenciómetro y visualización de los valores por comunicación serial. La práctica permitió observar los cambios en las lecturas al modificar la posición del potenciómetro.

### 2. Indicadores de nivel
**Fecha:** 24 de septiembre de 2026  
**Archivo:** `sketch_sep25a.ino`

Uso de una lectura analógica y condiciones para activar tres indicadores LED:

- Rojo: nivel alto.
- Verde: nivel óptimo.
- Amarillo: nivel bajo.

El potenciómetro representa la entrada del sistema; no se realizaron mediciones reales de oxígeno.

### 3. Secuencia de LEDs con botón
**Fecha:** 25 de septiembre de 2026  
**Archivo:** `sketch_sep25b.ino`  
**Estado:** Incompleta.

La práctica tenía como objetivo controlar una secuencia de LEDs y cambiar su orden de 1–2–3 a 3–2–1 mediante un botón. El circuito no se terminó durante la sesión, por lo que el archivo corresponde al avance realizado y no garantiza el funcionamiento completo.

## Herramientas y componentes

- Arduino IDE 2.3.10.
- Arduino Nano.
- Protoboard, cables, resistencias, LEDs, potenciómetro y pulsadores.
- Programación de Arduino basada en C/C++.

## Uso de los archivos

Abrir cada archivo `.ino` por separado en Arduino IDE. Si el programa solicita crear una carpeta con el mismo nombre del archivo, aceptar. Revisar las conexiones y los pines definidos antes de cargar el código en la placa.

## Aprendizajes

Se desarrollaron habilidades para armar circuitos y programarlos. Entre las dificultades encontradas estuvieron la conexión de un cable en D8 en lugar de D6 y la conexión incorrecta de una resistencia. Estas situaciones mostraron la importancia de verificar que el circuito coincida con los pines definidos en el código.
