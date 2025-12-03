#include <iostream>
using namespace std;

int main(){

    double x, y, result;

    char op;
    char leave;
   
    cout << "Enter your equation: " << endl;
    cin >> x >> op >> y;

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




    return 0;
}
