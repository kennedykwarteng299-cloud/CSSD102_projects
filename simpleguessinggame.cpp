#include <iostream>
using namespace std;
int main(){
    const int number = 42;
     int guess;
     cout<<"------------------------------\n";
    cout<<"WELCOME TO THE GUESSING GAME! \n";
    cout<<"guess a number between 1 and 100...you have 3 tries: \n";
    for (int i=0; i<3; i++){
        cout<<"try "<<i+1<<": \n";
    cin>>guess;
    
    if (guess==number){
        cout<<"congratulations! you guessed the number correctly: \n";
    }
    else if (guess>number){
        cout<<"too high! try again: \n";
    }
    else {
        cout<<"too low! try again: \n";
    }
    }

    return 0;
}