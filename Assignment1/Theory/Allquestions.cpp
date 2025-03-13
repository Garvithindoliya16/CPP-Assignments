1. Fundamental Difference Between Procedural and Object-Oriented Programming (OOP)
Procedural Programming: Focuses on procedures (functions) and follows a top-down approach where the program is structured into functions that operate on data. Example: C.
Object-Oriented Programming: Focuses on objects, which encapsulate data and behavior. It follows a bottom-up approach. Example: C++, Java.
Example:
        // Procedural approach
        #include <iostream>
        using namespace std;
        
        int add(int a, int b) {
            return a + b;
        }
        
        int main() {
            int sum = add(5, 3);
            cout << "Sum: " << sum;
        }
        // Object-Oriented approach
        #include <iostream>
        using namespace std;
        
        class Calculator {
        public:
            int add(int a, int b) {
                return a + b;
            }
        };
        
        int main() {
            Calculator calc;
            cout << "Sum: " << calc.add(5, 3);
        }
----------------------------------------------------------------------------------------------------------

2. Definition of OOP & Core Characteristics
Definition: Object-Oriented Programming (OOP) is a programming paradigm based on objects, which are instances of classes that contain data (attributes) and functions (methods).

Core Characteristics:

Encapsulation
Inheritance
Polymorphism
Abstraction

----------------------------------------------------------------------------------------------------------

3. Concept of Abstraction & Importance
Definition: Abstraction hides implementation details and exposes only the necessary functionalities.
Importance: Reduces complexity, improves maintainability, and enhances security.

Example:
        class Car {
        public:
            void start() { cout << "Car started"; } // Only this function is accessible
        private:
            void checkFuel() { cout << "Checking fuel..."; } // Hidden implementation
        };

----------------------------------------------------------------------------------------------------------

4. Benefits of OOP Over Procedural Programming
i.Code reusability through inheritance
ii.Improved maintainability and modularity
iii.Scalability for large projects
iv.Security via encapsulation

----------------------------------------------------------------------------------------------------------

5. Real-World Example of OOP
i.Banking System
ii.Objects: Account, Customer, Transaction
iii.Encapsulation protects account details.
iv.Inheritance allows SavingsAccount & CheckingAccount to derive from a common Account class.
v.Polymorphism lets multiple accounts perform different transactions.

----------------------------------------------------------------------------------------------------------

6. Four Key OOP Principles
Encapsulation – Hiding data inside a class
Inheritance – Creating a new class from an existing class
Polymorphism – Using the same interface for different data types
Abstraction – Hiding implementation details

----------------------------------------------------------------------------------------------------------

7.	Explain how encapsulation helps to protect data and create modular code. Give an example using a class and its members.
Encapsulation protects data by bundling it with the methods that operate on it, restricting direct access and promoting controlled interaction, while also enabling modular code by creating independent, self-contained units. 
        class BankAccount {
        private:
            double balance;
        public:
            void deposit(double amount) { balance += amount; }
            double getBalance() { return balance; } // Only controlled access
        };

----------------------------------------------------------------------------------------------------------

8.	What is inheritance? How does it promote code reuse and maintainability? Provide a simple example using classes.
Inheritance is a mechanism where a new class (subclass) can inherit attributes and behaviors from an existing class (superclass). 
How it Promotes Code Reuse:
    Reduces Redundancy: Subclasses inherit common functionality from their parent class, avoiding code duplication. 
    Extensibility: Subclasses can extend or modify inherited functionality, creating specialized versions of the parent class. 
How it Improves Maintainability:
    Hierarchical Structure: Inheritance creates a clear relationship between classes, making the code easier to understand and maintain. 
    Centralized Changes: Modifying the parent class automatically propagates changes to all subclasses, ensuring consistency. 
    Simplified Design: Instead of starting from scratch, developers can extend existing classes, leading to a more streamlined design. 
        class Animal {
        public:
            void eat() { cout << "Eating..."; }
        };
        
        class Dog : public Animal {
        public:
            void bark() { cout << "Barking..."; }
        };
        
        int main() {
            Dog d;
            d.eat(); // Inherited function
            d.bark();
        }

----------------------------------------------------------------------------------------------------------

