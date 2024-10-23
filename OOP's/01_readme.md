# Classes

Imagine we’re trying to categorize everything in the world into two main groups:

- **Living Things**: Things that are alive, like humans, animals, and plants.  
- **Non-Living Things**: Objects that do not have life, like cars, rocks, and furniture.

From there, we can further divide **Living Things** into:

- **Humans**
- **Plants**

And within **Humans**, we can even have specific types, like:

- **Male**
- **Female**

This is how we naturally organize things, and it’s very similar to how classes and objects work in programming.

---

## What are Classes in C++?

In C++, a class allows you to create a blueprint for something (like a **HUMAN**). From this blueprint, you can create objects, each with its own attributes and methods. Think of a class as a category, and objects as the actual instances that belong to that category.

### Key Terms:

- **Class**: A blueprint or template for creating objects.
- **Object**: An instance of a class. Each object has its own attributes and can perform actions.
- **Attributes**: The data or properties related to an object (e.g., a name, height, or age).
- **Methods**: The actions or functions that an object can perform (e.g., a human can breathe, walk, etc.).

---

## What Are Objects in C++?

In C++, an object is an instance of a class. While a class is like a blueprint or template, an object is the actual thing created from that blueprint. Objects have both **attributes** (data or properties) and **methods** (functions or actions they can perform) defined by the class.


### 1. **Encapsulation**

#### Definition:
Encapsulation is the process of **hiding the internal details** (data) of an object and only exposing the necessary parts (functions). It protects the data from being directly accessed or modified from outside the object.

#### Real-life Example:
Imagine a **TV remote**. You press a button, and the TV turns on, but you don’t see or touch the complex wiring inside. The wires and circuits are **hidden** (encapsulated), and you only have access to the buttons you need.

#### Code Example:

```cpp
class TVRemote {
private:
    int volume;  // Hidden data (encapsulated)

public:
    // Public method to set the volume (safe access)
    void setVolume(int v) {
        if (v >= 0 && v <= 100) {  // Validate volume
            volume = v;
        }
    }

    // Public method to get the volume (safe access)
    int getVolume() {
        return volume;
    }
};

int main() {
    TVRemote remote;
    remote.setVolume(50);  // Setting volume
    cout << "The volume is: " << remote.getVolume() << endl;  // Getting volume
}
```

- Here, the variable `volume` is **private** and hidden from direct access. The only way to change or access it is through the public methods `setVolume()` and `getVolume()`. This is **encapsulation**—protecting the data from direct modification.

---

### 2. **Abstraction**

#### Definition:
Abstraction is the process of **showing only the necessary features** of an object while hiding the complex details. It simplifies the interaction with the object, allowing the user to focus on **what** the object does rather than **how** it does it.

#### Real-life Example:
Think about driving a **car**. You just use the steering wheel, pedals, and buttons, but you don’t need to understand how the **engine** works. The internal mechanics are hidden from you (abstracted), and you only use the essential controls.

#### Code Example:

```cpp
class Car {
public:
    // Public method that simplifies the process of driving
    void drive() {
        startEngine();
        pressGasPedal();
        cout << "Car is now driving!" << endl;
    }

private:
    // Private methods that handle complex details (hidden)
    void startEngine() {
        cout << "Engine started..." << endl;
    }
    
    void pressGasPedal() {
        cout << "Gas pedal pressed..." << endl;
    }
};

int main() {
    Car myCar;
    myCar.drive();  // The user only sees the simple 'drive' method
}
```

- In this example, the **user** interacts only with the `drive()` method. They don’t need to know the details of how the engine starts or how the car moves. Those details are hidden (abstracted). This is **abstraction**—hiding complex details and showing only what’s necessary.

---

### **Comparison between Encapsulation and Abstraction**

