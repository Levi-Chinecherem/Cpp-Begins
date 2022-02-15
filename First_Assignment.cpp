#include<iostream>
using namespace std;

/* Done by Levi Chinecherem Chidi */

int main(int argc, char** argv) {
	
	// 01-02-2022 the assignment
  /* In this assignment i 
  i. assigned grade to GradeP
  ii. checked for invalid scores
  */
	
	// Assignment 1
	int CA, EX, TS, GradeP;
  string gradeLetter;
	cout<< "Enter Student Score: CA and EX \n";
	cin>> CA >> EX;
	TS = CA+EX;

	if (TS >= 75 && TS <= 100){
    GradeP = 4.0;
    gradeLetter = "A";
    cout << "Grade Point--"<< GradeP << "\n";
    cout << "Grade--"<< gradeLetter;
  }
	else if (TS >= 70 && TS <= 74){
    GradeP = 3.5;
    gradeLetter = "AB";
    cout << "Grade Point--"<< GradeP << "\n";
    cout << "Grade--"<< gradeLetter;
  }
	else if (TS >= 65 && TS <= 69){
    GradeP = 3.25;
    gradeLetter = "B";
    cout << "Grade Point--"<< GradeP << "\n";
    cout << "Grade--"<< gradeLetter;
  }
	else if (TS >= 60 && TS <= 64){
    GradeP = 3.0;
    gradeLetter = "BC";
    cout << "Grade Point--"<< GradeP << "\n";
    cout << "Grade--"<< gradeLetter;
  }
	else if (TS >= 55 && TS <= 59){
    GradeP = 2.75;
    gradeLetter = "C";
    cout << "Grade Point--"<< GradeP << "\n";
    cout << "Grade--"<< gradeLetter;
  }
	else if (TS >= 50 && TS <= 54){
    GradeP = 2.50;
    gradeLetter = "CD";
    cout << "Grade Point--"<< GradeP << "\n";
    cout << "Grade--"<< gradeLetter;
  }
	else if (TS >= 45 && TS <= 49){
    GradeP = 2.25;
    gradeLetter = "D";
    cout << "Grade Point--"<< GradeP << "\n";
    cout << "Grade--"<< gradeLetter;
  }
	else if (TS >= 40 && TS <= 44){
    GradeP = 2.0;
    gradeLetter = "E";
    cout << "Grade Point--"<< GradeP << "\n";
    cout << "Grade--"<< gradeLetter;
  }
  else if (TS >=0 && TS <= 39){
    GradeP = 0.0;
    gradeLetter = "F";
    cout << "Grade Point--"<< GradeP << "\n";
    cout << "Grade--"<< gradeLetter;
  }
	else
		cout << "That\'s an invalid number key in whole numbers 0-100";
	
	return 0;
}
