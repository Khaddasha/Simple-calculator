#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char opt;
    double firstNum, secondNum, result;
    firstNum = 0.0;
    secondNum= 0.0;
    char answer;
    
    cout << "Simple calculator" << '\n';
    cout << "Would you like to start?(Y/N) ";
    cin >> answer;
    cout << '\n';
    
    while (answer = toupper('Y'))
    {
        cout << "Enter the symbol of the operation that you would like to use from the following:" << '\n';
        cout << "Addition(+), Subtraction(-), Multiplication(*), Division(/): ";
        cin >> opt;
        cout << "Enter the first and the second number ";
        cin >> firstNum >> secondNum;

    switch (opt)
    {
        case '+':
        result = (firstNum + secondNum);
        cout << "The result is " << result << '\n';
        
        break;
        
    
    case '-':
    
        result = (firstNum - secondNum);
        cout << "The result is " << result << '\n';
        
        break;
    
    case '*':
    
        result = (firstNum * secondNum);
        cout << "The result is " << result << '\n';
        
        break;
    
       case '/':
       
           if (secondNum = 0)
           cout << "Error, we can't divide by zero";
           
           else 
           result = (firstNum / secondNum);
           cout << "The result is " << result << '\n';
       
       break;
       
       default:
       cout << "Enter valid numbers!";
    }
    
    cout << "Would you like to start again?(Y/N) ";
    cin >> answer;
    if ( answer = 'N')
    return 0;
    }
    return 0;
}





