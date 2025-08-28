📘 Classes and Objects in C++
🎯 Aim
To study and implement classes and objects in C++, understand the difference between inside and outside class definitions, and explore the role of public and private access specifiers in encapsulation.

📚 Theory
In C++, classes and objects are the foundation of Object-Oriented Programming (OOP).

A class is a blueprint that defines data and functions.
An object is an instance of a class that holds actual values.
🏗️ Class
Defines data members (variables) and member functions (methods).
Can use access specifiers:
public → Accessible outside the class.
private → Accessible only inside the class.
Helps in encapsulation (data hiding).
🧑‍🤝‍🧑 Object
An object is created from a class.
Each object has its own copy of class variables.
Example: Car c1; creates an object c1 of class Car.
📝 Function Definitions
Inside the class → Function body is written directly in the class.
Outside the class → Function declared inside, defined outside using :: (scope resolution).
📊 Comparison Table
⚙️ Feature	🏗️ Class	🧑‍🤝‍🧑 Object
Definition	Blueprint/template	Instance of a class
What it contains	Data members + functions	Real values and operations
Memory Allocation	No memory allocated	Memory allocated when object is created
Example	class Student {…};	Student s1;
Purpose	Defines structure	Works with real data
🖼️ Visual Representation
📌 Class → Object Relationship

image
📋 Algorithms
🔹 Cube Volume (Outside Class)
Start
Define class Cube with private members: side, volume.
Declare public functions: input(), calculateVolume(), output().
Inside input():
Prompt user → enter value of side.
Inside calculateVolume():
Compute volume = side * side * side.
Inside output():
Print calculated volume.
In main():
Create object c2.
Call input(), calculateVolume(), and output().
End
🔹 Cuboid Volume (Inside Class)
Start
Define class Cuboid with members: length, breadth, height, volume.
Create input() function to take values for length, breadth, and height.
Create Volume() function to calculate:
volume = length * breadth * height.
Create Output() function to print volume.
In main():
Create object v1.
Call input(), Volume(), and Output().
End
🔹 Reverse Array (Outside Class)
Start
Define class ArrayOps with member function reverseArray(arr[], size).
In reverseArray():
Loop from i = size - 1 down to 0.
Print each element arr[i].
In main():
Declare array arr[] = {10, 20, 30, 40, 50}.
Calculate size of array.
Create object obj.
Call obj.reverseArray(arr, size).
End
🔹 Simple Calculator
Start
Define class Calculator with members: num1, num2.
Add member functions:
add() → print num1 + num2.
subtract() → print num1 - num2.
multiply() → print num1 * num2.
divide() → if num2 != 0, print num1 / num2, else print error message.
In main():
Create object c.
Take input values for num1 and num2.
Call all four functions sequentially.
End
🔹 Student Details
Start
Define class Student with members: name, branch, subject, year, result.
In main():
Create objects S1, S2, S3.
Assign details to each object.
Example: S1.name = "Aditya Jadhav".
Print required details (e.g., S1.name).
End
🧠 Conclusion
This experiment demonstrates the importance of Classes and Objects in C++.

🏗️ Class → Defines structure and behavior.
🧑‍🤝‍🧑 Object → Real entity with data and functionality.
✅ Key Insights:
Use inside class methods for simplicity.
Use outside class methods for better organization.
Classes and objects allow encapsulation, reusability, and real-world modeling in programming.
