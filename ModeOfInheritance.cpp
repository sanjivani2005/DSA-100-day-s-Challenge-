#include <iostream>
using namespace std;

class Base {
public:
    void publicMethod() {
        cout << "Public method of Base class\n";
    }

protected:
    void protectedMethod() {
        cout << "Protected method of Base class\n";
    }

private:
    void privateMethod() {
        cout << "Private method of Base class\n";
    }
};

// ----------- PUBLIC INHERITANCE -----------
class DerivedPublic : public Base {
public:
    void accessMethods() {
        cout << "--- Public Inheritance ---\n";
        publicMethod();       // ✅ Allowed
        protectedMethod();    // ✅ Allowed
        // privateMethod();   ❌ Not allowed (private always stays private)
    }
};

// ----------- PROTECTED INHERITANCE -----------
class DerivedProtected : protected Base {
public:
    void accessMethods() {
        cout << "--- Protected Inheritance ---\n";
        publicMethod();       // ✅ Becomes protected
        protectedMethod();    // ✅ Still protected
        // privateMethod();   ❌ Not allowed
    }
};

// ----------- PRIVATE INHERITANCE -----------
class DerivedPrivate : private Base {
public:
    void accessMethods() {
        cout << "--- Private Inheritance ---\n";
        publicMethod();       // ✅ Becomes private
        protectedMethod();    // ✅ Becomes private
        // privateMethod();   ❌ Not allowed
    }
};

int main() {
    DerivedPublic pub;
    pub.accessMethods();
    pub.publicMethod();      // ✅ Allowed (still public)

    DerivedProtected prot;
    prot.accessMethods();
    // prot.publicMethod();  ❌ Not allowed (becomes protected)

    DerivedPrivate priv;
    priv.accessMethods();
    // priv.publicMethod(); ❌ Not allowed (becomes private)

    return 0;
}
