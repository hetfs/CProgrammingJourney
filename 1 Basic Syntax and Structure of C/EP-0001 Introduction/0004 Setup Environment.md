# Install Compilers on Various Operating Systems

Development Environment for C Programming on Your Local Machine.
Before diving into coding, it's crucial to establish the right environment and grasp the structure of a C program.

![Development Environment](/Images/DevEnviroment.png)

**Install the Necessary Tools**:

- Begin by installing a text editor where you'll write your code. Start with a basic editor like Notepad and progress to more advanced options such as Visual Studio Code.

**Understand the Role of a Compiler**:

- A compiler is essential for translating your written code into machine-readable instructions. It converts human-readable code into a format understandable by the computer. Familiarize yourself with the compiler's functions and how it processes your code.

## How to Install GCC and Clang on Windows?

- **Visual C++ Compiler**: Microsoft's official C++ compiler bundled with Visual Studio IDE[[Here](https://visualstudio.microsoft.com/vs/features/cplusplus/)].
- **MinGW-w64 Compiler**: A free and open-source compiler that provides GCC (GNU Compiler Collection) for Windows, allowing developers to compile C and C++ code [[Here](https://winlibs.com/)].
- **Clang**: Another option for Windows development, providing a modern C/C++ compiler toolchain that supports various platforms, including Windows
  These compilers offer different features, performance characteristics, and compatibility levels, allowing developers to choose the one that best suits their project requirements and preferences

1. **Install MSYS2**:Download the MSYS2 executable file[[Here](https://www.msys2.org/)] from the official website. Run the installer, keeping the default settings. Use the MSYS2 terminal to update the package database and base packages using the command pacman -Syu.

2. **Install GCC and G++ Compilers**:Open the MSYS2 terminal and update the remaining packages with the command pacman -Su. Install the compilers using the command:

   ```bash
   pacman -S mingw-w64-x86_64-gcc for 64-bit 
   ```

3. **Install the Debugger (GDB)**:If using a 64-bit system, apply the command:

   ```bash
   pacman -S mingw-w64-x86_64-gdb
   ```

4. **Add Directory to Environment Variables**:Open the file explorer and navigate to the appropriate directory based on the system architecture. Copy the directory path. Access Advanced System Settings, go to Environment Variables, and edit the Path variable by adding the copied directory.

5. **Check the Installation**:Verify the successful installation by opening the terminal, PowerShell, or CMD and checking the versions of GCC, G++, and GDB using gcc --version, g++ --version, and gdb --version commands, respectively.

## Install GCC and Clang on Mac?

1. **GCC Installation**:

   - **Homebrew**: Open Terminal and install [Homebrew](https://brew.sh/) if not already installed using the command `/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`.
   - Install GCC using Homebrew by running `brew install gcc`.
   - To verify the installation, type `gcc --version` in Terminal.
2. **Clang Installation**:

   - **Xcode Command Line Tools**: Open Terminal and run `xcode-select --install`.
   - This will prompt you to install the Xcode Command Line Tools. Follow the on-screen instructions to complete the installation.
   - To verify the installation, type `clang --version` in Terminal.
3. **Switching Between Compilers**:

   - To switch between GCC and Clang as the default compiler, you can use symbolic links.
   - For GCC, if installed via Homebrew, the path would typically be `/usr/local/bin/gcc`.
   - For Clang, the path would typically be `/usr/bin/clang`.
   - Use `sudo ln -sf /usr/local/bin/gcc /usr/local/bin/cc` to create a symbolic link for GCC as the default compiler, and `sudo ln -sf /usr/bin/clang /usr/local/bin/cc` for Clang.
   - You can also use environment variables like `export CC=/usr/local/bin/gcc` for GCC and `export CC=/usr/bin/clang` for Clang to specify the compiler.

## Install GCC and Clang on Linux?

To install GCC and Clang on Linux, follow these steps:

1. **Using Package Manager**: Most Linux distributions provide GCC and Clang in their default repositories. You can install them using the package manager:

   - For Debian/Ubuntu: Use `apt-get` with the command `sudo apt-get install gcc clang`.
   - For Red Hat/Fedora: Use `yum` with the command `sudo yum install gcc clang`.
   - For Arch Linux: Use `pacman` with the command `sudo pacman -S gcc clang`.

2. **Manual Installation**: Alternatively, you can download and install GCC and Clang manually from their official sources. Visit the GCC website [GCC Website](https://gcc.gnu.org/) and the LLVM website [LLVM Website](https://llvm.org/) for installation instructions specific to your Linux distribution.

3. **Verification**: After installation, verify that GCC and Clang are installed correctly by running `gcc --version` and `clang --version` commands in the terminal. These commands should display the installed versions of GCC and Clang respectively.

## Code::Blocks and How to Install It?

Code::Blocks is a free, open-source integrated development environment (IDE) for programming in C, C++, and Fortran. It provides a user-friendly interface with various features such as syntax highlighting, code completion, and debugging capabilities, making it suitable for both beginner and advanced programmers.

To install Code::Blocks:

1. **Download**: Visit the official Code::Blocks website or a trusted source like GitHub to [download](https://wiki.codeblocks.org/index.php/Installing_the_latest_official_version_of_Code::Blocks_on_Windows) the installer for your operating system.

2. **Run Installer**: Launch the downloaded installer. Follow the on-screen instructions, typically clicking "Next" or "Install" after reviewing each step latest official.

3. **Configuration**: During installation, you may have options to customize settings such as the installation directory. Ensure to review and adjust these according to your preferences.

4. **Completion**: Once the installation completes, you can launch Code::Blocks from your desktop or Start menu. You're now ready to start coding in C, C++, or Fortran using this powerful IDE!
   Code::Blocks offers a versatile and robust environment for developing software projects, from simple programs to complex applications.

## Visual Studio Code (VSCode) Installation

Visual Studio Code, commonly referred to as VSCode, is a versatile and highly customizable source-code editor developed by Microsoft. It is designed to enhance productivity for developers working on various platforms, including Windows, macOS, and Linux. VSCode offers a wide range of features, including:

- **Intuitive Interface:** VSCode provides a user-friendly interface with features like syntax highlighting, code completion, and Git integration, making coding more efficient.

- **Extensibility:** It supports a rich ecosystem of extensions that enable developers to customize and extend the functionality of the editor to suit their specific needs.

- **Debugging Tools:** VSCode includes built-in debugging tools for various programming languages, allowing developers to debug their code directly within the editor.

- **Integrated Terminal:** It comes with an integrated terminal that enables developers to run commands and scripts without leaving the editor.

- **Cross-Platform Support:** VSCode is available for multiple operating systems, ensuring a consistent development experience across different platforms.
  Visual Studio Code has gained popularity among developers due to its versatility, performance, and extensive customization options, making it a preferred choice for coding projects of all sizes.

*To install Visual Studio Code, follow these steps*:

1. **Download**: Go to the official Visual Studio Code website or use a trusted source like GitHub to [download](https://code.visualstudio.com/) the installer for your operating system.

2. **Run Installer**: Launch the downloaded installer. Follow the on-screen instructions to install VS Code on your system. The installation process is straightforward and typically involves clicking "Next" or "Install" after reviewing each step.

3. **Configuration**: During installation, you may have the option to customize settings such as the installation directory. Ensure to review and adjust these according to your preferences.

4. **Completion**: Once the installation completes, you can launch Visual Studio Code from your desktop or Start menu. You're now ready to start coding in your favorite programming languages using this versatile and powerful IDE!

Visual Studio Code offers a rich set of features, including IntelliSense, debugging support, extensions marketplace, and more, making it a popular choice among developers.

*Best VS Code Extensions for C Programming*:

Here are some of the top Visual Studio Code extensions recommended for C programming:

- **C/C++ Intellisense** - Provides intelligent code completion, navigation, and syntax highlighting for C/C++ code
- **C/C++ Extension Pack** - Bundles essential tools and extensions for C/C++ development, including debugging support and code snippets.
- **Clangd** - Utilizes the Clang compiler to provide powerful code analysis and diagnostics for C/C++ projects.
- **CMake** - Offers syntax highlighting and IntelliSense for CMake files, facilitating CMake-based project development .
- **CMake Tools** - Enhances the CMake workflow in VS Code with features like configuration management and project building..
  Installing these extensions can significantly boost your productivity and streamline your C programming workflow in Visual Studio Code.

**What is VSCodium?**

VSCodium is a distribution of Visual Studio Code (VSCode) that provides free and open-source binaries without the bundled Microsoft telemetry tracking and branding found in the official VSCode releases. It offers the same features and functionality as VSCode but without the proprietary components, making it more privacy-focused and suitable for users who prefer open-source software. VSCodium aims to provide a transparent and community-driven alternative to VSCode, allowing users to benefit from a versatile code editor while respecting their privacy preferences. [Download](https://en.wikipedia.org/wiki/Visual_Studio_Code) here.

## Write C Code in Visual Studio Code with GCC Compiler

1. **Install Visual Studio Code**: [Download](https://code.visualstudio.com/) and install Visual Studio Code from the official website.

2. **Install C/C++ Extension**: Open Visual Studio Code, go to the Extensions view (Ctrl+Shift+X), and search for "C/C++". Click on "Install" for the extension provided by Microsoft.

3. **Install GCC Compiler**: If you haven't already installed GCC, follow the installation instructions for your operating system:

   - For Windows: Install MinGW-w64.
   - For macOS: Install Xcode Command Line Tools.
   - For Linux: Install GCC via your package manager.

4. **Create a New C File**: Open Visual Studio Code, create a new file (Ctrl+N), and save it with a `.c` extension, such as `example.c`.

5. **Write Your C Code**: Inside the file, write your C code. For example:

   ```c
   #include <stdio.h>

   int main() {
       printf("Hello, World!\n");
       return 0;
   }
   ```

6. **Compile Your Code**: Press Ctrl+Shift+B to open the command palette, type "Tasks: Run Build Task", and press Enter. Then, select "gcc.exe build active file" to compile your code using GCC.

7. **Run Your Program**: After successful compilation, you'll see an executable file in the same directory. Open a terminal (`Ctrl+`) and run the executable by typing `.\example.exe` (replace `example` with your file name).

8. **View Output**: The output of your C program will be displayed in the terminal.

By following these steps, you can write, compile, and run C code in Visual Studio Code using the GCC compiler.

## How to Use GCC or Clang to Compile a C Program on Windows, Mac, and Linux?

1. **Write Your C Program**:

   - Create or open your C program file using a text editor.
   - Write your C code in the file and save it with a `.c` extension, such as `example.c`.

2. **Open Terminal or Command Prompt**:

   - For Windows: Open Command Prompt.
   - For Mac and Linux: Open Terminal.

3. **Navigate to the Directory Containing Your C Program**:

   - Use the `cd` command to navigate to the directory where your C program is located.

4. **Compile Your C Program with GCC or Clang**:

   - Type `gcc example.c -o output_executable`, replacing `example.c` with the name of
     C program file and `output_executable` with the desired name for the compiled executable file.
   - Type `clang example.c -o output_executable`, replacing `example.c` with the name of
     C program file and `output_executable` with the desired name for the compiled executable file.

5. **Run Your Compiled Program**:

   - After successful compilation:
     - For Windows: Type `output_executable.exe`.
     - For Mac and Linux: Type `./output_executable`.

6. **Check Output**:

   - The output of your C program will be displayed in the terminal or command prompt.

**Note:**

> The default output file generated after compiling a C program varies across different platforms:
>
> **Windows**: The default output file is typically named `a.exe`.
>
> **Mac**: On macOS, the default output file is also named `a.out`.
>
> **Linux**: Similarly, on Linux systems, the default output file is `a.out`.
>
> These default names are used when no specific output file name is provided during the compilation process. However, you can specify a custom name for the output file using the appropriate compiler flags, such as `-o` followed by the desired output file name.

**How to Compile C Program in VS Code's Built-in Terminal**?

To compile a C program in Visual Studio Code's built-in terminal, follow these steps:

1. **Open VS Code**.
2. **Create or open a C file**: Open the C file you want to compile or create a new one.
3. **Open the Terminal**: Go to the "Terminal" menu and select "New Terminal" to open the built-in terminal.
4. **Navigate to the directory containing your C file**: Use the `cd` command to navigate to the directory where your C file is located.
5. **Compile the C program**: Use the appropriate compiler command to compile your C program. For example, if you're using GCC, you can compile your program using the command `gcc your_program.c -o output_name`.
6. **Run the compiled program**: After successful compilation, run the compiled program by typing its name in the terminal and pressing Enter.

By following these steps, you can compile and run your C program directly from VS Code's built-in terminal.
