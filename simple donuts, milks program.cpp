#include <iostream>
using namespace std;

int main() {
    int donuts;
    int milks;
    
    cout << "Enter number of donuts: ";
    cin >> donuts;
    cout << "Enter number of glasses of milk: ";
    cin >> milks;

    /**This line (line 17) calculates the average number of donuts per glass of milk
    by dividing the number of donuts by the number of glasses of milk.
    The result is stored in the variable dpg as a double.**/
    
    double dpg = static_cast<double>(donuts) / milks; 
    
    cout << donuts << " donuts.\n"
         << milks << " glasses of milk.\n"
         << "You have " << dpg << " donuts for each glass of milk.\n";
         
    return 0;
}
