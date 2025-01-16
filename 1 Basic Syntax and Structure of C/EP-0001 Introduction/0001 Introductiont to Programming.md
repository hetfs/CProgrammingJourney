# What Is Programming?

Programming is the act of creating a set of instructions that tells a computer what to do. These instructions are written in a specific programming language and are designed to solve problems or perform tasks. Programmers write code using syntax and rules defined by the programming language, which is then translated into machine-readable instructions by a compiler or interpreter. Programming involves logic, problem-solving, and creativity to develop efficient and functional software applications, websites, games, and more. It enables computers to perform a wide range of functions, from simple calculations to complex data analysis and artificial intelligence.

A computer is an electronic device that accepts data, performs computations, and makes logical decisions based on given instructions, producing useful information. Computers are integral to various sectors, from gaming to nuclear energy production, due to their cost-effective problem-solving capabilities in business, government, industry, and education. Computer programs, also known as software, provide instructions for computers to function. Computer programming involves writing, testing, and maintaining these programs, enabling computers to execute tasks efficiently. Programming languages, like natural languages, have syntax and semantics defining their structure and meaning. Unlike natural languages, programming languages require precision as computers execute instructions exactly as given. Available in various forms, programming languages are categorized as low-level and high-level languages, each serving different purposes in software development.

## Understanding Programming Languages

Programming languages are tools that allow programmers to communicate instructions to computers in a structured and understandable way. Each programming language has its syntax, semantics, and rules, tailored for specific purposes and paradigms. Understanding the different types of programming languages is crucial for selecting the right language for a particular task.
Programming languages can be classified into several types based on their features and functionality:

1. **Procedural Programming Languages**: Also known as imperative languages, these languages specify a list of operations to achieve a desired outcome. Examples include C, C++, Java, Pascal, and BASIC.

2. **Functional Programming Languages**: Focus on evaluating expressions and avoiding changing state and mutable data. Examples include Haskell, Lisp, and ML.

3. **Machine Languages**: Directly understandable by computers and represent instructions using binary code.

4. **Assembly Languages**: Use symbolic instructions to represent machine code, making it easier for programmers to write and understand. However, they still need translation to machine code using an assembler.

5. **Logic Programming Languages**: Define rules and relations, primarily used in artificial intelligence and computational linguistics. Examples include Prolog and Datalog.

6. **Object-Oriented Programming Languages**: Organize code around objects, combining data and functionality. Examples include Java, C++, and Python.

7. **Scripting Languages**: Interpreted languages used for automating repetitive tasks and extending functionality in software applications. Examples include JavaScript, Python, and Ruby.

8. **Domain-Specific Languages (DSLs)**: Designed for specific tasks or domains, tailored to address particular problems more efficiently. Examples include SQL for database queries and HTML/CSS for web development.

Each type of programming language serves different purposes and has its own syntax, paradigms, and areas of application.

## 📚 Types of Programming Languages

Low-level languages, such as machine language, communicate with computers using binary code. However, assembly language was developed to make programming more human-readable, using symbolic instructions like "ADD A, B" for adding numbers. Despite its readability, assembly language still requires translation into machine code by an assembler. In contrast, high-level languages like FORTRAN and BASIC are more user-friendly, resembling natural language and allowing programmers to think in the language. These languages need translation into machine code before execution, done by compilers or interpreters. Examples of high-level languages include C, C++, and Java. Each language has its strengths and weaknesses.  Programming languages are classified not only by their syntax but also by their paradigms, such as procedural, structured, and object-oriented programming.

**Low-level vs. High-Level vs.Middle-level Programming Languages**:

Programming languages come in various forms, each with its unique characteristics and purposes. Here's a breakdown of low-level, high-level, and middle-level languages:

1. **Low-level Languages**:
   - Examples: Machine language (binary) and assembly language.
   - These languages offer minimal abstraction from the computer's hardware, directly corresponding to specific machine instructions.
   - Their proximity to the machine allows for speed, efficiency, and precise hardware control.
   - Machine language, comprising binary instructions, is the lowest level, directly executed by the computer's processor.
   - Assembly language employs mnemonics and symbols for better readability than machine language.

2. **High-level Languages**:
   - Examples: Python, JavaScript.
   - High-level languages are far removed from machine architecture, resembling human language syntax.
   - They prioritize ease of use and portability, enabling programs to run on various systems.
   - While they offer convenience, they tend to be slower and consume more memory due to abstraction.

3. **Middle-level Languages**:
   - Examples: C, C++.
   - Acting as a bridge between low-level and high-level languages, they balance hardware control and human readability.
   - Middle-level languages provide a level of abstraction while retaining control over hardware.
   - They offer a compromise between speed, efficiency, and ease of programming.

In summary, low-level languages prioritize hardware control, high-level languages prioritize ease of use, while middle-level languages strike a balance between the two.

## Programming Language Paradigms

Programming languages are categorized based on not only their syntax but also their paradigms, which represent fundamental approaches to software design and development. Here's an explanation of three common paradigms:

1. **Procedural Programming**:
   - **Definition**: In procedural programming, the focus is on the step-by-step process of executing instructions. Programs are structured around procedures or routines that manipulate data.
   - **Characteristics**: It emphasizes procedures or routines that perform specific tasks, often using functions or subroutines.
   - **Example Languages**: C, Pascal.

