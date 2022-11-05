#include <iostream>
using namespace std;

class Arithmetic {
    private:
    int a;
    int b;

    public:
    Arithmetic (int a, int b) {   //Constructor - used to initialize a and b
        this -> a = a;   //'this' is used to assign
        this -> b = b;
    }

    int add() {
        int c = a + b;
        return c;
    }

    int sub() {
        int d = a - b;
        return d;
    }
};

int main() {

    Arithmetic a(10, 2);
    
    cout << a.add() << endl;

    return 0;
}