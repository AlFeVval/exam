#include <iostream>
#include <stack>

//Define namespace std to use stack
using namespace std;

//Create a stack of integers
stack<int> digits;

//getDigit it is a recursive function, so calls itself in order to get each digit given by the input user
int getDigit(int value){
    //Evaluate if there is another digit
    if(value >= 10){
        //In case there would be another digit call again
        getDigit(value/10);
    }
    //In each call we push into the stack each digit
    digits.push(value % 10);
    return 0; 
}

int main(){
    //Create the input number and the sum of each digit
    int value, sum = 0;
    //Ask user the input number
    cout << "Give me the numbers: ";
    cin >> value;

    //After we input the desired number, get any digit of received value 
    getDigit(value);

    //Pop each elemnt from stack and finally add each digit until get a void stack 
    while (!digits.empty())
    {
        sum += digits.top();
        digits.pop();
    }
    //Print in console the desire result
    cout << sum << endl;
    
    return 0;
}