| **Encapsulation**                                | **Abstraction**                               |
|--------------------------------------------------|-----------------------------------------------|
| Encapsulation hides the **data** inside the object to protect it. | Abstraction hides the **complex implementation** and shows only the essential parts. |
| It focuses on **how** the data is accessed and modified (protects data). | It focuses on **what** the object does (simplifies interaction). |
| Achieved using **private** and **public** access specifiers. | Achieved by providing simple interfaces and hiding the detailed implementations. |
| Example: Protecting the volume of a TV remote (you can’t directly change the volume, only through methods). | Example: Driving a car without knowing how the engine works (you just use the simple controls). |

---

### **Code Example with Both Encapsulation and Abstraction**:

Let’s combine both concepts in a single example to see how they work together.

```cpp
class CoffeeMachine {
private:
    int waterLevel;  // Encapsulation: Hiding the water level

public:
    CoffeeMachine() : waterLevel(100) {}  // Constructor to set water level
    
    // Abstraction: Providing a simple way to make coffee
    void makeCoffee() {
        boilWater();
        brewCoffee();
        pourInCup();
        cout << "Enjoy your coffee!" << endl;
    }

private:
    // Encapsulation: These are hidden methods
    void boilWater() {
        if (waterLevel > 0) {
            cout << "Boiling water..." << endl;
            waterLevel -= 10;  // Using some water
        } else {
            cout << "Not enough water!" << endl;
        }
    }

    void brewCoffee() {
        cout << "Brewing coffee..." << endl;
    }

    void pourInCup() {
        cout << "Pouring coffee into the cup..." << endl;
    }
};

int main() {
    CoffeeMachine myMachine;
    myMachine.makeCoffee();  // The user only interacts with the simple 'makeCoffee' method
}
```

#### How both are applied:
- **Encapsulation**: The water level (`waterLevel`) and methods like `boilWater()` are hidden from direct access. You can’t directly change the water level; it’s handled internally by the machine.
- **Abstraction**: The user doesn’t need to worry about boiling water or brewing coffee. They just use the `makeCoffee()` method, and everything else is hidden. This simplifies the user’s interaction.

---

### Summary:

- **Encapsulation**: Protects and hides the **data** and how it is modified. Example: You can’t directly change the volume of a TV remote, only through safe methods.
- **Abstraction**: Hides the **complexity** and shows only the essential parts. Example: You drive a car without needing to know how the engine works.



### **Introduction to Getter and Setter Member Functions**

In C++, **getter** and **setter** functions are used to provide **controlled access** to the private members of a class. This follows the principle of **encapsulation**, where the data (variables) inside a class are kept private to protect them, but we still need a way to access and modify that data. That’s where getter and setter functions come in.

- **Getter** (also called an accessor) is a function that **retrieves** or "gets" the value of a private variable.
- **Setter** (also called a mutator) is a function that **sets** or "modifies" the value of a private variable.

### **Real-life Example**
Let’s think about a **bank account**. You can't directly access or modify the balance in your account (private data). You need to **ask the bank** to check the balance (getter) or to deposit/withdraw money (setter).

---

### **Code Example: Getter and Setter Member Functions in C++**

Let’s create a class called `BankAccount` where:
- **Balance** is kept private (so no one can directly change it).
- We provide getter and setter methods to safely access and update the balance.

```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private member (encapsulated)

public:
    // Constructor to initialize the balance
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Getter function to access the balance (read-only)
    double getBalance() {
        return balance;
    }

    // Setter function to update the balance (write)
    void setBalance(double newBalance) {
        if (newBalance >= 0) {  // Ensure balance is not negative
            balance = newBalance;
        } else {
            cout << "Invalid balance! Cannot set a negative balance." << endl;
        }
    }
};

int main() {
    BankAccount myAccount(1000.00);  // Creating a new account with $1000 balance

    // Using the getter to check the balance
    cout << "Initial Balance: $" << myAccount.getBalance() << endl;

    // Using the setter to update the balance
    myAccount.setBalance(1200.00);
    cout << "Updated Balance: $" << myAccount.getBalance() << endl;

    // Attempt to set a negative balance (should display an error)
    myAccount.setBalance(-500.00);
}
```

### **Explanation**:

1. **Private Data Member**: 
   - `balance` is private, meaning it can't be directly accessed or modified from outside the class.
   
