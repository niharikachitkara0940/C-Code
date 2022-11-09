#include <iostream>
using namespace std;

//Defining the functions inside the class
// class Arithmetic {
//     private:
//     int a;
//     int b;

//     public:
//     Arithmetic (int a, int b) {   //Constructor - used to initialize a and b
//         this -> a = a;   //'this' is used to assign
//         this -> b = b;
//     }

//     int add() {
//         int c = a + b;
//         return c;
//     }

//     int sub() {
//         int d = a - b;
//         return d;
//     }
// };


//Defining the functions outside the class using ::
// class Arithmetic {
//     private:
//     int a;
//     int b;

//     public:
//     Arithmetic (int a, int b);
//     int add();
//     int sub();

// };

// Arithmetic :: Arithmetic (int a, int b) {   //Constructor - used to initialize a and b
//     this -> a = a;   //'this' is used to assign
//     this -> b = b;
// };

// int Arithmetic :: add() {
//     int c = a + b;
//     return c;
// };

// int Arithmetic :: sub() {
//     int d = a - b;
//     return d;
// };


//Template class
template <class T>
class Arithmetic {
    private:
    T a;
    T b;

    public:
    Arithmetic (T a, T b);
    T add();
    T sub();

};

template <class T>
Arithmetic <T> :: Arithmetic (T a, T b) {   //Constructor - used to initialize a and b
    this -> a = a;   //'this' is used to assign
    this -> b = b;
};

template <class T>
T Arithmetic <T> :: add() {
    T c = a + b;
    return c;
};

template <class T>
T Arithmetic <T> :: sub() {
    T d = a - b;
    return d;
};

int main() {

    // Arithmetic a(10, 2);

    Arithmetic <int> ar(12,1);
    
    cout << ar.add() << endl;
    cout << ar.sub() << endl;

    return 0;
}