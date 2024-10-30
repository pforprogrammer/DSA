### **Task # 1:**

---

### **Question: Calculate the Sum of Alphabet Values Using OOP**

You are required to implement a program using **Object-Oriented Programming (OOP)** concepts to calculate the sum of the values of all alphabets in a given string. Each alphabet is assigned a value where:
- A = a = 1
- B = b = 2
- …
- Z = z = 26

After calculating the sum of the alphabet values in the string, check if the sum is a **triangular number**. A triangular number is defined by the formula:

\[
T(i) = \frac{i(i+1)}{2}
\]

Where `T(i)` represents the triangular number for integer `i`. 

### **Steps**:
1. Create a class `AlphabetSumCalculator` that:
   - Stores the input string.
   - Contains a function `calculateSum()` that computes the sum of the alphabet values.
   
2. Create a class `TriangularChecker` that:
   - Contains a function `isTriangular(int num)` that checks if a given number is triangular.

3. In the `main()` function, the program should:
   - Ask the user to input a string.
   - Use the `AlphabetSumCalculator` class to calculate the sum of the alphabet values.
   - Use the `TriangularChecker` class to check if the sum is a triangular number.
   - Print `"True"` if the sum is triangular, otherwise print `"False"`.

### **Example**:

| Input                 | Expected Output |
|-----------------------|-----------------|
| Enter a string: Abc    | True            |
| Enter a string: Jebd   | True            |
| Enter a string: dd     | False           |

---

### Code:

```cpp
#include <iostream>
#include <string>
using namespace std;

// Class to handle the string and calculate alphabet sum
class AlphabetSumCalculator {
private:
    string str;  // Store the input string

public:
    // Constructor to initialize the string
    AlphabetSumCalculator(string s) : str(s) {}

    // Function to calculate the sum of alphabet values
    int calculateSum() {
        int sum = 0;
        for (char c : str) {
            if (isalpha(c)) {
                c = tolower(c); // Convert to lowercase to handle both cases
                sum += (c - 'a' + 1); // 'a' = 1, 'b' = 2, ..., 'z' = 26
            }
        }
        return sum;
    }
};

// Class to check if a number is triangular
class TriangularChecker {
public:
    // Function to check if a number is triangular
    bool isTriangular(int num) {
        int i = 1;
        int triangularNum = i * (i + 1) / 2;
        while (triangularNum <= num) {
            if (triangularNum == num) {
                return true;
            }
            i++;
            triangularNum = i * (i + 1) / 2;
        }
        return false;
    }
};

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Create an object of AlphabetSumCalculator and calculate the sum
    AlphabetSumCalculator calculator(input);
    int sum = calculator.calculateSum();

    // Create an object of TriangularChecker and check if the sum is triangular
    TriangularChecker checker;
    if (checker.isTriangular(sum)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
```

### How it works in OOP:
1. **AlphabetSumCalculator class**:
   - This class is responsible for handling the input string and calculating the sum of alphabet values.
   - The function `calculateSum()` computes the sum by converting each letter to its corresponding value (e.g., 'a' = 1, 'b' = 2, etc.).

2. **TriangularChecker class**:
   - This class checks whether a given number is a triangular number using the function `isTriangular()`.

3. **Main program**:
   - An object of `AlphabetSumCalculator` is created to compute the sum of the alphabet values from the input string.
   - Another object of `TriangularChecker` is used to check if the sum is a triangular number.
   - It prints "True" if the sum is triangular, otherwise "False".



### **Task # 2**
---

### **Question: Calculate the Area of Different Shapes Using OOP in C++**

You are required to write a C++ program using **Object-Oriented Programming (OOP)** principles to calculate the area of three shapes: **Rectangle**, **Circle**, and **Square**. The program should follow the concepts of **encapsulation** and **abstraction**, ensuring that each shape’s properties are accessed and modified only through appropriate methods (getters and setters).

### **Requirements**:

1. **Create a class** for each shape:
   - `Rectangle`: It should have private properties for `length` and `width`. Implement **getters** and **setters** to manage these properties and a method to calculate the area.
   - `Circle`: It should have a private property for `radius`. Implement **getters** and **setters** and a method to calculate the area of the circle.
   - `Square`: It should have a private property for `side`. Implement **getters** and **setters** to set the side and a method to calculate the area of the square.

