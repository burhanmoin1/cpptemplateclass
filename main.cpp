#include <iostream>

using namespace std;

// Template class definition
template <class T>
class Arithmetic {
private:
    T a;
    T b;

public:
    // Constructor
    Arithmetic(T a, T b);

    // Addition method
    T add();

    // Subtraction method
    T sub();
};

// Constructor definition outside class
template<class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    this->a = a;
    this->b = b;
}

// Function definitions outside class
template<class T>
T Arithmetic<T>::add() {
    return a + b;
}

template<class T>
T Arithmetic<T>::sub() {
    return a - b;
}

int main() {
    // Creating an object of Arithmetic class for integers
    Arithmetic<int> intCalc(10, 5);
    cout << "Addition of integers: " << intCalc.add() << endl;
    cout << "Subtraction of integers: " << intCalc.sub() << endl;

    // Creating an object of Arithmetic class for floats
    Arithmetic<float> floatCalc(10.5, 5.2);
    cout << "Addition of floats: " << floatCalc.add() << endl;
    cout << "Subtraction of floats: " << floatCalc.sub() << endl;

    return 0;
}
