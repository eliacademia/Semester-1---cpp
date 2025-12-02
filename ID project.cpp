#include <iostream>
using namespace std;

 //This program gives you access if you're above 18. Denied if you're underage.
int main(){
int birthyear;

cout << "Enter your birthyear." << endl;
cin >> birthyear;

int age = 2025 - birthyear;

if (age >= 18){
   cout << "You are " << age << " . You may have access." << endl;
}
else{
    cout << "You are underage. Access denied." << endl;
}

    return 0;
}