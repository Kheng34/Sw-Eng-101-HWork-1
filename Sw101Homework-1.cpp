#include <iostream>

using namespace std;

int num, result;
char startAgain = 'Y';

int main() {
	cout << "Welcome!";
	while(startAgain == 'Y') {
		cout << "\nPlease enter the number: ";
		cin >> num;
		for(int i = 0; i <= num; i++) {
			result += i;
		}
		cout << "Result: " << result << endl;
		cout << "Try Again?(Y/N) ";
		cin >> startAgain;
	}
		//The End
		cout<<endl;system("PAUSE");return 0;
}
