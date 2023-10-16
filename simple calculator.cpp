#include <iostream>
using namespace std;

int main(){
	
	int opType;
	int resultSum;
	int resultProd;
	int resultSub;
	int resultDiv;

	cout << "simple calculator app" << endl;
	
	
	
	while(true){ 
	
	cout << "\n=================\n" << endl;
	cout << "[1] sum" << endl;
	cout << "[2] subtract" << endl;
	cout << "[3] multiply" << endl;
	cout << "[4] divide" << endl;
    cout << "[0] exit calculator" << endl;
	cout << "\n=================\n" << endl;
	cout << "select operation type ===> ";
	cin >> opType;


	if(cin.fail()){

		cin.clear();
		cout << "\a\ninvalid input\n";
		cin.ignore();
	}

		if(opType == 1){

		int opnum;
		int ops[opnum];
		int size = opnum;
		int sum = 0;

		cout << "\nplease enter number of operands: ";;
		cin >> opnum;
		cout << endl;

		for (int i = 0; i <= opnum-1; i++){

			double input;

			cout << "enter operand " << i+1 << ": ";
			cin >> input;
			cout << endl;

			ops[i] = input;
		}

		for (int i = 0; i <= opnum-1; i++) {

			sum = sum + ops[i];
		    resultSum = sum;
		}


		cout << "the result is: " << sum << endl;
		}
		
		
		if(opType == 2){
		
		double num1;
		double num2;
		
		cout << "enter first number: ";
		cin >> num1;
		
		cout << "\n enter second number: ";
		cin >> num2;

        cout << "\n the result is: " << num1 - num2;

		resultSub = num1 - num2;
				}
	
	    if(opType == 3){
		
		int opnum;
		int ops[opnum];
		int size = opnum;
		int prod = 1;

		cout << "\nplease enter number of operands: ";
		cin >> opnum;
		cout << endl;

		for (int i = 0; i <= opnum-1; i++){

			double input;

			cout << "enter operand " << i+1 << ": ";
			cin >> input;
			cout << endl;

			ops[i] = input;
		}

		for (int i = 0; i <= opnum-1; i++) {

			prod = prod * ops[i];
		    resultProd = prod;
		}


		cout << "the result is: " << prod << endl;
		}
		
		
		if(opType == 4){
		
		double num1;
		double num2;
		
		cout << "enter first number: ";
		cin >> num1;
		
		cout << "\nenter second number: ";
		cin >> num2;

        cout << "\n the result is: " << num1 / num2;

		resultDiv = num1 / num2;
		}
		
        
        if(opType == 00) {
        
        string exit;
        cout << "do you wish to exit the program? [y/n]: ";
        cin >> exit;
        
        if(exit == "y") {
            
            cout << "\nthank you for using my program!\n";
            
            break;
        
        }
        
        else if(exit == "n") {
            continue;
        
        }
        
        
        }

		else if(opType < 0 || opType > 4){
		cout << "\n\ainvalid operation please try again\n";
		}
	}

	return 9;
}