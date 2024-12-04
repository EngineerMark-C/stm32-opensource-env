# STM32开源开发环境搭建

这是一个使用开源工具链的STM32开发环境配置方案。本项目使用CMake构建系统、ARM GCC工具链和OpenOCD调试工具,实现了STM32单片机的编程开发全流程。

## 开发环境

- Windows
- Visual Studio Code
- arm-none-eabi-gcc
- CMake
- make
- OpenOCD
- STLink驱动

## 目录结构

```
.
├── CORE                    # STM32核心文件
├── Hardware               # 硬件驱动文件
├── STM32F10x_StdPeriph_Driver  # STM32标准外设库
├── SYSTEM                 # 系统配置文件  
├── User                   # 用户代码
├── build                  # 构建目录
├── .vscode               # VSCode配置
├── CMakeLists.txt        # CMake配置文件
├── stlink.cfg            # OpenOCD配置文件
├── stm32f1x.cfg          # STM32配置文件
└── README.md
```

## 使用方法

1. 安装所需工具:
- Windows
- Visual Studio Code
- arm-none-eabi-gcc
- CMake
- make
- OpenOCD
- STLink驱动
推荐使用Scoop安装，方便快捷

1. 克隆项目:
```bash
git clone https://github.com/EngineerMark-C/stm32-opensource-env.git
```

1. 打开VSCode,安装C/C++和Cortex-Debug插件

2. 编译项目:
```bash
mkdir build
cd build
cmake ..
make
```
连接STLink
```
openocd -f stlink-v2.cfg -f stm32f1x.cfg -c "program build/Project.elf verify reset exit"
```
工程目录下执行该命令实现烧录
