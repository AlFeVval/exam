#include <iostream>
#include <algorithm>

using namespace std;

// Function to check whether the string is palindrome
string isPalindrome(string S){
    // Stores the reverse of the string S
    string P = S;
    //Reverse the string P
    reverse(P.begin(), P.end());
    // Evaluate if S is equals to P
    if (S == P) {
        return "true";
    }// In other case
    else {
        return "false";
    }
}

int main(){
    //Create a varible where store input string
    string input;
    cout << "Give me a word: ";
    cin >> input;
    //Calls palindrome checker, this function returns true or false
    cout << isPalindrome(input) << endl;
    
    return 0;
}