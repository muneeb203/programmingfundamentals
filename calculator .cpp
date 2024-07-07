#include<iostream>
using namespace std;
float calculator(char op, float num1, float num2){
	float res;
	if(op=='+')
	res=num1+num2;
	else if(op=='-')
	res=num1-num2;
	else if(op=='*')
	res=num1*num2;
	else if(op=='/')
	res=num1/num2;
	else
	return 0;
	
	return res;
	
}

int main() {
    int x;
    float no1, no2;
    char op;

    while (true) {
        cout << "Press 0 to terminate the program or any other number to continue: ";
        cin >> x;
        if (x == 0) {
            break;
        } else {
            cout << "Press operation to perform i.e +, -, *, /: ";
            cin >> op;
            cout << "Enter first number: ";
            cin >> no1;
            cout << "Enter second number: ";
            cin >> no2;
            cout << "Result: " << calculator(op, no1, no2) << endl;
        }
    }

    return 0;
}





