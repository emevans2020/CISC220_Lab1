/*
 * Lab1.cpp
 * Emily Evans and help from Paul Ernst for parts of project
 * TA: Lauren
 * Feb 14, 2019
 * Due: February 21
 * Lab1
 * This file contains all function definitions and main for lab 1
 *
 */

#include <iostream>
using namespace std;

/* Function declarations start */
void starLine();
bool isPrimeNumber(int x);
void sumThreeHundred ();
int sumUpTo();
void multiplicationTable(int x);
void multiplication();
int collatzConj ();
void isLeapYear();
void starx(int num);
void collatzPtTwo (int a, int b);
/* end of function declarations */

int main (){
	/* Problem 1
	 * Purpose: Print out Hello World to show that compiler works
	 * */
	cout << "Hello World!" << endl;
	starLine();
	cout << "Test Cases for Problem 3:" << endl;
	isPrimeNumber(5);
	isPrimeNumber(6);
	isPrimeNumber(1100);
	starLine();
	cout <<"Test Case Problem 4" << endl;
	sumThreeHundred();
	starLine();
	cout <<"Test Case Problem 5" << endl;
	sumUpTo();
	starLine();
	cout << "Test Case for Problem 6" << endl;
	multiplicationTable(6);
	multiplicationTable(22);
	multiplicationTable(3);
	starLine();
	cout << "Test Case for Problem 7" << endl;
	multiplication();
	starLine();
	cout << "Test Case for Problem 8" << endl;
	collatzConj ();
	starLine();
	cout << "Test Case for Problem 9: Leap Year" << endl;
	isLeapYear();
	starLine ();
	cout << "Test Case for Problem 10" << endl;
	starx(10);
	cout << endl;
	starx(5);
	cout << endl; // added in the line break to space out starx
	starx(3);
	cout << endl;
	starLine();
	cout << "Test Case for Problem 11" << endl;
	cout << "Problem 11 using 6 to 13" << endl;
	collatzPtTwo (6, 13);
	cout << endl;
	cout <<"Problem 11 using numbers 5 to 99"<< endl;
	collatzPtTwo (5, 99);
	cout << endl;
	cout << "Problem 11 using numbers 2 to 44" << endl;
	collatzPtTwo (2, 44);
	return 0;
}

/* Problem 2
 * Input: None
 * Return: Nothing, but print out a line of stars
 * Purpose: Function that is meant to print out a line of stars
 * after each problem
 * */
void starLine(){
	cout << "*****************************************"\
			"*****************************************" << endl;
} // end of starLine

/* Problem 3
 * Purpose: to check whether number is a prime or not
 * */
bool isPrimeNumber(int x){
	int number = x - 1;
	while (number > 1){
		if (x%number == 0) {
			cout << x<< " is not a prime number!" << endl;
			return false;
		}
		number--;
	}
    cout << x<< " is a prime number!" << endl;
	return true;
}

/* Problem 4
 * Input: takes nothing
 * Output: print out the total if the number is multiple of 20
 * Purpose: function to calculate the sum up to and including 300
 * and if number is a multiple of 20 print out the number
 * */
void sumThreeHundred (){
	int num = 300;
	int total = 0;
	while (num >0) {
		total += num;
		num --;
		if (num%20 == 0) {
			cout << total << endl;
		}
	}
}

/* Problem 5
 * Input: none
 * Output: the number of terms you need to exceed 100,000
 *	Purpose: will start at 0 and continue to add up numbers
 *	1 + 2 + 3 + 4 .... until the number is greater than 100,000
 *  each time you add another number the count will increase
 *  */

int sumUpTo(){
	int num = 0;
	int total = 0;
	while (total < 100000){
		total += num;
		num ++;
	}
	cout << num << endl;
	return num;
} /* end of sumUpTo */

/* Problem 6 */
void multiplicationTable (int x){
	int num = x;
	for (int i = 0; i <= 12; i++) {
		cout << num << " x " << i << " = " << num * i << endl;
	}
} /*end of multiplicationTable*/


/* Problem 7
 * Input: none
 * Output: the times tables for 1 up to 12
 * Purpose: Calling the function from 6 to create the times tables
 * for numbers 1 up to 12
 * */
void multiplication (){
	for (int i = 0; i <=12; i++){
		multiplicationTable(i);
	}
}

/* Problem 8
 * Input: user puts in any positive natural number
 * Output: Will tell the user how many times the Collatz Conjecture
 * had to loop to get down to 1
 * Purpose: Coding the Collatz Conjecture, getting the input down
 * to the number 1.
 * */
int collatzConj (){
	int num;
	int loopAmt = 0;
	cout << "Enter in a positive natural number" << endl;
	cin >> num;
while (num != 1) {
	if (num % 2 == 0){
		num = num/2;
	}
	else if (num % 2 == 1){
		num = (num * 3) + 1;
	}
	loopAmt ++;
}
	cout << "It took the Collatz Conjecture "<< loopAmt <<
			" loops to get down to 1" << endl;
	return loopAmt;
}

/* Problem 9
 * Input: nothing
 * Output: Will print out ONLY which years are leap years
 * Purpose: Starting with the year 2019 (current year) accounting
 * for the next 400 years will print out which years are leap years
 * */
void isLeapYear(){
	for (int currentYr = 2019; currentYr <= 2419 ; currentYr ++){
		if (currentYr % 4 == 0 && currentYr % 100 != 0){
			cout << currentYr << " is a leap year!!!" << endl;
		}
		else if (currentYr % 400 == 0){
			cout << currentYr << " is a leap year!!!" << endl;
		}
	}
} // end isLeapYear

/* Problem 10
 * Input: the number used to construct x made of stars
 * Purpose: will print out an x of stars using the number given as
 * argument
 *
 */
void starx(int num){
	if (num % 2 == 0) {
		num ++;
	}
	int size = (num * 2) -1;
	for (int row = 0; row < size; row++) {
	        for (int col = 0; col < size; col++) {
	            if (row == col || row + col == size - 1) {
	                cout << "*";
	            } else {
	                cout << " ";
	            }
	        }
	        cout << endl;
	}
} // end of starx

/* Problem 11 */
void collatzPtTwo (int a, int b){
	int numbtwn;
	for (int num = a+1; num < b; num ++) {
		numbtwn = num;
		while (numbtwn != 1) {
			if (numbtwn % 2 == 0){
				numbtwn = numbtwn/2;
			}
			else if (numbtwn % 2 == 1){
				numbtwn = (numbtwn * 3) + 1;
			}
		}
		cout << "Collatz Conjecture is still working" << endl;
	}
}
