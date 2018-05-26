#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	char M;
	cout << "masukan merek baju "; 
	cin >> n;
	cout << "masukan ukuran baju "; 
	cin >> M;
	if(n == 1) {
		cout << "mereknya IMP" << endl;
		switch (M) {
			case 'M':
				cout << "hargannya 220K";
				break;
			case 'S':
				cout << "harganya 200K";
				break;
			case 'L':
				cout << "harganya 250K";
				break;
			default:
				cout << "invalid input";
				break;
		}
	}
	
	else if (n == 2) {
		cout << "mereknya Prada" << endl;
		switch(M) {
			case 'S':
				cout << "harganya 150K";
				break;
			case 'M':
				cout << "harganya 160K";
				break;
			case 'L':
				cout << "harganya 170K";
				break;
			default:
				cout << "invalid input";
				break;
		}
	}
	
	else if (n == 3) {
		cout << "mereknya Gucci" << endl;
		switch(M) {
			case 'S':
				cout << "harganya 200K";
				break;
			case 'M':
				cout << "harganya 200K";
				break;
			case 'L':
				cout << "harganya 200K";
				break;
			default:
				cout << "invalid input";
				break;
		}
	}
	
	else if (n == 4) {
		cout << "mereknya Louis Vuitton" << endl;
		switch(M) {
			case 'S':
				cout << "harganya 300K";
				break;
			case 'M':
				cout << "harganya 300K";
				break;
			case 'L':
				cout << "harganya 350K";
				break;
			default:
				cout << "invalid input";
				break;
		}
	}
	
	else if (n == 5) {
		cout << "mereknya Kick Denim" << endl;
		switch(M) {
			case 'S':
				cout << "harganya 100K";
				break;
			case 'M':
				cout << "harganya 120K";
				break;
			case 'L':
				cout << "harganya 130K";
				break;
			default:
				cout << "invalid input";
				break;
		}
	}
	
	else {
		cout << "invalid input" << endl;
	}
	
	return 0;
}
