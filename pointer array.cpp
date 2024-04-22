#include<iostream>
#include<string>
using namespace std;

struct Company {
	int registration_id;
	string registration_name;
	int total_employee;
	string location;

	void get_info() {
		cout << "registration_id: " << registration_id << endl;
		cout << "registration_name: " << registration_name << endl;
		cout << "total_employee: " << total_employee << endl;
		cout << "location: " << location << endl;

	}
};

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "after swapping:" << "a: " << *a << ", b: " << *b << endl;

};
	
int main() {
	Company company1;

	company1.registration_name = "inforsec ionicbond";
	company1.registration_id = 1234;
	company1.location = "malaysia";
	company1.total_employee = 55533;
	company1.get_info();

	int a = 55;
	int b = 32;

	cout << "before swapping: " << "a: " << a << " b: " << b << endl;
	swap(&a, &b);


	int arr[10]{ 1,2,3,4,5,6,7,8,9,10 };
	int* ptr = arr;
	for (int i = 0; i <= 10; i++) {
		cout << i << endl;
		*ptr++;
	};

	string cars[3]{ "honda","kancil","bmw" };
	for (int j = 0; j <= 2; j++) {
		cout << cars[j] << endl;
	};


	int number = 8898;
	int number2 = 5756;
	int* ptr1 = &number;
	cout << *ptr1 << endl;
	ptr1 = &number2;
	cout << *ptr1 << endl;

	




	return 0;

	

}
