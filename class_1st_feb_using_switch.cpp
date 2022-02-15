#include<iostream>
using namespace std;

/* Done by Levi Chinecherem Chidi */
int main(int argc, char** argv) {
	
	// 01-02-2022 class example 2 (using Switch Selection Statement) and the assignments
	
	// Example 1
	int n1, n2, rp;
  cout << "1 Addition " <<endl;
  cout << "2 Subtraction " <<endl;
  cout << "3 Division " <<endl;
  cout << "4 Multiplication " <<endl;
  cout << "5 Modules(Mod) " <<endl;
	cout << "Select From 1 to 5 " <<endl;
  cin >> rp;
  cout<< "Enter two numbers \n";
  cin>> n1 >> n2;

  switch(rp){
    case 1: cout<< n1 << "+" << n2 << "=" << n1+n2;
    break;
    case 2: cout<< n1 << "-" << n2 << "=" << n1-n2;
    break;
    case 3: cout<< n1 << "/" << n2 << "=" << n1/n2;
    break;
    case 4: cout<< n1 << "*" << n2 << "=" << n1*n2;
    break;
    case 5: cout<< n1 << "%" << n2 << "=" << n1%n2;
    break;
    default:{
      cout<< "Error, Enter 1, 2, ..., 5";
      cout<< "Good Bye";
    }
  }

	return 0;
}
