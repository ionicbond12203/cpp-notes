// Using template
// Help us to save time to type identical code = 
// we don't need to rewrite a code with same structure incase the variable type was difference,
// The type of the variable( int , char ,string or other ) was replace by the "T"

#include<iostream>
#include<string>
using namespace std;

template<class T>		//is a template prefix  // T is a type parameter // class = type //

void swapValues(T& variable1, T& variable2) {

	T temp;
	temp = variable1;
	variable1 = variable2;
	variable2 = temp;

}

int main() {
	int integer1 = 1, integer2 = 2;
	cout << "Original value are " << integer1 << " " << integer2 << endl;
	swapValues(integer1, integer2);	//swap the integer
	cout << "New values are " << integer1 << " " << integer2 << endl << endl;

	
	
	char  symbol1 = 'A', symbol2 = 'B';
	cout << "Original character values are " << symbol1 << " " << symbol2 << endl;
	swapValues(symbol1, symbol2);  //swap the symbol
	cout << "New character values are " << symbol1 << " " << symbol2 << endl << endl;
	

	double double1 = 1.1, double2 = 2.2;
	cout << "Original double values are " << double1 << " " << double2 << endl;
	swapValues(double1, double2);
	cout << "New double values are " << double1 << " " << double2 << endl << endl;

	




}