9.	Describe polymorphism. How does it contribute to flexibility and extensibility in software design? Give examples of function/operator overloading and function overriding.
Polymorphism, in object-oriented programming, is the ability of an object to take on multiple forms, meaning a single method or operator can behave differently depending on the context or the type of object it's used with, allowing for more flexible and adaptable code design. It essentially enables you to write code that can work with various types of objects using a common interface, promoting reusability and extensibility.
How Polymorphism Contributes to Flexibility and Extensibility:
    Code Reusability:
    By defining a common interface for different object types, you can write generic code that operates on multiple classes without needing to rewrite logic for       each specific type.
    Ease of Adding New Functionality:
    When you need to introduce a new type of object, you can simply create a new class that inherits from the existing base class and implement the required           methods, without modifying the existing code that interacts with the base class.
    Improved Maintainability:
    Since code is more generic and less tightly coupled, changes to one part of the system are less likely to require widespread modifications.
    Examples of Polymorphism:
    Function Overloading: This occurs when multiple functions have the same name but different parameter lists. The compiler determines which function to call         based on the arguments provided.
    Function Overloading:
        class Math {
        public:
            int add(int a, int b) { return a + b; }
            double add(double a, double b) { return a + b; } // Same name, different parameters
        };
    Function Overriding:
        class Animal {
        public:
            virtual void sound() { cout << "Animal sound"; }
        };
        
        class Dog : public Animal {
        public:
            void sound() override { cout << "Dog barks"; }
        };

----------------------------------------------------------------------------------------------------------

10. Difference Between Overloading & Overriding
Method Overloading:
    Definition: 
      Creating multiple methods with the same name but different parameter lists (different number, order, or type of parameters) within the same class. 
    Purpose: 
      Allows you to perform the same action in different ways, adapting to various inputs while maintaining a consistent method name. 
Key Characteristics:
    Methods have the same name but different signatures (parameter lists). 
    The compiler distinguishes between overloaded methods based on the arguments passed during the call. 
    Overloading is a form of compile-time polymorphism (also known as static polymorphism). 
    Overloading can occur within a single class. 
    The return type does not matter for overloading. 
Method Overriding:
    Definition: 
      A subclass providing a specific implementation of a method that is already defined in its parent class. 
    Purpose: 
      Enables you to customize or extend the behavior of inherited methods, allowing subclasses to specialize the functionality of their parent class.

----------------------------------------------------------------------------------------------------------

11. Advantages of OOP
Code reusability
Scalability for complex projects
Improved security via encapsulation

----------------------------------------------------------------------------------------------------------

12. Application Domains of OOP
Game development
GUI applications
Embedded systems
Data Science

----------------------------------------------------------------------------------------------------------

13.	Discuss the impact of OOP on code maintainability and reusability.
Object-Oriented Programming (OOP) significantly enhances code maintainability and reusability by promoting modularity, encapsulation, and inheritance, leading to cleaner, more organized, and flexible codebases. 
How OOP Improves Code Maintainability:
      Modularity:
        OOP encourages breaking down complex systems into smaller, manageable units called objects, each with its own data and behavior. This modularity makes it          easier to understand, debug, and modify individual components without affecting others. 
      Encapsulation:
        OOP hides internal details of objects, exposing only necessary interfaces. This protects the internal state of objects and simplifies maintenance by               preventing accidental modification from outside code. 
      Abstraction:
        OOP allows developers to focus on essential features while hiding unnecessary details, leading to simpler and more manageable code. 
      Clear Structure:
        OOP's use of classes and objects provides a structured and organized approach to software development, making it easier to navigate and maintain large             codebases. 
How OOP Improves Code Reusability:
      Inheritance:
        OOP allows classes to inherit properties and behaviors from parent classes, promoting code reuse without duplication. 
      Polymorphism:
        OOP enables objects of different classes to respond to the same method call in different ways, making code more flexible and reusable. 
      Composition:
        OOP allows developers to create new objects by combining existing ones, further promoting code reuse and modularity. 
      Reusable Components:
        OOP promotes the creation of reusable components (classes and objects) that can be used across different parts of an application or even different                 projects. 

----------------------------------------------------------------------------------------------------------

14.	How does OOP contribute to the development of large and complex software systems?
Object-Oriented Programming (OOP) contributes to the development of large and complex software systems by promoting modularity, reusability, and maintainability through concepts like encapsulation, abstraction, inheritance, and polymorphism, making it easier to manage, extend, and debug large projects. 

----------------------------------------------------------------------------------------------------------

15. Benefits of OOP in Software Development
Extensibility (easy to add features)
Encapsulation (data security)
Code reuse

----------------------------------------------------------------------------------------------------------

16.	Describe the basic structure of a C++ program. What are the essential components?
A basic C++ program structure typically includes header files, the main() function, variable declarations, input/output operations, and comments. 
Here's a more detailed breakdown of the essential components:
      Header Files:
        These files contain declarations of functions, classes, and other elements that your program will use. Common examples include <iostream> for input/output         and <string> for string manipulation. 
      The main() Function:
        This is the starting point of your program's execution. The int main() function is where the program begins to run. 
      Variable Declaration and Initialization:
        Before using variables, you need to declare them (specify their type and name) and optionally initialize them with a starting value. 
      Input and Output (I/O) Operations:
        C++ uses cin for input and cout for output, allowing the program to interact with the user or display results. 
      Comments:
        Comments are used to explain the code, making it easier to understand and maintain. They are ignored by the compiler. 
      Return Statement:
        The return statement in the main() function typically specifies the program's exit code (0 usually indicates successful execution). 
      Statements:
        C++ programs are made up of statements, which are instructions that the program executes. 
      Namespaces:
        Namespaces help organize code by grouping related declarations, preventing naming conflicts. 
      Classes and Objects:
        C++ is an object-oriented language, so you can define classes (blueprints for creating objects) and objects (instances of classes). 

