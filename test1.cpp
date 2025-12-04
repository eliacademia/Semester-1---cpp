#include <iostream>
using namespace std;

int main(){

    double x, y, result;

    char op;
    char exit;
   
    do{
    cout << "Enter your equation or pres e to exit: " << endl;
    cin >> x;
    cin >> op;
    cin >> y;
    cin >> exit;

    if(exit == 'e'){
        break;
    }

    switch(op){
        case '+': 
        result = x + y;
        cout << result<< endl;
        break;

        case '-':
        result = x - y;
        cout << result<< endl;
        break;

        case '*':
        result = x * y;
        cout << result<< endl;
        break;

        case '/':
        if(y == 0){
            cout << "math error" << endl;
        }
        else{
        result = x/y;
        cout << result<< endl;
     }
     break;
     
    }
    } while (exit != 'e');

    return 0;
}