2. **Getter Function (`getBalance`)**:
   - This function returns the current balance. It provides **read-only** access to the private `balance` variable.
   
3. **Setter Function (`setBalance`)**:
   - This function allows updating the `balance`. It also includes a simple **validation** to ensure the balance isn't set to a negative value. If an invalid value is provided, an error message is displayed.

### **Output**:
```
Initial Balance: $1000
Updated Balance: $1200
Invalid balance! Cannot set a negative balance.
```

### **Why Use Getters and Setters?**
- **Control**: You can add logic (like validation) inside the setter to prevent incorrect data.
- **Encapsulation**: It hides the actual implementation (like private variables) and provides a clean way to access them.
- **Security**: It ensures that important data can’t be changed in an unsafe way.

---

### Summary:
- **Getter**: Retrieves the value of a private variable.
- **Setter**: Allows you to modify the value of a private variable safely, often with checks or restrictions.




### **Explanation of Public and Private Access Specifiers**

In C++, access specifiers are used to control the **visibility** of class members (variables and functions). The two most common access specifiers are:

1. **Public**:
   - Members declared as **public** can be accessed from **anywhere** in the program, both inside and outside of the class. They are not restricted.
   - Example: A **TV remote button** is public; anyone can press it to perform an action like turning the TV on.

2. **Private**:
   - Members declared as **private** can only be accessed **inside the class** itself. They are **hidden** from outside the class.
   - Example: The **internal wiring** of the TV is private; no one can access or change it directly from the outside.

### **Demonstration of Encapsulation and Abstraction Using Getter/Setter Functions**

We can now use **encapsulation** and **abstraction** through the combination of private members and public getter/setter functions.

- **Encapsulation**: We hide the internal data (variables) and protect it from direct access. 
- **Abstraction**: We provide a simple way to interact with the data through functions (like getters and setters), abstracting away the complexity.

---

### **Sample Program: Encapsulation and Abstraction Using Getter/Setter Functions**

Let’s create a class `Person` with private data members (`name` and `age`), and we will provide public getter and setter functions to access and modify these values.

```cpp
#include <iostream>
using namespace std;

class Person {
private:
    string name;  // Private member: cannot be accessed directly
    int age;      // Private member: cannot be accessed directly

public:
    // Setter function to set the name (encapsulating the data)
    void setName(string personName) {
        name = personName;  // Set the private 'name' variable
    }

    // Getter function to get the name
    string getName() {
        return name;  // Return the private 'name' variable
    }

    // Setter function to set the age (with validation)
    void setAge(int personAge) {
        if (personAge > 0) {  // Ensuring age is a positive number
            age = personAge;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // Getter function to get the age
    int getAge() {
        return age;  // Return the private 'age' variable
    }

    // Public method to display person's info (abstraction)
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person1;  // Create an object of the class Person

    // Using setter functions to set the values
    person1.setName("John Doe");
    person1.setAge(25);

    // Using getter functions to get the values and display
    cout << "Name: " << person1.getName() << endl;
    cout << "Age: " << person1.getAge() << endl;

    // Using a method that abstracts details (displayInfo)
    person1.displayInfo();

    // Trying to set an invalid age
    person1.setAge(-5);  // This should give an error message
}
```

### **Explanation**:

1. **Private Data Members**:
   - `name` and `age` are private, so they are hidden from direct access outside the class. This ensures that only **controlled access** is allowed to these variables, using getter and setter functions.

2. **Public Getter and Setter Functions**:
   - The `setName()` and `setAge()` functions are **public** so that they can be accessed from anywhere. They allow us to safely **modify** the private members.
   - The `getName()` and `getAge()` functions are **public** and are used to **retrieve** the values of the private members.

3. **Validation** in Setters:
   - In the `setAge()` function, we added a simple check to ensure that the age is **positive**. If a negative value is passed, an error message is shown.

4. **Abstraction**:
   - The `displayInfo()` method is a simple example of **abstraction**. It hides the complexity of how the data is stored and retrieves only the **useful information**—name and age—and presents it in a clean format.