2. **Structured Programming**:
   - **Definition**: Structured programming emphasizes clear, organized code with well-defined control structures like loops and conditionals.
   - **Characteristics**: It promotes the use of structured control flow constructs to enhance code readability and maintainability.
   - **Example Languages**: Python, Java.

3. **Object-Oriented Programming (OOP)**:
   - **Definition**: OOP focuses on modeling real-world entities as objects that have attributes (data) and behaviors (methods). It emphasizes encapsulation, inheritance, and polymorphism.
   - **Characteristics**: It enables modular, reusable, and scalable code by organizing data and behavior into objects and classes.
   - **Example Languages**: Java, C++.

Each paradigm offers its own advantages and is suited to different types of applications and development scenarios. Developers choose the paradigm that best fits the requirements of their project and aligns with their programming style and preferences.

Selecting the appropriate programming language depends on factors such as project requirements, performance needs, developer familiarity, and community support. Understanding the strengths and weaknesses of each language is essential for making informed decisions.

## Programming Naming Conventions

In programming, naming conventions are vital for ensuring code readability and consistency. Programmers regularly name variables, functions, and classes, and following naming conventions offers a standardized method for naming these entities. This consistency enhances clarity, particularly in collaborative projects.

Let's delve into four popular conventions: **Camel, Snake, Kebab, and Pascal Case :**

1. **Camel Case**: Begins with a lowercase letter and subsequent words start with uppercase letters. Examples: `firstName`, `lastName`.
2. **Snake Case**: Words are connected with underscores, all lowercase. Examples: `first_name`, `last_name`.
3. **Kebab Case**: Similar to snake case, but uses hyphens instead of underscores. Examples: `first-name`, `last-name`.
4. **Pascal Case**: Each word starts with an uppercase letter, no separators. Examples: `FirstName`, `LastName`.

> **Python**: Variables and functions: snake case. Classes: pascal case.
> **JavaScript**: Variables and functions: camel case. Classes: pascal case.
> **Screaming Snake Case**: Common for constants in C, JavaScript, and Java.

**List of Programming Naming Conventions**:

1. **Camel Case**

   - **Definition:** First word in lowercase, subsequent words start with a capital letter.
   - **Examples:** `firstName`, `currentAccountBalance`
   - **Usage:** Widely adopted in JavaScript, Java, and .NET.
2. **Camel Snake Case**

   - **Definition:** Similar to camel case but with underscores between words.
   - **Examples:** `minutes_Taken`, `withdrawal_Amount`
   - **Usage:** Similar to camel case.
3. **Snake Case**

   - **Definition:** Words are in lowercase, separated by underscores.
   - **Examples:** `last_name`, `annual_earnings`
   - **Usage:** Python, Ruby, and database naming.
4. **Screaming Snake Case**

   - **Definition:** Words in uppercase, separated by underscores.
   - **Examples:** `FIRST_NAME`, `TOTAL_SCORE`
   - **Usage:** Common for constants in C, JavaScript, and Java.
5. **Kebab Case**

   - **Definition:** Words in lowercase, separated by dashes.
   - **Examples:** `first-name`, `transactions-made`
   - **Usage:** Found in CSS class names, HTML ids, etc.
6. **Screaming Kebab Case**

   - **Definition:** Similar to kebab case but with uppercase letters.
   - **Examples:** `LAST-NAME`, `TOTAL-PAID`
   - **Usage:** Often used in macros.
7. **Pascal Case**

   - **Definition:** Every word starts with a capital letter, no separators.
   - **Examples:** `FirstName`, `TotalBalance`
   - **Usage:** Common in class names and enums.
8. **Train Case:**

   - **Definition:** Words capitalized with dashes between them.
   - **Examples:** `First-Name`, `Last-Name`
   - **Usage:** Seen in HTTP headers.
9. **Lowercase**

   - **Definition:** Words in lowercase without separators.
   - **Examples:** `middlename`, `firstlogindate`
   - **Usage:** Typically seen in HTML elements and attributes.
10. **Spongebob Case**

    - **Definition:** Alternating uppercase and lowercase letters for sarcasm.
    - **Examples:** `tHiS_iS_aN_eXaMpLe`
    - **Usage:** Mainly for humor and joke code.

Choosing the right naming convention is fundamental for coding clarity and maintainability, reflecting your coding style and personality. Adhering to conventions ensures consistency and readability, so familiarize yourself with your language's conventions and consult style guides for best practices.

[Programming Methodology](https://www.toppr.com/guides/computer-science/programming-methodology/general-concepts-of-programming-methodology/)

[How To Become a Programmer?](https://www.simplilearn.com/how-to-become-programmer-article)

[Programming languages and programming paradigms](https://unixdigest.com/articles/programming-languages-and-programming-paradigms.html)

[An Introduction to Programming Paradigms - FreeCodeCamp](https://www.freecodecamp.org/news/an-introduction-to-programming-paradigms/)

[Software development methodologies, project life cycle](https://ddi-dev.com/blog/programming/7-best-software-development-methodologies-pros-and-cons/)