2. **Menu-driven program**: The program should present the user with a menu to select the shape for which they want to calculate the area:
   - **Option 1**: Rectangle - Ask the user to input the length and width.
   - **Option 2**: Circle - Ask the user to input the radius.
   - **Option 3**: Square - Ask the user to input the side length.

3. Once the shape and dimensions are provided, calculate the area using the appropriate class and display the result.

### **Expected Output**:

```
Please enter the number corresponding to the shape you would like to calculate the area for:
1. Rectangle
2. Circle
3. Square
1
Please enter the length and width of the Rectangle: 23 12
The area of the Rectangle is: 276
```

The program should ensure that **encapsulation** is followed by restricting direct access to the properties of each shape and that **abstraction** is used to hide the internal implementation of the area calculation from the user.

---


```cpp
#include <iostream>
#include <cmath> // For M_PI to calculate the area of a circle
using namespace std;

// Class for Rectangle
class Rectangle {
private:
    double length;
    double width;
public:
    // Setter for length
    void setLength(double l) {
        length = l;
    }
    // Setter for width
    void setWidth(double w) {
        width = w;
    }
    // Getter for area of Rectangle
    double getArea() {
        return length * width;
    }
};

// Class for Circle
class Circle {
private:
    double radius;
public:
    // Setter for radius
    void setRadius(double r) {
        radius = r;
    }
    // Getter for area of Circle
    double getArea() {
        return M_PI * radius * radius;
    }
};

// Class for Square
class Square {
private:
    double side;
public:
    // Setter for side
    void setSide(double s) {
        side = s;
    }
    // Getter for area of Square
    double getArea() {
        return side * side;
    }
};

int main() {
    int choice;
    cout << "Please enter the number corresponding to the shape you would like to calculate the area for:" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Square" << endl;
    cin >> choice;

    if (choice == 1) {
        // Rectangle case
        Rectangle rect;
        double length, width;
        cout << "Please enter the length and width of the Rectangle: ";
        cin >> length >> width;
        rect.setLength(length);
        rect.setWidth(width);
        cout << "The area of the Rectangle is: " << rect.getArea() << endl;
    }
    else if (choice == 2) {
        // Circle case
        Circle circle;
        double radius;
        cout << "Please enter the radius of the Circle: ";
        cin >> radius;
        circle.setRadius(radius);
        cout << "The area of the Circle is: " << circle.getArea() << endl;
    }
    else if (choice == 3) {
        // Square case
        Square square;
        double side;
        cout << "Please enter the side of the Square: ";
        cin >> side;
        square.setSide(side);
        cout << "The area of the Square is: " << square.getArea() << endl;
    }
    else {
        cout << "Invalid choice. Please run the program again." << endl;
    }

    return 0;
}
```

### How this code works:
1. **Encapsulation**: 
   - The data members (`length`, `width`, `radius`, `side`) are private in each class. 
   - We use **setters** (e.g., `setLength`, `setRadius`) to set their values, and **getters** (e.g., `getArea()`) to calculate the area without directly accessing the data.
   
2. **Abstraction**: 
   - The details of how the area is calculated for each shape are hidden inside the classes. The user only needs to know how to call the setter methods to input dimensions and the getter methods to retrieve the calculated area.

3. **Main Function**:
   - The program asks the user to choose a shape by entering a number (1 for Rectangle, 2 for Circle, 3 for Square).
   - It then asks for the required dimensions (length/width, radius, or side), calculates the area using the respective class, and displays the result.

### Example Input/Output:
```
Please enter the number corresponding to the shape you would like to calculate the area for:
1. Rectangle
2. Circle
3. Square
1
Please enter the length and width of the Rectangle: 23 12
The area of the Rectangle is: 276
```

---
### Task 01: Class Definition and Implementation 

Create a class called `Vehicle` with the following properties:

- **Data Members:**
  - A string named as `company`.
  - A string named as `fuelType`.
  - An integer named as `yearOfManufacture`.
  - A string named as `yearOfPurchase`.
  - A string named as `color`.
  - An integer named as `engineCapacity`.

- Your class should provide the implementation of a default constructor that first prints a line  
  “Default Constructor of Vehicle is called” and then initializes all the data members with the  
  default values (Default value for integer and string variables are `0` and `""`).

- Provide the implementation of appropriate properties method (Getter/Accessors and  
  Setters/Mutators).

- Provide the implementation of following data functions:
  - `displayDetails()`: displays all the information of the particular vehicle on console.
  - `inputDetails()`: takes the input of all the details of vehicle from the user.
  - `isOld()`: displays how old the vehicle is. If the manufacturing and purchasing year  
    is the same, then display “Vehicle is purchased in the same year as it is manufactured”,  
    otherwise displays the message “Vehicle is [number] years old”.

