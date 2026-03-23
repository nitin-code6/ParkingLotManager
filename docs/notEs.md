# 📘 C++ OOP Revision Notes
## 🔹 Header Files (.h)
* Contains **class declarations (WHAT exists)**
* No function logic (only function signatures)
* Helps organize code cleanly
---
## 🔹 Source Files (.cpp)
* Contains **implementation (HOW it works)**
* Functions are defined using:
```cpp
ClassName::functionName
```
---
## 🔹 Header Guards
```cpp
#ifndef VEHICLE_H
#define VEHICLE_H
...
#endif
```
* Prevents **multiple inclusion of same file**
* `VEHICLE_H` is just a unique identifier
* Avoids redefinition errors
---

## 🔹 Scope Resolution Operator (::)

* Means **“belongs to”**
Examples:

Vehicle::Vehicle()       // constructor of Vehicle
std::cout                // cout belongs to std
## 🔹 Constructor
```cpp
Vehicle(const std::string& licensePlate)
```
* Automatically called when object is created
* Used to initialize object data
---
## 🔹 this Pointer
```cpp
this->licensePlate
```
* Refers to current object
* Helps distinguish between class variable and parameter
---
## 🔹 Getter Function
```cpp
std::string getLicensePlate() const
```
* Used to access private/protected data
* Maintains encapsulation
---
## 🔹 const Keyword
* Means **value will not change**
Usage:

```cpp
const std::string&  // avoids copy + safe
function() const    // does not modify object
```
---
## 🔹 Pure Virtual Function
```cpp
virtual double calculateFee(int hours) = 0;
```
* Makes class **abstract**
* Must be implemented by child classes
---
## 🔹 Virtual Destructor
```cpp
virtual ~Vehicle() = default;
```
* Ensures proper cleanup in inheritance
* Prevents memory issues

---

## 🔹 OOP Concepts Used

* **Encapsulation** → data hiding using private/protected
* **Abstraction** → using abstract class
* **Inheritance** → Car, Bike inherit Vehicle
* **Polymorphism** → different fee calculation logic

---

## 📂 Notes Strategy

* Keep doubts and concepts in:



## 🚀 Summary

* `.h` → structure (WHAT)
* `.cpp` → logic (HOW)
* `::` → belongs to class
* `const` → safety
* OOP → design + structure

## 🔹 Declaration vs Definition

* **Declaration** → tells what exists (function/class signature)
* **Definition** → provides actual implementation

```cpp
int add(int a, int b);        // declaration
int add(int a, int b) { }     // definition
```
---

## 🔹 `::` (Scope Resolution Operator)

* Means **“belongs to”**

```cpp
Vehicle::calculateFee()
std::cout
```
---

## 🔹 Constructor

* Special function called when object is created
* Used to initialize object state

```cpp
ParkingSlot s("A1");
```
---

## 🔹 Initializer List (`:`)

* Initializes variables **before constructor body**

```cpp
ParkingSlot::ParkingSlot(const std::string& slotId)
    : slotId(slotId)
```

---

## 🔹 `const` Keyword

* Means **read-only (no modification)**

### Uses:

* `const std::string&` → efficient + safe parameter passing
* `function() const` → guarantees no object modification

---

## 🔹 Method

* Function inside a class

```cpp
double calculateFee(int hours);
```

---
## 🔹 Virtual Function

* Enables **runtime polymorphism**

```cpp
virtual double calculateFee(int hours);
```

* Function call depends on **actual object type**

---
## 🔹 Pure Virtual Function (`= 0`)

* Makes class **abstract**
* Forces derived classes to implement
```cpp
virtual double calculateFee(int hours) = 0;
```
---

## 🔹 Abstract Class
* Cannot create object
* Used as **blueprint**


Vehicle v;  // ❌ not allowed
## 🔹 Inheritance (IS-A)

* Represents hierarchy

```cpp
class Car : public Vehicle
```

```text
Vehicle
 ├── Car
 ├── Bike
 └── Truck
```

---

## 🔹 Composition (HAS-A)

* One class contains another

```cpp
Vehicle* parkedVehicle;
```

```text
ParkingSlot HAS-A Vehicle
ParkingLot HAS-A Slots
```

---

## 🔹 Pointer (`Vehicle*`)

* Stores address of object
* Enables **polymorphism**

```cpp
Vehicle* v = new Car("KA01");
```

---

## 🔹 Polymorphism

* Same interface, different behavior

```cpp
v->calculateFee(2);  // Car/Bike/Truck logic
```

---

## 🔹 Constructor Chaining

* Base class constructor runs first

```cpp
Car::Car(...) : Vehicle(...)
```

---

## 🔹 ParkingSlot Logic

### parkVehicle

* Check availability
* Store vehicle
* Mark occupied

### unparkVehicle

* Save vehicle
* Clear slot
* Return vehicle

```text
Save → Clear → Return
```

---

## 🔹 Key Design Principles

* Encapsulation → data hiding
* Abstraction → abstract class
* Inheritance → hierarchy
* Polymorphism → dynamic behavior
* Composition → object relationships

---

## 🚀 Summary

* `.h` → declaration (WHAT)
* `.cpp` → definition (HOW)
* `virtual` → runtime decision
* `=0` → must override
* `const` → safety
* `Vehicle` → abstract blueprint
* `Car/Bike/Truck` → concrete implementation
* `ParkingSlot` → manages vehicle using composition

---
