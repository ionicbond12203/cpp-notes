#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void myPrint(int val) {
	cout << val << endl;
}

	//first type of vector
void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

//first type traversal
/**
	vector<int>::iterator itBegin = v.begin();// begin iterator
	vector<int>::iterator itEnd = v.end();//end iterator

	while (itBegin != itEnd) {
		cout << *itBegin << endl;
		itBegin++;
	}

	
*/

	//second type traversal 
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	cout << endl;

	//third type traversal
	//use the algorithm provide by stl;
	//must include algorithm header
	//need to set a function- exp - myPrint;
	for_each(v.begin(), v.end(), myPrint);

}
 


int main() {
	test01();
	return 0;
}
