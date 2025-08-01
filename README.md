# ROLLER
![Roller logo](./images/whiplash.gif)

This project aims to implement all the functionality of the 1995 game Whiplash/Fatal Racing in a way that builds and runs on modern PCs. Where necessary, DOS-specific functions are substituted with SDL and Windows/Unix equivalents.

[![Software rendering!](https://img.youtube.com/vi/eAdGzDnqc5Q/maxresdefault.jpg)](https://www.youtube.com/watch?v=eAdGzDnqc5Q)

## About

Debug symbol dump generated with wdump, part of: https://github.com/open-watcom/open-watcom-v2

Useful tool in generating nice asm output with symbols from wdump applied: https://github.com/fonic/wcdatool

Directions on how to use wcdatool and get remote debugging working with open watcom: https://www.youtube.com/watch?v=bG9tEZOSrQg

Note: wdump symbol offsets do not account for DOS4GW.EXE. Load FATAL.EXE_split_dos4g_payload.exe (FATAL.EXE with DOS4GW.EXE split off, generated by wcdatool) into Ida/Ghidra to have matching symbol offsets.

## External Dependencies Used:
* SDL3.2.14: https://github.com/libsdl-org/SDL
* SDL_Image3.2.4: https://github.com/libsdl-org/SDL_image
* WildMIDI 0.4.6: https://github.com/Mindwerks/wildmidi

## Installation

Assets from a retail copy of the game are required to run. Drop the contents of the build directory (bin or zig-out) into the Whiplash/Fatal Racing install directory. ROLLER.exe should be in the same directory as WHIP.EXE/FATAL.EXE.

## Build MSVC
1. Clone repository
2. Open ROLLER.sln
3. Build project

## Build GCC
```bash
git clone https://github.com/zizin13/roller.git
cd roller
make
```

### Prerequisites
* SDL3
* SDL3_Image
* WildMIDI

## Build Zig

### Clone the repository

```bash
git clone https://github.com/zizin13/roller.git
cd roller
```

### Install prerequisites

- [Zig 0.14.1](https://ziglang.org/download/)

The easiest way to install is to use [mise](https://mise.jdx.dev/):

```bash
mise install
```
### Build and run the project

Using default settings
```bash
zig build run
```

A custom data folder
```bash
zig build -Dassets-path=/path/to/fatdata run
```

### Windows development

There is basic support for Visual Studio 2022 using [ZigVS](https://marketplace.visualstudio.com/items?itemName=LuckystarStudio.ZigVS)
