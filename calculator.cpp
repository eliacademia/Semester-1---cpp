#include <iostream>
using namespace std;

int main(){

    double x;
    double y;
    double result;

    char op;

    cout << "Enter your first value: " << endl;
    cin >> x;

    cout << "Choose +, -, * or /" << endl;
    cin >> op;

    cout << "Enter your second value: " << endl;
    cin >> y;

    switch(op){
        case '+': 
        result = x + y;
        cout << result<< endl;

        case '-':
        result = x - y;
        cout << result<< endl;

        case '*':
        result = x * y;
        cout << result<< endl;

        case '/':
        result = x/y;
        cout << result<< endl;

    }


    return 0;
}