### **Output**:

```
Name: John Doe
Age: 25
Name: John Doe, Age: 25
Invalid age!
```

---

### **Application of Access Specifiers in a Sample Program**

Let’s look at another program where we use **public** and **private** access specifiers to control what can be accessed from outside the class.

```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private: Cannot be accessed directly from outside the class

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        balance = initialBalance;  // Initialize with a given value
    }

    // Public function to get the balance
    double getBalance() {
        return balance;  // Access the private member safely
    }

    // Public function to deposit money (with validation)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;  // Update the private member balance
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Public function to withdraw money (with validation)
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;  // Update the private member balance
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid or insufficient funds for withdrawal!" << endl;
        }
    }
};

int main() {
    // Create a bank account with $500 initial balance
    BankAccount myAccount(500.00);

    // Access and modify the balance using public methods
    cout << "Current Balance: $" << myAccount.getBalance() << endl;
    myAccount.deposit(150.00);  // Deposit money
    myAccount.withdraw(100.00);  // Withdraw money
    cout << "Final Balance: $" << myAccount.getBalance() << endl;
}
```

### **Explanation of Access Specifiers**:

1. **Private `balance`**:
   - The `balance` is declared as **private**, meaning no other part of the program can directly access it or change it.

2. **Public Methods**:
   - The methods like `getBalance()`, `deposit()`, and `withdraw()` are public, meaning they can be called from outside the class.
   - These methods allow controlled and safe access to the private member `balance`.

3. **Validation**:
   - The `deposit()` and `withdraw()` methods include validation to ensure the amount is valid and that there are enough funds to withdraw, further protecting the internal balance.

### **Output**:

```
Current Balance: $500
Deposited: $150
Withdrawn: $100
Final Balance: $550
```

---

### **Key Takeaways**:

- **Private members** are hidden from the outside world to ensure **data protection**.
- **Public methods** (getters and setters) provide controlled access to those private members.
- **Encapsulation** helps protect sensitive data, and **abstraction** simplifies interactions with complex objects.
- **Access specifiers** like `public` and `private` are essential in controlling what can be accessed or modified from outside the class.



### **Constructor in C++**

A **constructor** is a special function in C++ that is automatically called when an object of a class is created. It’s used to initialize the data members of a class. The constructor has the same name as the class and does not return a value, not even `void`.

There are two main types of constructors:
1. **Default Constructor**
2. **Parameterized Constructor**

---



### **1. Default Constructor**

A **default constructor** initializes the object with default values when it is created.

#### **Example of a Default Constructor (Brother Class):**

Let’s create a **Brother** class where the default name is "Unknown" and the default age is 0.

```cpp
#include <iostream>
using namespace std;

class Brother {
private:
    string name;
    int age;

public:
    // Default constructor (no parameters)
    Brother() {
        name = "Unknown";  // Set default name
        age = 0;           // Set default age
    }

    // Method to display brother's info
    void displayInfo() {
        cout << "Brother's Name: " << name << ", Age: " << age << " years" << endl;
    }
};

int main() {
    Brother myBrother;  // Default constructor is called automatically
    myBrother.displayInfo();  // Output: Brother's Name: Unknown, Age: 0 years
}
```

#### **Explanation**:
- The **default constructor** `Brother()` initializes the `name` to "Unknown" and `age` to 0.
- When we create a brother object (`myBrother`), the default constructor is called, and it sets the brother’s name and age automatically.

---

### **2. Parameterized Constructor**

A **parameterized constructor** takes arguments to initialize the object with specific values provided by the user.

#### **Example of a Parameterized Constructor (Brother Class):**

Let’s modify the **Brother** class to allow us to specify the name and age of the brother when we create the object.

