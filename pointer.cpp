#include <iostream>
using namespace std;
int main() {
/*
	int a = 10;
	int* p = &a;
	int* x = NULL; //null pointer
	
	cout << sizeof(int*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(string*) << endl;
*/
/------------------------------------------------------------------------
/*
 野指针， 会报错
	int* b = (int *)0x1110;
	cout << *b << endl;
	*/
----------------------------------------------------------------------------
	//constant pointer 常量指针// 指针的指向可以修改，但是指针指向的值不可以改 //const int* ptr = &g。
	// 比如 *ptr = 20 ;错误，（指针指向的值不可以改)
	/// ptr = &b,正确，指针指向可以改。
		//int g = 10;
		//const int* ptr = &g; 

-------------------------------------------------------------------
	            //指针常量- 指针的指向不可以改，指针指向的值可以改。int *const p=&a //
	//比如 *p =20; 正确，
	//&p = b; 错误；

		//int a = 10;
		//int* const p = &a;

/*	
	int a = 18;
	int b = 777;
	int* const p = &a;
	cout << p << endl;			//error occur
	cout << *p << endl;
	 p = &b;
	cout << p << endl;
*/
-------------------------------------------------------------------
	              //const int* const p//
 int a = 10;
	int b = 10;
	const int* const p = &a; //指针的指向 和 指针指向的值 都不可以改

	return 0;
}
