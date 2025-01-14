1) Compiler 👍

A compiler is a computer software that transforms code of a programming language into another computer language. (It's also known as a software that converts high level language (programming language) to low level language (machine language, binary code)) It creates a new file when a programming language file is translated and updates that file each time it is compiled. So first it compiles the entire code and then creates this compiled version of that code (in C programming, this file is called the object file because its extension is .obj) and then we can execute this file

2) Cross Compiler 👍

A cross compiler is such a compiler that transforms the code in a such a way so that I can run on other operating systems as well, hence the name cross compiler

3) Decompiler 👍

A software/program that tranforms low level language code (programming language code) to a high level language code (machine code) is called a decompiler. So it means it can covert code from binary (01) to a programming language that is easily read by humans

4) Transpiler 👍

A software that is responsible for coverting a high level language code (a programming language) to another high level language (another programming language)

5) Interpreter 👍

An interpreter is a software that does the same job as a compiler but the major difference is instead of creating a compiled version of the given code file, it converts line by line. It means that an interpreter will tranform one line of high level language code to low level language code at a time. Its drawback is that after converting one line of code, it will give that translated piece of code to the system environmnet (in this case, the OS) and while the OS is executing that piece of code, the interpreter will have to wait for the execution of this one line by the OS. Only when that execution is completed, then only the interpreter can pick up a new line of code to translate.


6) JIT (Just-in time) compiler 👍

It has mixed features of both compiler and interpreter. It also translates code line by line. So when it translates one line of code and sends it for execution to the OS, it doesn't remain still, but rather starts to convert other lines of code and while the OS is busy executing the given code, JIT, in that period, the code is translated, saves it in a temporary memory called the buffer. So both OS and JIT keep on working parellely.

#Contants in C 👍

A constant is a value that after being assigned, can't be changed. Constants in C are of two types : a) primitive b) non-primitive

A) Primitive Contants 👍

These are the ones like ->

i) integer constant :->{

    For example, -3,0, 43 are the types of integer constants
}

ii) real constant :->{

    For example, 4.2, 2.0, -1.5 are the examples of real constants
}

iii) character constant :->{

    For example , 'd', '2', 'c' are the examples of character constants ('-2.5' is not a character constant becasue a character constant only consists of one character or 'Mumbai' is also not a character constant it's bacially a string constant of the type non-primitive contants.)
}