```cpp
#include <iostream>
using namespace std;

class Brother {
private:
    string name;
    int age;

public:
    // Parameterized constructor (takes parameters)
    Brother(string brotherName, int brotherAge) {
        name = brotherName;  // Initialize name with the passed value
        age = brotherAge;    // Initialize age with the passed value
    }

    // Method to display brother's info
    void displayInfo() {
        cout << "Brother's Name: " << name << ", Age: " << age << " years" << endl;
    }
};

int main() {
    // Creating an object with specific values using the parameterized constructor
    Brother myBrother("John", 25);  // Name: John, Age: 25
    myBrother.displayInfo();        // Output: Brother's Name: John, Age: 25 years
}
```

#### **Explanation**:
- The **parameterized constructor** `Brother(string brotherName, int brotherAge)` allows us to set specific values for the brother’s name and age when the object is created.
- When we create the object `myBrother("John", 25)`, the constructor takes the values "John" and 25 and assigns them to `name` and `age`, respectively.

---

### **Key Differences Between Default and Parameterized Constructors**:
- **Default Constructor**: No arguments are passed, and default values like "Unknown" and 0 are assigned.
- **Parameterized Constructor**: Takes arguments to initialize the object with specific values like "John" and 25.

Both types of constructors are useful for initializing objects, with parameterized constructors allowing for more customization when the object is created.


---

### **3. Copy Constructor**

A **copy constructor** creates a new object by copying the properties of an existing object.

#### **Example of a Copy Constructor (Car Class)**

```cpp
#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    // Parameterized constructor
    Car(string carBrand, int carYear) {
        brand = carBrand;
        year = carYear;
    }

    // Copy constructor
    Car(const Car &car) {
        brand = car.brand;  // Copy brand from another Car object
        year = car.year;    // Copy year from another Car object
    }

    void displayInfo() {
        cout << "Car Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car originalCar("Toyota", 2020);    // Create the first object
    Car copiedCar(originalCar);         // Create a copy using the copy constructor

    originalCar.displayInfo();  // Output: Car Brand: Toyota, Year: 2020
    copiedCar.displayInfo();    // Output: Car Brand: Toyota, Year: 2020 (copy)
}
```

#### **Explanation**:
- The **copy constructor** `Car(const Car &car)` is used to copy the values of `brand` and `year` from the existing object `originalCar` to `copiedCar`.
- This ensures that `copiedCar` has the same properties as `originalCar`.

---

### **4. Overloaded Constructor**

An **overloaded constructor** means that the class can have multiple constructors with different parameters, allowing flexibility when creating objects.

#### **Example of an Overloaded Constructor (Car Class)**

```cpp
#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    // Default constructor
    Car() {
        brand = "Unknown";
        year = 0;
    }

    // Parameterized constructor
    Car(string carBrand, int carYear) {
        brand = carBrand;
        year = carYear;
    }

    // Another overloaded constructor (only brand is passed)
    Car(string carBrand) {
        brand = carBrand;
        year = 2022;  // Default year when only brand is given
    }

    void displayInfo() {
        cout << "Car Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;                // Calls default constructor
    Car car2("Honda", 2019);  // Calls parameterized constructor with brand and year
    Car car3("Tesla");        // Calls overloaded constructor with only brand

    car1.displayInfo();  // Output: Car Brand: Unknown, Year: 0
    car2.displayInfo();  // Output: Car Brand: Honda, Year: 2019
    car3.displayInfo();  // Output: Car Brand: Tesla, Year: 2022
}
```

#### **Explanation**:
- In this example, **overloaded constructors** allow you to create a car in multiple ways:
  - No details (`car1` uses the default values).
  - Brand and year are given (`car2` is a Honda from 2019).
  - Only the brand is given (`car3` is a Tesla from the default year 2022).

---

### **5. Destructor**

A **destructor** is automatically called when an object is destroyed, and it is used for cleanup (like freeing memory). It’s declared with a tilde (`~`).

#### **Example of a Destructor (Car Class)**

```cpp
#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    // Parameterized constructor
    Car(string carBrand, int carYear) {
        brand = carBrand;
        year = carYear;
        cout << "Constructor called for " << brand << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destructor called for " << brand << endl;
    }

    void displayInfo() {
        cout << "Car Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1("BMW", 2021);   // Constructor is called
    Car car2("Audi", 2020);  // Constructor is called

    car1.displayInfo();
    car2.displayInfo();

    // Destructor is called automatically at the end of the program
}
```

