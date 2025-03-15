1. What is the purpose of the main function in a C++ program?
The main function in a C++ program serves as the entry point, where program execution begins, and it's essential for the program to run. 
Here's a more detailed explanation:
      Entry Point:
          The operating system (OS) looks for a function named main to start executing a C++ program. 
      Required:
          Every C++ program must have a main function for it to compile and execute successfully. 
      Restrictions:
          The main function has certain restrictions that don't apply to other functions, such as not being overloaded, declared as inline or static, or having its           address taken. 
      Command-Line Arguments:
          The main function can optionally take command-line arguments (using int argc, char* argv[]) which allows the program to receive input from the user when             it's executed from the command line. 
      Return Value:
          The main function typically returns an integer value (usually 0 to indicate successful execution), but the compiler will supply a return value of zero if           none is specified.

------------------------------------------------------------------------------------------------------------------------------------

2. Explain the significance of the return type of the main function. 
The main function in C is typically defined to return an integer value. A return statement in C's main() is used to specify the exit status of the program. 
By convention, a return value of 0 indicates successful execution, while non-zero values may represent errors or specific conditions.

------------------------------------------------------------------------------------------------------------------------------------

3. What are the two valid signatures of the main function in C++? 
The C++ standard defines two valid signatures for the main function:
      int main(): 
        This signature indicates that the main function takes no arguments and returns an integer value.
      int main(int argc, char *argv[]): 
        This signature indicates that the main function takes two arguments: an integer argc representing the number of command-line arguments, and an array of             character pointers argv representing the command-line arguments themselves. It also returns an integer value.

------------------------------------------------------------------------------------------------------------------------------------

4. What is function prototyping and why is it necessary in C++? 
A function prototype in C++ is a declaration of a function's name, return type, and parameters before its actual definition. It acts as a blueprint, informing the compiler about the function's existence and signature before it is used in the code. 
The syntax for a function prototype is:
      return_type function_name(parameter_list);
For example:
      int add(int a, int b);

Function prototypes are necessary in C++ for several reasons:
      Enabling function calls before definition:
            Prototypes allow functions to be called before their actual definition in the code. This is particularly useful for organizing code and creating                    modular programs.
      Type checking:
            The compiler uses prototypes to verify the correctness of function calls, ensuring that the number and types of arguments match the function's                       signature.This helps catch errors during compilation rather than at runtime.
      Separate compilation:
            Prototypes are essential for separate compilation, where different parts of a program are compiled independently. By including prototypes in header                 files,other source files can use functions defined elsewhere without needing to see their implementation.
      Avoiding ambiguity:
            Without prototypes, the compiler might make incorrect assumptions about a function's return type or parameters, leading to unexpected behavior or                   errors.
      Improved code readability:
            Prototypes provide a clear and concise overview of the functions available in a program, making the code easier to understand and maintain.

------------------------------------------------------------------------------------------------------------------------------------

5. How do you declare a function prototype for a function that returns an integer and takes two integer parameters? 
To declare a function prototype for a function that returns an integer and takes two integer parameters, you would write something like this: 
int myFunction(int param1, int param2);. 

#int: This specifies that the function returns an integer value.
#myFunction: This is the name of the function (you can choose any valid name).
#(int param1, int param2): This declares the function's parameters: two integers named param1 and param2.
;: This semicolon is required to complete the declaration.

------------------------------------------------------------------------------------------------------------------------------------

6. What happens if a function is used before it is prototyped? 
If a function is used before its prototype (or declaration) in C/C++, the compiler may assume a default return type (often int) and potentially lead to errors or unexpected behavior if the function's actual signature doesn't match this assumption. 

------------------------------------------------------------------------------------------------------------------------------------

7. What is the difference between a declaration and a definition of a function? 
A function declaration (or prototype) simply tells the compiler about the function's name, return type, and parameters, while a function definition provides the actual code that the function executes. 

------------------------------------------------------------------------------------------------------------------------------------

8. How do you call a simple function that takes no parameters and returns void? 
To call a simple function in C++ that takes no parameters and returns void, you simply write the name of the function followed by parentheses. For example, if the function is defined as:
    void myFunction() {
        // Function body
    }
