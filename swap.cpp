#include<iostream>
using namespace std;

void swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << *p1<<"p" << endl;
	cout << *p2 <<"p"<< endl;

}

//always public 
struct Student{
	string name;
	int age;
	int score;

/*	Student(string name, int age, int score) {
		this->name = name;
		this->age = age;
		this->score = score;
	}
*/
	void show_detail() {
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
		cout << "score: " << score << endl;
	}
};

int main() {

	int a = 8;
	int b = 3;
	swap(&a, &b);
	cout <<"a:"<< a << endl;
	cout <<"b: "<< b << endl;

	//Student student1("teo",18,100);
	Student student1;
	student1.name = "teo";
	student1.age = 18;
	student1.score = 100;
	student1.show_detail();



	return 0;

}