#### **Explanation**:
- The **destructor** `~Car()` is called when the `car1` and `car2` objects go out of scope (end of the program).
- The destructor is typically used to free any resources like memory, files, or network connections that were used by the object.

---

### **Summary of Examples:**
- **Copy Constructor**: Duplicates an object using an existing object (in this case, a `Car`).
- **Overloaded Constructor**: Allows creating an object in multiple ways (with different sets of parameters).
- **Destructor**: Cleans up when an object is destroyed (in this case, it prints a message that the car object is being destroyed).



---

### **Task 1: Class Definition and Implementation**

We’ll define a **Book** class with the following members:
- `title`: The title of the book.
- `author`: The author of the book.
- `price`: The price of the book.

This class will also have a **destructor** to indicate when an object of this class is destroyed.

#### **Task 1 Code:**

```cpp
#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    // Destructor
    ~Book() {
        cout << "Destructor called for book titled: " << title << endl;
    }

    // Other methods and constructors will be implemented in the next tasks.
};
```

#### **Explanation**:
- The `~Book()` destructor will be called automatically when a **Book** object goes out of scope or is explicitly deleted. It simply prints a message to indicate the object is being destroyed.

---

### **Task 2: Constructor Implementation (Default Constructor)**

Now, let’s add a **default constructor** to the **Book** class, which initializes the book with default values.

#### **Task 2 Code:**

```cpp
#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    // Default constructor
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
        cout << "Default constructor called for a book." << endl;
    }

    // Destructor
    ~Book() {
        cout << "Destructor called for book titled: " << title << endl;
    }
};
```

#### **Explanation**:
- The **default constructor** initializes the `title`, `author`, and `price` with default values ("Unknown" for strings and `0.0` for the price).
- When an object is created using this constructor, it prints a message.

---

### **Task 3: Constructor Implementation (Parameterized Constructor)**

Next, we’ll add a **parameterized constructor** that allows us to create a book with a given title, author, and price.

#### **Task 3 Code:**

```cpp
#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    // Default constructor
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
        cout << "Default constructor called for a book." << endl;
    }

    // Parameterized constructor
    Book(string bookTitle, string bookAuthor, double bookPrice) {
        title = bookTitle;
        author = bookAuthor;
        price = bookPrice;
        cout << "Parameterized constructor called for: " << title << endl;
    }

    // Destructor
    ~Book() {
        cout << "Destructor called for book titled: " << title << endl;
    }
};
```

#### **Explanation**:
- The **parameterized constructor** accepts `bookTitle`, `bookAuthor`, and `bookPrice` as arguments to initialize the `Book` object with specific values.
- It prints a message when an object is created using this constructor.

---

### **Task 4: Constructor Implementation (Copy Constructor)**

Finally, we’ll add a **copy constructor** to create a new book object by copying the details of an existing one.

#### **Task 4 Code:**

```cpp
#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    // Default constructor
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
        cout << "Default constructor called for a book." << endl;
    }

    // Parameterized constructor
    Book(string bookTitle, string bookAuthor, double bookPrice) {
        title = bookTitle;
        author = bookAuthor;
        price = bookPrice;
        cout << "Parameterized constructor called for: " << title << endl;
    }

    // Copy constructor
    Book(const Book &book) {
        title = book.title;
        author = book.author;
        price = book.price;
        cout << "Copy constructor called for: " << title << endl;
    }

    // Destructor
    ~Book() {
        cout << "Destructor called for book titled: " << title << endl;
    }
};
```

#### **Explanation**:
- The **copy constructor** creates a new `Book` object by copying the data from an existing one (`book`).
- It prints a message indicating that the book was created using the copy constructor.

---

### **Summary of Tasks**:

- **Task 1**: Defined the `Book` class with a destructor.
- **Task 2**: Implemented a default constructor that initializes the book with default values.
- **Task 3**: Added a parameterized constructor to initialize the book with specific values.
- **Task 4**: Implemented a copy constructor to create a new object by copying data from an existing object.