You would call it like this:
    myFunction();

------------------------------------------------------------------------------------------------------------------------------------

9. Explain the concept of "scope" in the context of functions. 
In the context of functions, "scope" defines the visibility and accessibility of variables and functions within a program, determining where and how they can be used. 

What is Scope?
Scope is the area of a program where a variable or function is recognized and can be accessed. It essentially controls the "visibility" of variables and functions, ensuring they are used in the intended context. 

Types of Scope:
      Global Scope: 
          Variables and functions declared outside of any function have global scope, meaning they are accessible from anywhere in the program. 
      Function Scope (Local Scope): 
          Variables and functions declared inside a function have function scope, meaning they are only accessible within that specific function. 
      Block Scope: 
          Some languages (like JavaScript with let and const) also support block scope, where variables declared within a block (e.g., inside if statements or for           loops) are only accessible within that block. 

Why is Scope Important?
      Preventing Name Conflicts: 
          Scope allows you to use the same variable name in different parts of your program without causing conflicts because the variables are only accessible              within their respective scopes. 
      Encapsulation and Modularity: 
          Scope helps to encapsulate code and data, making it easier to organize and maintain larger programs. 
      Data Protection: 
          By limiting access to variables, scope helps prevent unintended modification of data. 

    #include <iostream>
    
    int globalVar = 10; // Global scope
    
    void myFunction() {
        int localVar = 20; // Local scope
        std::cout << "Inside myFunction:" << std::endl;
        std::cout << "globalVar = " << globalVar << std::endl; // Accessible
        std::cout << "localVar = " << localVar << std::endl; // Accessible
    }
    
    int main() {
        int mainVar = 30; // Local scope to main
    
        myFunction();
    
        std::cout << "Inside main:" << std::endl;
        stdasecout << "globalVar = " << globalVar << std::endl; // Accessible
        std::cout << "mainVar = " << mainVar << std::endl; // Accessible
        // std::cout << "localVar = " << localVar << std::endl; // Error: localVar is not in scope
    
        return 0;
    }

------------------------------------------------------------------------------------------------------------------------------------

10. What is call by reference in C++? 
Call by reference in C++ is a method of passing arguments to a function where the memory address of the variable is passed instead of its value. This means that the function can directly access and modify the original variable, and any changes made within the function will persist after the function call. To implement call by reference, one can use pointers or references.
    
    #include <iostream>
    
    void swap_by_reference(int &a, int &b) {
      int temp = a;
      a = b;
      b = temp;
    }
    
    int main() {
      int x = 10;
      int y = 20;
      std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
      swap_by_reference(x, y);
      std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
      return 0;
    }

------------------------------------------------------------------------------------------------------------------------------------

