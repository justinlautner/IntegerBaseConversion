/*
 * CSC 376
 * Chapter 3 Assignment 1
 * Justin Lautner
 * Student Number: 679361959​
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
	//Declaring variables
	int i, r;
	string answer;

	//User input
	cout << "Please enter an unsigned decimal integer: ";
	cin >> i;
        //User input error testing
	if (i < 0){
		cout << "Please enter a decimal integer greater than 0" << endl;
		return 0;
	}
        
	cout << "Please enter an integer radix from 2 to 16: ";
	cin >> r;
	//User input error testing
	if (r > 16 || r < 2){
		cout << "Please enter an integer radix between 2 and 16" << endl;
		return 0;
	}

	//Checking for Hex vs. otherwise, as Hex requires letters
	if (r > 1 && r < 16){
		while (i != 0){
			answer = std::to_string(i % r) + answer;
			i = i / r;
		}
	}
	if (r == 16){
		while (i != 0){
			switch(i % r){;
			case 10:
				answer = "A" + answer;
				break;
			case 11:
				answer = "B" + answer;
				break;
			case 12:
				answer = "C" + answer;
				break;
			case 13:
				answer = "D" + answer;
				break;
			case 14:
				answer = "E" + answer;
				break;
			case 15:
				answer = "F" + answer;
				break;
			default:
				answer = std::to_string(i % r) + answer;
				break;
			}
			i = i / r;
		}
	}

	//Print the answer :)
	cout << answer << endl;

	//fin
	return 0;
}

