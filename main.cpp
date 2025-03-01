// #include <iostream>
// #include <stdio.h>
// using namespace std;

// // Template class definition
// template <class T>
// class Arithmetic {
// private:
//     T a;
//     T b;

// public:
//     // Constructor
//     Arithmetic(T a, T b);

//     // Addition method
//     T add();

//     // Subtraction method
//     T sub();
// };

// // Constructor definition outside class
// template<class T>
// Arithmetic<T>::Arithmetic(T a, T b) {
//     this->a = a;
//     this->b = b;
// }

// // Function definitions outside class
// template<class T>
// T Arithmetic<T>::add() {
//     return a + b;
// }

// template<class T>
// T Arithmetic<T>::sub() {
//     return a - b;
// }

// // int main() {
// //     // Creating an object of Arithmetic class for integers
// //     Arithmetic<char> ar('A', 'B');
// //     cout << "Add"<< (int)ar.add()<<endl;
// //     cout << "Add"<< (int)ar.sub()<<endl;
// //     return 0;
// // }

// int main( )

// { unsigned int x[4] [3] ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; 

// printf("%u,%u, %u", x+3, *(x+3),*(x+2)+3);

// return 0;
// }


#include <iostream>
#include <unordered_map>

using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> romanValues = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int total = 0;
    int prevValue = 0;

    for (int i = s.length() - 1; i >= 0; i--) {
        int currentValue = romanValues[s[i]];
        
        // If current value is smaller than previous, subtract it; otherwise, add it
        if (currentValue < prevValue) {
            total -= currentValue;
        } else {
            total += currentValue;
        }
        
        prevValue = currentValue; // Update previous value
    }

    return total;
}

int main() {
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;

    int result = romanToInt(roman);
    cout << "Equivalent Integer: " << result << endl;

    return 0;
}