11. How does call by reference differ from call by value?
Difference Between Call By Value And Call By Reference (+ ...In programming, "call by value" passes a copy of a variable's value to a function, so changes inside the function don't affect the original. "Call by reference", on the other hand, passes a reference (or pointer) to the original variable, allowing functions to modify the original data directly. 

------------------------------------------------------------------------------------------------------------------------------------

12. Provide an example of a function that uses call by reference to swap two integers. 
    #include <iostream>
    
    void swap_by_reference(int &a, int &b) {
      int temp = a;
      a = b;
      b = temp;
    }
    
    int main() {
      int x = 10;
      int y = 20;
      std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
      swap_by_reference(x, y);
      std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
      return 0;
    }

------------------------------------------------------------------------------------------------------------------------------------

13. What is an inline function in C++? 
An inline function in C++ is a function where the compiler replaces the function call with the actual code of the function at compile time. The inline keyword is used to suggest to the compiler that a function should be treated as inline. However, the compiler may choose to ignore this suggestion. Inline functions can help improve performance by eliminating the overhead associated with function calls, such as pushing arguments onto the stack and jumping to the function's body. They are most effective for small, frequently called functions. 
    inline int add(int a, int b) {
      return a + b;
    }
    
    int main() {
      int sum = add(5, 3); // The compiler may replace this with: int sum = 5 + 3;
      return 0;
    }

------------------------------------------------------------------------------------------------------------------------------------

14. How do inline functions improve performance? 
The inline keyword suggests that the compiler substitute the code within the function definition in place of each call to that function. In theory, using inline functions can make your program faster because they eliminate the overhead associated with function calls.

------------------------------------------------------------------------------------------------------------------------------------

15. Explain the syntax for declaring an inline function. 
The syntax for declaring an inline function in C++ involves using the inline keyword before the function's return type in its declaration. The general form is:
    inline return_type function_name(parameter_list) {
        // function body
    }

      inline: 
          This keyword suggests to the compiler that the function's code should be inserted directly at the point where it is called, instead of performing a                function call.
      return_type: 
          Specifies the data type of the value returned by the function. 
      function_name: 
          The name used to call the function.
      parameter_list: 
          A list of parameters the function takes, enclosed in parentheses. It can be empty if the function takes no arguments.
      function_body: 
          Contains the code that defines the function's actions, enclosed in curly braces.

------------------------------------------------------------------------------------------------------------------------------------

16. What are macros in C++ and how are they different from inline functions? 
In C++, macros are preprocessor directives that perform simple text substitution, while inline functions are true functions that can be expanded at the point of call, offering type checking and semantic processing by the compiler. 

------------------------------------------------------------------------------------------------------------------------------------

17. Explain the advantages and disadvantages of using macros over inline functions. 

Advantages of Macros:
      Faster Execution:
          Macros are expanded directly into the code during preprocessing, potentially leading to faster execution times, as there's no function call overhead. 
      More Control:
          Macros offer greater control over code generation and can be used for tasks that are difficult or impossible with functions, such as creating                      conditional code blocks. 
      Can be used for preprocessor directives:
          Macros can be used to define constants, include files, and perform other preprocessor tasks. 
Disadvantages of Macros:
      Lack of Type Safety:
          Macros don't perform type checking, which can lead to errors that are difficult to detect. 
      Debugging Difficulties:
          Debugging code with macros can be challenging because the macro expansion is not always easy to follow. 
      Code Readability:
          Macros can make code harder to read and understand, especially if they are complex or poorly named. 
      Can cause unexpected results:
          Macros can lead to unexpected results due to side effects or unintended parameter evaluation. 

Advantages of Inline Functions:
      Type Safety:
          Inline functions are treated as regular functions, so they benefit from type checking and other compiler optimizations. 
      Better Compiler Integration:
          Inline functions are better integrated with the compiler's optimization capabilities, which can lead to better performance. 
      Improved Readability:
          Inline functions are easier to read and understand than macros, especially if they are well-named and documented. 
      Debugging Easier:
          Debugging inline functions is easier than debugging macros because the compiler can generate better debugging information. 
Disadvantages of Inline Functions:
      Increased Code Size: 
          Inline functions can increase code size because the function code is duplicated at each call site. 
      Less Control: 
          Inline functions offer less control over code generation than macros. 
      Compiler Dependency: 
          Whether a function is actually inlined depends on the compiler and its optimization settings. 

------------------------------------------------------------------------------------------------------------------------------------

18. Provide an example to illustrate the differences between macros and inline functions. 
To illustrate the difference between macros and inline functions, consider a simple square function: a macro would directly substitute the code, while an inline function would be compiled and treated like a regular function, with type checking and potential for debugging. 

Macro:
    #define SQUARE(x) x * x
        In this macro, SQUARE(x) will be replaced by x * x before compilation. This means that if x is (a + b), the macro will expand to a + b * a + b, which is           likely not the intended result. 

Inline Function:
    inline int square(int x) {
      return x * x;
    }
        Here, square(x) is a regular function, but the compiler can choose to "inline" it, meaning it will replace the function call with the function's code at           the point of call, but it will still be treated as a function with type checking and debugging capabilities. 

------------------------------------------------------------------------------------------------------------------------------------

19. What is function overloading in C++? 
Function overloading in C++ is a feature that allows multiple functions to have the same name but different parameters within the same scope. The compiler differentiates between these functions based on the number, type, or sequence of their parameters. This capability enhances code readability and maintainability by enabling the use of a single function name for operations that perform similar tasks on different data types or with varying input requirements.

    #include <iostream>
    
    int add(int a, int b) {
        return a + b;
    }
    
    double add(double a, double b) {
        return a + b;
    }
    
    int add(int a, int b, int c) {
        return a + b + c;
    }
    
    int main() {
        std::cout << add(2, 3) << std::endl;         // Calls add(int, int)
        std::cout << add(2.5, 3.5) << std::endl;     // Calls add(double, double)
        std::cout << add(2, 3, 4) << std::endl;      // Calls add(int, int, int)
        return 0;
    }

In this example, the add function is overloaded three times to handle integer addition, double addition, and the addition of three integers. The compiler selects the appropriate version of the function based on the arguments provided during the function call.

------------------------------------------------------------------------------------------------------------------------------------

20. How does the compiler differentiate between overloaded functions? 
The compiler differentiates between overloaded functions by analyzing the function signatures, which encompass the function name, the number, types, and order of its parameters. 

------------------------------------------------------------------------------------------------------------------------------------


21. Provide an example of overloaded functions in C++. 

    #include <iostream>
    
    // Function to calculate the area of a square
    int area(int side) {
      return side * side;
    }
    
    // Function to calculate the area of a rectangle
    int area(int length, int width) {
      return length * width;
    }
    
    // Function to calculate the area of a circle
    double area(double radius) {
      return 3.14159 * radius * radius;
    }
    
    int main() {
      std::cout << "Area of square: " << area(5) << std::endl;
      std::cout << "Area of rectangle: " << area(4, 6) << std::endl;
      std::cout << "Area of circle: " << area(3.0) << std::endl;
      return 0;
    }

In this example, the area function is overloaded three times: once for an integer side (square), once for integer length and width (rectangle), and once for a double radius (circle). When the area function is called, the compiler determines which version to execute based on the arguments provided.

------------------------------------------------------------------------------------------------------------------------------------

22. What are default arguments in C++? 
Default arguments in C++ are pre-defined values provided in a function declaration. These values are automatically assigned by the compiler if the function call omits the corresponding arguments. If a value is explicitly passed for that argument during the function call, the default value is overridden. Default arguments must be placed at the end of the parameter list, ensuring that if one parameter has a default value, all subsequent parameters to its right must also have default values. This rule exists because arguments are matched from left to right during a function call. 
    
    #include <iostream>
    
    int sum(int x, int y, int z = 0, int w = 0) {
        return (x + y + z + w);
    }
    
    int main() {
        std::cout << sum(10, 15) << std::endl;      // Output: 25 (z and w use default values)
        std::cout << sum(10, 15, 25) << std::endl;   // Output: 50 (w uses default value)
        std::cout << sum(10, 15, 25, 30) << std::endl; // Output: 80 (all values are provided)
        return 0;
    }

------------------------------------------------------------------------------------------------------------------------------------

23. How do you specify default arguments in a function declaration? 
To specify default arguments in a function declaration in C++, you assign a value to a parameter within the function declaration using the = operator (e.g., void myFunction(int x = 10, int y = 20);). 

------------------------------------------------------------------------------------------------------------------------------------

24. What are the rules for using default arguments in functions? 
Rules for Default Arguments:
      Trailing Parameters: 
          Parameters with default values must be the trailing parameters in the function declaration. 
      One Declaration: 
          You should specify default arguments in the function declaration, not in the function definition. 
      Right to Left: 
          If you have multiple parameters with default values, the rightmost parameter must have a default value, followed by the second rightmost, and       so             on. 
      Implicit Conversion: 
          The default argument must be implicitly convertible to the parameter type. 
      Compile Time: 
          The default value must be known at compile time and cannot be changed during runtime. 
      Overriding: 
          If arguments are passed when the function is called, the default arguments are ignored. 

------------------------------------------------------------------------------------------------------------------------------------

25. Provide an example of a function with default arguments. 
    #include <iostream>
    #include <string>
    
    void greet(std::string name = "Guest", std::string greeting = "Hello") {
      std::cout << greeting << ", " << name << "!" << std::endl;
    }
    
    int main() {
      greet(); // Output: Hello, Guest!
      greet("Alice"); // Output: Hello, Alice!
      greet("Bob", "Good morning"); // Output: Good morning, Bob!
      return 0;
    }

------------------------------------------------------------------------------------------------------------------------------------



