//
//  main.cpp
//  calculator
//
//  Created by Aadil Ali on 1/28/23.
//

#include <iostream>

using namespace std;

int main()

{
    float num1, num2;
    char operation;
    cout << "Aadil Ali Calculator" << endl;
    cin >> num1 >> operation >> num2;
    
    switch (operation)
    {
        case '-': cout << num1 << operation << num2 << "=" << num1 - num2; break;
        case '+': cout << num1 << operation << num2 << "=" << num1 + num2; break;
        case '/': cout << num1 << operation << num2 << "/" << num1 / num2; break;
        case '*': cout << num1 << operation << num2 << "=" << num1 * num2; break;
        case '%':
            bool isNum1int, isNum2int;
            isNum1int=((int)num1 == num1);// 5==5.0
            isNum2int = ((int)num2 == num2);
            
            if (isNum1int && isNum2int)
                cout << num1 << operation << num2 << "=" << int(num1) % int(num2);
            else
                cout << "invalid entry!";
            break;
        default: cout <<"not valid operation" << endl;
    }

return (0);
}