- Provide the implementation of an appropriate destructor that displays the message “Destructor Called”.


---

### Task 02: Class with Constructor Implementation 

Write a class named `Employee` for which each object can hold information about a particular employee:

- The class should have the following four private data members:
  - A string named `name` that holds the employee’s name.
  - An integer named `id` that holds the employee’s ID number.
  - A string named `department` that holds the name of the department where the employee works.
  - A string named `position` that holds the employee’s job title.

- Provide the implementation of the following constructors and a destructor:
  - A parameterized constructor that accepts the employee’s name, ID number, department, and position as arguments and assigns them to the appropriate member variables.
  - A parameterized constructor that accepts the employee’s name and ID number as arguments and assigns them to the appropriate member variables. The `department` and `position` fields should be assigned an empty string (`""`).
  - A default constructor that assigns an empty string (`""`) to the `name`, `department`, and `position` member variables, and `0` to the `id` member variable.
  - A destructor that does nothing except displaying a simple message “Destructor executed…” on the screen.

- Provide the implementation of property methods (getters/setters) for all the data members (`name`, `id`, `department`, and `position`) of the class.

- Provide the implementation of the following member functions:
  - `setInfo()`: This method accepts the employee’s name, ID number, department, and position as arguments and assigns them to the appropriate member variables.
  - `getInfo()`: This method initializes the data of an employee taken from the user.

---

### Task 3: Constructor Implementation 

**a)** Design a class called `Circle` with at least three data members: `radius`, `originx`, and `originy`. 
- The `origin` is the central point of a circle, and the `radius` is the distance between the central point and the boundary of the circle. Since the origin is a point, it can be modeled with `x` and `y` coordinates.
- Provide the implementation of a default constructor, a parameterized constructor, and a destructor.
- Implement appropriate getters/setters.
- Write appropriate data functions to calculate the area, diameter, and circumference of the circle. Use the following formulas:
  - **Area**: `π * radius * radius`
  - **Circumference**: `2 * π * radius`
  - **Diameter**: `radius * 2`
- All inputs should be taken from the user in the main function to set data members of the class. Then, the main function should call relevant member functions to calculate the area, circumference, and diameter. The main function should only call relevant methods.

**b)** Create 4 circles and initialize them using the parameterized constructor (you can hardcode values while calling the constructor).
- Find and display which of the circles are concentric. Concentric circles have the same central point. *(Hint: the logic for this will be implemented in the main function)*

**c)** For the identified concentric circles:
- Assign a label to each circle. The label is the position number, where the most internal circle has label 1, and so on. Display the assigned labels. *(Hint: the logic for this will be implemented in the main function)*

**d)** Find and display:
- Which of the concentric circles has a diameter greater than 12. You must understand the relationship between the diameter and radius of any circle. *(Hint: the logic for this will be implemented in the main function)*


---


### Task 01:

### C++ Code:

```cpp
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string company;
    string fuelType;
    int yearOfManufacture;
    string yearOfPurchase;
    string color;
    int engineCapacity;

public:
    // Default Constructor
    Vehicle() {
        cout << "Default Constructor of Vehicle is called" << endl;
        company = "";
        fuelType = "";
        yearOfManufacture = 0;
        yearOfPurchase = "";
        color = "";
        engineCapacity = 0;
    }

    // Destructor
    ~Vehicle() {
        cout << "Destructor Called" << endl;
    }

    // Setters (Mutators)
    void setCompany(string comp) { company = comp; }
    void setFuelType(string fuel) { fuelType = fuel; }
    void setYearOfManufacture(int year) { yearOfManufacture = year; }
    void setYearOfPurchase(string purchaseYear) { yearOfPurchase = purchaseYear; }
    void setColor(string col) { color = col; }
    void setEngineCapacity(int capacity) { engineCapacity = capacity; }

    // Getters (Accessors)
    string getCompany() { return company; }
    string getFuelType() { return fuelType; }
    int getYearOfManufacture() { return yearOfManufacture; }
    string getYearOfPurchase() { return yearOfPurchase; }
    string getColor() { return color; }
    int getEngineCapacity() { return engineCapacity; }

    // Function to input details
    void inputDetails() {
        cout << "Enter Company: ";
        cin >> company;
        cout << "Enter Fuel Type: ";
        cin >> fuelType;
        cout << "Enter Year of Manufacture: ";
        cin >> yearOfManufacture;
        cout << "Enter Year of Purchase: ";
        cin >> yearOfPurchase;
        cout << "Enter Color: ";
        cin >> color;
        cout << "Enter Engine Capacity: ";
        cin >> engineCapacity;
    }

    // Function to display details
    void displayDetails() {
        cout << "Company: " << company << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Year of Manufacture: " << yearOfManufacture << endl;
        cout << "Year of Purchase: " << yearOfPurchase << endl;
        cout << "Color: " << color << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }

    // Function to check if the vehicle is old
    void isOld() {
        if (yearOfManufacture == stoi(yearOfPurchase)) {
            cout << "Vehicle is purchased in the same year as it is manufactured." << endl;
        } else {
            int age = stoi(yearOfPurchase) - yearOfManufacture;
            cout << "Vehicle is " << age << " years old." << endl;
        }
    }
};

int main() {
    // Create a Vehicle object
    Vehicle myCar;

    // Input details
    myCar.inputDetails();

    // Display details
    myCar.displayDetails();

    // Check if the vehicle is old
    myCar.isOld();

    return 0;
}
```


