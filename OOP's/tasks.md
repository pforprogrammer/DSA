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