### **1. Inline Functions**

An **inline function** suggests to the compiler to insert the function’s code directly at the point of its call, instead of performing a normal function call. This can improve performance by reducing the overhead of function calls, especially for small, frequently called functions.

#### **Example of an Inline Function:**

```cpp
#include <iostream>
using namespace std;

// Inline function definition
inline int square(int x) {
    return x * x;
}

int main() {
    int number = 5;
    cout << "Square of " << number << " is: " << square(number) << endl; // Output: 25
    return 0;
}
```

#### **Explanation**:
- The keyword `inline` tells the compiler to replace the function call `square(number)` with the actual code `number * number` wherever the function is called.
- **Note**: The compiler may ignore the `inline` keyword for complex functions.

---

### **2. Inline Functions with Classes**

In the context of classes, inline functions can be used for member functions, especially when they are simple and small. They are typically defined inside the class.

#### **Example of Inline Functions with a Class:**

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Inline member function defined inside the class
    inline void setDetails(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Inline member function to display details
    inline void displayDetails() {
        cout << "Student's Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student student1;
    student1.setDetails("Alice", 20);
    student1.displayDetails(); // Output: Student's Name: Alice, Age: 20

    return 0;
}
```

#### **Explanation**:
- The functions `setDetails()` and `displayDetails()` are defined directly within the class, making them **inline** member functions.
- These inline functions are small and handle basic tasks like setting and displaying the student's details.

---

### **3. Function Overloading**

**Function overloading** allows multiple functions to have the same name but differ in the number or type of their parameters. The compiler determines which version of the function to call based on the arguments passed.

#### **Example of Function Overloading:**

```cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded function for adding two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function for adding three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded function for adding two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    // Calling different versions of the overloaded add() function
    cout << "Sum of two integers: " << calc.add(5, 10) << endl;         // Output: 15
    cout << "Sum of three integers: " << calc.add(1, 2, 3) << endl;     // Output: 6
    cout << "Sum of two doubles: " << calc.add(2.5, 3.7) << endl;       // Output: 6.2

    return 0;
}
```

#### **Explanation**:
- There are three **overloaded** versions of the `add()` function:
  1. `add(int a, int b)` adds two integers.
  2. `add(int a, int b, int c)` adds three integers.
  3. `add(double a, double b)` adds two double values.
- The compiler selects the appropriate function to call based on the arguments provided.

---

### **Task 01: Inline Functions**

Write a program that defines an **inline function** to calculate the cube of a number and use it in the `main()` function.

#### **Solution:**

```cpp
#include <iostream>
using namespace std;

// Inline function to calculate cube
inline int cube(int x) {
    return x * x * x;
}

int main() {
    int number = 3;
    cout << "Cube of " << number << " is: " << cube(number) << endl; // Output: 27
    return 0;
}
```

---

### **Task 02: Function Overloading**

Write a program that demonstrates **function overloading** by creating a function that multiplies numbers. One function should multiply two integers, and another should multiply three doubles.

#### **Solution:**

```cpp
#include <iostream>
using namespace std;

class Multiplier {
public:
    // Overloaded function to multiply two integers
    int multiply(int a, int b) {
        return a * b;
    }

    // Overloaded function to multiply three doubles
    double multiply(double a, double b, double c) {
        return a * b * c;
    }
};

int main() {
    Multiplier mult;

    // Calling the overloaded functions
    cout << "Multiplication of two integers: " << mult.multiply(5, 10) << endl;       // Output: 50
    cout << "Multiplication of three doubles: " << mult.multiply(1.1, 2.2, 3.3) << endl; // Output: 7.986

    return 0;
}
```

---

### **Summary**:

- **Inline Functions**: Suggests to the compiler to replace function calls with the actual code.
- **Inline Functions in Classes**: Useful for small, simple member functions inside classes.
- **Function Overloading**: Allows multiple functions with the same name but different parameters.
  
