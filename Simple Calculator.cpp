#include <iostream>
using namespace std;

int main(){
    float num1, num2;
    int choice;
    cout << "--------------------------------------------------------------------------------------------------------" << endl << endl << endl;
    cout << "Please pick an operation: " << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Divide" << endl;
    cout << "4. Multiply" << endl;
    cout << "Insert number from 1 to 4 to select operation!" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        int sum;
        cout << "Insert the first number: " << endl;
        cin >> num1;
        cout << "Insert the second number: " << endl;
        cin >> num2;
        sum = num1 + num2;
        cout << "Your result is: " << sum << endl << endl << endl;
        cout << "--------------------------------------------------------------------------------------------------------" << endl << endl << endl;
        return main();
        break;

    case 2:
        int result;
        cout << "Please insert the 1st Number: " << endl;
        cin >> num1;
        cout << "Please insert the 2nd Number: " << endl;
        cin >> num2;
        result = num1-num2;
        cout << "Your result is: " << result << endl << endl << endl;
        cout << "--------------------------------------------------------------------------------------------------------" << endl << endl << endl;
        return main();
        break;
        
    case 3:
        float quotient;
        cout << "Please enter the first number: " << endl;
        cin >> num1;
        cout << "Select now the second number: " << endl;
        cin >> num2;
        quotient = num1/num2;
        cout << "Your quotient is: " << quotient << endl << endl << endl;
        cout << "--------------------------------------------------------------------------------------------------------" << endl << endl << endl;
        return main();
        break;

    case 4:
        float product;
        cout << "Please enter the 1st number: " << endl;
        cin >> num1;
        cout << "Select now the second number: " << endl;
        cin >> num2;
        product= num1*num2;
        cout << "Your product is: " << product << endl << endl << endl;
        cout << "--------------------------------------------------------------------------------------------------------" << endl << endl << endl;
        return main();
        break;
    
    default:
        break;
    }
 
}
