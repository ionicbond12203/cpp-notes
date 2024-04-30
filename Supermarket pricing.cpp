#include<iostream>
using namespace std;


	const double LOW_MARKUP = 0.05;
	const double HIGH_MARKUP = 0.10;
	const int THRESHOLD = 7;

	void introduction();

	void getInput(double& cost, int& turnover);

	double price(double cost, int runover);

	void giveOutput(double cost, int turnover,double price);

	int main() {
		double wholesaleCost, retailPrice;
		int shelfTime;
		introduction();
		getInput(wholesaleCost, shelfTime);
		retailPrice = price(wholesaleCost, shelfTime);
		giveOutput(wholesaleCost, shelfTime, retailPrice);
		return 0;

	}

	void introduction() {
		using namespace std;
		cout << "this program determines the retail price for \n"
			<< "an item at a Quick-Shop supermarket store.\n";
	}

	void getInput(double& cost, int& turnover) {
		using namespace std;
		cout << "enter the wholesale cost of item: $";
		cin >> cost;
		cout << "enter the expected number of days until sold: ";
		cin >> turnover;
	}

	void giveOutput(double cost, int turnover, double price) {
		using namespace std;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "Wholesale cost = $" << cost << endl
			<< "Expected time until sold = "
			<< turnover << "day" << endl
			<< "Retail price =$" << price << endl;
	}

	double price(double cost, int turnover) {
		if (turnover <= THRESHOLD)					 //less than 7 day
			return(cost + (LOW_MARKUP * cost));   //  cost + (0.05*cost)   =  cost + (5%+cost)
		else
			return (cost + (HIGH_MARKUP * cost)); //more than 7 day
												//cost + (0.10*cost) = cost + (10*cost)
	
	}
	

	
