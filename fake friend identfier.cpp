#include <iostream>
using namespace std;
#include <string>


// this program identifies fake friends.
int main(){
    
    string answer;
    string animal = "cat";
    string food = "lasagna";
    string birthmonth = "may";

string UserAnimal, UserFood, UserBirthmonth;
 cout << "Answer this short quiz to see how well you know me. Click yes if you wish to continue, no if not." << endl;
 cin >> answer;

 if(answer == "yes"){ //if the user types yes then the quiz starts. if no then it's the end of the program.
cout << "What is my favorite animal?" << endl;
cin >> UserAnimal; 

cout << "What is my favorite food?"<< endl;
 cin >> UserFood;

 cout << "What is my birthmonth?" << endl;
 cin >> UserBirthmonth;   

 // Count how many answers are correct
    int score = 0;

    if(UserAnimal == animal) score++;
    if(UserFood == food) score++;
    if(UserBirthmonth == birthmonth) score++;

    // If at least 2 are correct → real one
    if(score >= 2){
        cout << "yay you're a real one." << endl;
    }
    if(score<2){
        cout << "fake friend detected" << endl;
    }

 }

else{
    cout << "k bye loser." << endl;
}

    return 0;
}