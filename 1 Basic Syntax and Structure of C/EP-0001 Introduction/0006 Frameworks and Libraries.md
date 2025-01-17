# What Are Frameworks and Libraries?

Frameworks and libraries are pre-written collections of code that help developers streamline their development process and solve common programming tasks. While they serve similar purposes, they differ significantly in scope and approach:

## Frameworks

- **Definition:** Frameworks provide a structured environment and predefined architecture for building applications.
- **Usage:** They enforce specific design patterns and workflows, requiring developers to work within their constraints using built-in components, libraries, and APIs.
- **Features:** Frameworks typically offer tools for database access, user authentication, routing, and more.
- **Key Attribute:** "Inversion of control" – the framework calls your code instead of you calling the framework.

## Libraries

- **Definition:** Libraries are reusable collections of functions, classes, or modules designed to perform specific tasks.
- **Usage:** Developers can integrate libraries into their projects as needed, retaining complete control over application structure.
- **Features:** Libraries often focus on specific functionalities, such as data manipulation, network communication, or image processing.
- **Key Attribute:** Developers call the library functions directly in their code.

---

### Popular Frameworks and Libraries for C Language

Though C lacks an extensive framework ecosystem like Python or Java, it offers powerful frameworks and libraries:

### Frameworks for C

1. **Kore:** Secure framework for web APIs in C/Python [[GitHub](https://github.com/jorisvink/kore)].
2. **facil.io:** High-performance I/O framework for scalable applications [[GitHub](https://github.com/boazsegev/facil.io?tab=readme-ov-file)].
3. **SymCrypt:** High-performance cryptographic framework by Microsoft [[GitHub](https://github.com/uhub/awesome-c)].
4. **Onion:** Framework for building HTTP servers and web apps [[GitHub](https://github.com/davidmoreno/onion)].
5. **libreactor:** Event-driven, high-performance C framework [[GitHub](https://github.com/fredrikwidlund/libreactor)].
6. **Ulfius:** RESTful HTTP framework for C [[GitHub](https://github.com/babelouest/ulfius)].
7. **Duda:** High-performance, event-driven web services framework [[GitHub](https://github.com/monkey/duda/tree/dst-1)].
8. **wax:** A language transpiler for generating code in multiple languages, including C [[GitHub](https://github.com/uhub/awesome-c)].
9. **POSIX:** Standardized OS interface, widely used for system-level programming [[GitHub](https://github.com/)].

---

### Libraries for C

1. **C Standard Library (libc):** Core functions for input/output, memory management, and string manipulation [[Wikipedia](https://en.wikipedia.org/wiki/C_standard_library)].
2. **GNU C Library (glibc):** Includes additional utilities like linked lists, hash tables, and thread support [[Reference](https://en.cppreference.com/w/c/links/libs)].
3. **FFmpeg:** For multimedia recording, conversion, and streaming [[GitHub](https://github.com/FFmpeg/FFmpeg)].
4. **libm:** Math library offering trigonometric, exponential, and logarithmic functions [[GitHub](https://github.com/JuliaMath/openlibm)].
5. **SQLite:** Lightweight SQL database engine for local storage [[GitHub](https://github.com/sqlite/sqlite)].
6. **IBM Standard C Library:** Comprehensive list of standard C library functions [[IBM](https://www.ibm.com/docs/en/ssw_ibm_i_75/rtref/stalib.htm)].

**Open-Source Libraries to Extend C Functionality**:

- **SymCrypt:** Cryptographic library by Microsoft [[GitHub](https://github.com/uhub/awesome-c)].
- **libtirpc:** For remote procedure calls [[SourceForge](https://sourceforge.net/directory/frameworks/c/)].
- **libsdl-android:** Media access in Android apps [[SourceForge](https://sourceforge.net/directory/frameworks/c/)].
- **Check:** Unit testing framework [[SourceForge](https://sourceforge.net/directory/frameworks/c/)].
- **Radare2:** Portable reverse engineering framework [[SourceForge](https://sourceforge.net/directory/frameworks/c/)].

---

## Summary

Frameworks dictate the overall application structure and provide a comprehensive environment, while libraries offer granular, task-specific functionality with greater flexibility. By using these frameworks and libraries, C developers can tackle various tasks more efficiently while maintaining code reliability and performance.
