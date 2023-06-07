// C++ Access Control and Inheritance

#include <iostream>
#include <string>

using namespace std;

class Base {
public:
    int publicMember;
protected:
    int protectedMember;
private:
    int privateMember;
};

class PublicDerived : public Base {
    // publicMember is public
    // protectedMember is protected
    // privateMember is not accessible from PublicDerived
};

class ProtectedDerived : protected Base {
    // publicMember is protected
    // protectedMember is protected
    // privateMember is not accessible from ProtectedDerived
};

class PrivateDerived : private Base {
    // publicMember is private
    // protectedMember is private
    // privateMember is not accessible from PrivateDerived
};