----------------------------------------------------------------------------------------------------------

17.	Explain the purpose of namespaces in C++. How do they help to avoid naming conflicts?
In C++, namespaces group related identifiers (variables, functions, classes, etc.) to avoid naming conflicts, enabling the reuse of the same names in different parts of a program without ambiguity. 
Here's a more detailed explanation:
      Purpose of Namespaces:
        Organization: Namespaces help organize code into logical groups, making large projects easier to manage and maintain. 
        Scope: They create a scope for identifiers, meaning that identifiers within a namespace are distinct from those outside of it. 
        Name Resolution: Namespaces allow you to use the same names for identifiers in different parts of your code without causing conflicts. 
      How Namespaces Avoid Naming Conflicts:
        Unique Scopes: Each namespace provides a unique scope for its members. Identifiers within a namespace are only visible within that namespace and its                               nested namespaces. 
        Scope Resolution Operator: You can access members of a namespace using the scope resolution operator (::). For example, namespaceA::variable refers to the                                     variable named variable within namespace namespaceA. 
        Using Directives: You can use the using namespace directive to bring all members of a namespace into the current scope, but this is generally discouraged                             in large projects to avoid potential conflicts. 
        Using Declarations: You can also use using declarations to bring specific members of a namespace into the current scope. 
              #include <iostream>
          
              namespace MyProject {
                  int myVariable = 10;
                  void myPrint() {
                      std::cout << "MyProject::myPrint()" << std::endl;
                  }
              }
          
              namespace AnotherProject {
                  int myVariable = 20;
                  void myPrint() {
                      std::cout << "AnotherProject::myPrint()" << std::endl;
                  }
              }
          
              int main() {
                  std::cout << "MyProject::myVariable: " << MyProject::myVariable << std::endl;
                  std::cout << "AnotherProject::myVariable: " << AnotherProject::myVariable << std::endl;
                  MyProject::myPrint();
                  AnotherProject::myPrint();
                  return 0;
              }

----------------------------------------------------------------------------------------------------------

18.	What are identifiers in C++? What rules must be followed when creating them?
In C++, identifiers are names used to represent variables, functions, classes, and other entities in your code. 
      # Names can contain letters, digits and underscores.
      # Names must begin with a letter or an underscore (_)
      # Names are case-sensitive ( myVar and myvar are different variables)
      # Names cannot contain whitespaces or special characters like !, #, %, etc.

----------------------------------------------------------------------------------------------------------

19.	What are the differences between variables and constants in C++? How are they declared?
In C++, variables store data that can change during program execution, while constants store data that cannot be altered once initialized. Variables are declared using a data type and a name, while constants are declared using the const keyword before the data type. 
Here's a more detailed explanation:
      Variables:
        Purpose: To store data that can be modified during the program's execution. 
        Declaration:
          data_type variable_name; 
          Example: int age; 
        Initialization: Can be initialized during declaration or later in the program. 
          Example: int age = 25; 
      Constants:
        Purpose: To store data whose value remains fixed throughout the program's execution. 
        Declaration:
          const data_type constant_name = value; 
          Example: const double PI = 3.14159; 
        Initialization: Must be initialized during declaration. 
        Note: Attempting to modify a constant after initialization will result in a compile-time error. 

----------------------------------------------------------------------------------------------------------

20.	Explain how to use control structures (e.g., if-else, for, while) to control the flow of execution in a C++ program. Provide a simple code example
Types:
Control structures in C++ manage the order in which code is executed. They allow programs to make decisions and repeat actions based on conditions. The primary control structures are if-else, for, and while loops. 

    if-else Statement: This structure executes a block of code if a condition is true and optionally executes another block if the condition is false.
        #include <iostream>
        int main() {
            int num = 10;
            if (num > 0) {
                std::cout << "Number is positive" << std::endl;
            } else {
                std::cout << "Number is not positive" << std::endl;
            }
            return 0;
        }

    for Loop: This loop executes a block of code a specified number of times. It consists of initialization, condition, and increment/decrement parts.
        #include <iostream>
        int main() {
            for (int i = 0; i < 5; ++i) {
                std::cout << "Iteration: " << i << std::endl;
            }
            return 0;
        }

    while Loop: This loop executes a block of code as long as a condition is true. The condition is checked before each iteration. 
        #include <iostream>
        int main() {
            int count = 0;
            while (count < 3) {
                std::cout << "Count: " << count << std::endl;
                count++;
            }
            return 0;
        }


These control structures are fundamental for creating programs that can handle different scenarios and perform repetitive tasks efficiently.

----------------------------------------------------------------------------------------------------------
