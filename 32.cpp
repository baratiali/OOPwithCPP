// C++ Diamond problem in OOPS, Solution using Virtual Inheritance

#include <iostream>
#include <string>

using namespace std;

// base class
class Person {
    public:
    string name;

    //nested class
    class Address{
        public:
            string country;
            string streetName;
            int houseNumber;
    };

    // object of nested class
    Address addr;
    void AddressPlease()
    {
        cout << name <<endl
        << addr.country << endl
        << addr.streetName << endl
        << addr.houseNumber << endl;
    }
};


int main() {


    Person Alex;
    Alex.name = "Alex";
    Alex.addr.country = "Germany";
    Alex.addr.streetName = "Löhrstrasse";
    Alex.addr.houseNumber = 25;
    Alex.AddressPlease();

    Person :: Address ad;


    return 0;
}

/*
This C++ code demonstrates the concept of nested classes in Object Oriented Programming, where a class (Address in this case) is defined within another class (Person in this case).

In this code:

1. The `Person` class has a member `name` of type `string` and an object `addr` of the `Address` class, which is defined within the `Person` class.

2. The `Address` class has three members: `country`, `streetName`, and `houseNumber`.

3. The `AddressPlease` method in the `Person` class displays the name of the person and their address (country, street name, house number).

4. In the `main()` function, a `Person` object named `Alex` is created. The fields `name`, `country`, `streetName`, and `houseNumber` are set for the `Alex` object, and then `Alex.AddressPlease()` is called to print out these details.

5. Finally, an object `ad` of type `Person::Address` is created. This demonstrates that nested class types can be referred to outside of the containing class using the `OuterClass::InnerClass` syntax. However, the object `ad` is not used further in this code.

One of the uses of nested classes can be to encapsulate related types within a container type, providing scope and organization to the code. In this case, `Address` is related to `Person` and so is nested within it. This can also help to avoid naming conflicts with other code in larger projects.
*/