### Sample Output:

```
Default Constructor of Vehicle is called
Enter Company: Toyota
Enter Fuel Type: Petrol
Enter Year of Manufacture: 2015
Enter Year of Purchase: 2020
Enter Color: Red
Enter Engine Capacity: 1500
Company: Toyota
Fuel Type: Petrol
Year of Manufacture: 2015
Year of Purchase: 2020
Color: Red
Engine Capacity: 1500 cc
Vehicle is 5 years old.
Destructor Called
``` 





### Task 02:


### C++ Code for the `Employee` class:

```cpp
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    string department;
    string position;

public:
    // Default Constructor
    Employee() {
        cout << "Default Constructor of Employee is called" << endl;
        name = "";
        id = 0;
        department = "";
        position = "";
    }

    // Parameterized Constructor 1 (With all parameters)
    Employee(string empName, int empID, string empDepartment, string empPosition) {
        cout << "Parameterized Constructor (all parameters) is called" << endl;
        name = empName;
        id = empID;
        department = empDepartment;
        position = empPosition;
    }

    // Parameterized Constructor 2 (Name and ID only)
    Employee(string empName, int empID) {
        cout << "Parameterized Constructor (name and ID only) is called" << endl;
        name = empName;
        id = empID;
        department = "";
        position = "";
    }

    // Destructor
    ~Employee() {
        cout << "Destructor executed..." << endl;
    }

    // Getters (Accessors)
    string getName() { return name; }
    int getID() { return id; }
    string getDepartment() { return department; }
    string getPosition() { return position; }

    // Setters (Mutators)
    void setName(string empName) { name = empName; }
    void setID(int empID) { id = empID; }
    void setDepartment(string empDepartment) { department = empDepartment; }
    void setPosition(string empPosition) { position = empPosition; }

    // Function to set employee information
    void setInfo(string empName, int empID, string empDepartment, string empPosition) {
        name = empName;
        id = empID;
        department = empDepartment;
        position = empPosition;
    }

    // Function to get and display employee information
    void getInfo() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
    }
};

int main() {
    // Using the default constructor
    Employee emp1;
    emp1.getInfo();

    // Using the parameterized constructor with all parameters
    Employee emp2("John Doe", 101, "IT", "Manager");
    emp2.getInfo();

    // Using the parameterized constructor with name and ID only
    Employee emp3("Jane Smith", 102);
    emp3.getInfo();

    // Setting and displaying employee information using setInfo() function
    Employee emp4;
    emp4.setInfo("Alice Johnson", 103, "HR", "HR Executive");
    emp4.getInfo();

    return 0;
}
```

### Sample Output:

```
Default Constructor of Employee is called
Employee Name: 
Employee ID: 0
Department: 
Position: 

Parameterized Constructor (all parameters) is called
Employee Name: John Doe
Employee ID: 101
Department: IT
Position: Manager

Parameterized Constructor (name and ID only) is called
Employee Name: Jane Smith
Employee ID: 102
Department: 
Position: 

Default Constructor of Employee is called
Employee Name: Alice Johnson
Employee ID: 103
Department: HR
Position: HR Executive
Destructor executed...
Destructor executed...
Destructor executed...
Destructor executed...
```



### Task 03:

