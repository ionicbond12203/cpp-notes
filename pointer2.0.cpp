#include<iostream>
using namespace std;
int main() {

/*
*  //normal pointer
* 
	int a = 10;
	int* ptr = &a;
	cout << *ptr << endl;
//-----------------------------------------------------------------------------	
	//to check the size of the pointer
	cout << sizeof(int*) << endl;
	cout << sizeof(char *) << endl;
	cout << sizeof(string*) << endl;
	cout << sizeof(double*) << endl;
*/

/*--------------------------------------------------------------------------------------*/
/*
	int a = 8;
	int b = 9;
	
	const int* ptr = &a;
	cout << *ptr << endl;
	cout << ptr << endl;
	//we cannot use assign a new value to  like this :    *ptr = 99 ( will causing error)
	//because the value of the const int cannot be change
	//but can change where the pointer pointing to(address) :  ptr = &b ( not causing error)

*/

/*------------------------------------------------------------------------------------------*/

//	int c = 8;
//	int* const p = &c;
		//the value of c variable can be change; * p = 9 (correct)
		//but we can't change where the pointer point to ; ptr &b (error)
	
/*
	int a = 8;
	int b = 99;
	int* const ptr = &a;
	*ptr = 4555;
	
	cout << *ptr << endl; //output:4555
	cout << a << endl;    //output:4555
	
*/


/*-----------------------------------------------------------------------*/

	int a = 10;
	int b = 5;
	const int* const ptr = &a; //can't modified the address and value
	//ptr = &b; //error
	//*ptr = 8; //error

		return 0;
	
	
}
