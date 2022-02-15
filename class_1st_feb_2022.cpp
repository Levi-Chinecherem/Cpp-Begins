#include<iostream>
using namespace std;

/* Done by Levi Chinecherem Chidi */

int main(int argc, char** argv) {
	
	// 01-02-2022 class examples and the assignments
	
	// Example 1
	int CA, EX, TS;
	cout<< "Enter Student Score: CA and EX \n";
	cin>> CA >> EX;
	TS = CA+EX;
	if (TS >= 75)
		cout << "Grade is A";
	else if (TS >= 70)
		cout << "Grade is AB";
	else if (TS >= 65)
		cout << "Grade is B";
	else if (TS >= 60)
		cout << "Grade is BC";
	else if (TS >= 55)
		cout << "Grade is C";
	else if (TS >= 50)
		cout << "Grade is CD";
	else if (TS >= 45)
		cout << "Grade is D";
	else if (TS >= 40)
		cout << "Grade is E";
	else
		cout << "Grade is F";
	
	return 0;
}
