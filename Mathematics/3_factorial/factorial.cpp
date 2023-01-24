#include<iostream>
using namespace std;

int factorial(int number){
    if(number < 1){
        return 1;
    }
    else{
        return number * factorial(number - 1);
    }
}

int main(){
    int number=5;
    cout<<"Factorial of "<<number<<" is "<<factorial(number);
    return 0;
}