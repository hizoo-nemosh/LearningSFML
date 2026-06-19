# SFML Learning Project

A cross-platform 2D game project built with Modern C++ (C++17) and SFML. It features fundamental game loops, object-oriented player controls, and dynamic enemy vector tracking.

## Prerequisites

Before building the project, ensure you have a C++17 compiler, CMake, and the SFML library installed on your system.

## How to Build

Follow these instructions to compile and run the project using CMake.

###  Linux (Ubuntu/Debian)
1. Install dependencies:
   ```bash
   sudo apt update
   sudo apt install cmake g++ libsfml-dev
   ```
2. Build the project:
   ```bash
   mkdir build && cd build
   cmake ..
   make
   ```
3. Run:
   ```bash
   ./SFML_Learning
   ```

###  macOS
1. Install dependencies via Homebrew:
   ```bash
   brew install cmake sfml
   ```
2. Build the project:
   ```bash
   mkdir build && cd build
   cmake ..
   make
   ```
3. Run:
   ```bash
   ./SFML_Learning
   ```

###  Windows
1. Download and install **CMake** and **MinGW** (or Visual Studio).
2. Install **SFML** and ensure its path is added to your environment variables or specified via CMake.
3. Open terminal/command prompt in the project folder and run:
   ```cmd
   mkdir build
   cd build
   cmake -G "MinGW Makefiles" ..
   cmake --build .
   ```
4. Run:
   ```cmd
   SFML_Learning.exe
   ```

