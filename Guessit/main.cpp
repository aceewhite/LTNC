#include <iostream>
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int RandomNumber(){
    return rand() % 100+1;
}
int GetPlayerGuess(){
int guess;
cout << endl << "Enter your guess (1..100): ";
cin >> guess;
return guess;
}
void printAnswer(int guess, int SecretNumber){
    if (guess > SecretNumber) {
cout << "Your number is too big." << endl;
} else if (guess < SecretNumber) {
cout << "Your number is too small." << endl;
} else {
cout << "Congratulation! You win." << endl;
}
}
int main(){
    int SecretNumber=RandomNumber();
    int guess;
    do{
        guess = GetPlayerGuess();
        printAnswer(guess,SecretNumber);
    } while(guess!= SecretNumber);
    return 0;
}
