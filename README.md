# Calculadora Básica en C

## Descripción

Proyecto de calculadora básico para mostrar como usar GitHub. Calculadora funcional para operaciones básicas.

* Suma
* Resta
* Multiplicación
* División

Se utiliza un menú para poder elegir la operación deseada por el usuario.

---

# Tabla de Contenidos

* [Características](#características)
* [Requisitos Previos](#requisitos-previos)
* [Compilación](#compilación)
* [Cómo Usar](#cómo-usar)
* [Ejemplo de Ejecución](#ejemplo-de-ejecución)
* [Estructura del Proyecto](#estructura-del-proyecto)

---

# Características

* Menú de selección de operaciones.
* Operaciones básicas.
* Validación división entre cero.
* Uso de funciones.
* Compatible con Windows, Linux y macOS.

---

# Requisitos Previos

Para compilar y ejecutar el programa es necesario contar con un compilador de C.

## Windows

* MinGW-w64 (GCC)
* MSYS2
* Visual Studio Build Tools

Verificar instalación:

```bash
gcc --version
```

## Linux

### Ubuntu/Debian

```bash
sudo apt update
sudo apt install gcc
```

### Fedora

```bash
sudo dnf install gcc
```

Verificar instalación:

```bash
gcc --version
```

## macOS

Instalar  herramientas de desarrollo de Xcode:

```bash
xcode-select --install
```

Verificar instalación:

```bash
gcc --version
```

---

# Compilación

Ubicarse en la carpeta del proyecto y ejecutar:

```bash
gcc calculadora.c -o calculadora
```

Genera el ejecutable:

* Linux/macOS: `calculadora`
* Windows: `calculadora.exe`

---

# Cómo Usar

## Linux

```bash
./calculadora
```

## macOS

```bash
./calculadora
```

## Windows

```powershell
.\calculadora.exe
```

---

# Ejemplo de Ejecución

```text
====CALCULADORA====
Seleccione su opcion:
1. Suma
2. Resta
3. Multiplicacion
4. Division

1

Introduzca valor de primer numero:
15

Introduzca el valor del segundo numero:
20

El resultado de la suma es de: 15 + 20 = 35
```

---

# Estructura del Proyecto

```text
calculadora-c/
│
├── README.md
├── .gitignore
│
├── calculadora.c
├── suma.h
├── resta.h
├── multiplicacion.h
└── division.h
```

