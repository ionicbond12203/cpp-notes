#include<iostream>
using namespace std;

void newLine();

void getInt(int& number);

int main(){
    int n;
    getInt();
    cout<<"final value read in = "<<n<<endl
        <<"end of demostration.\n";
        return 0;
}

void newLine(){
    char symbol;
    do{
        cin.get(symbol);
        
    }while(symbol !='\n')
}

void getInt(int% number){
    char ans;
    do{
        cout<<"enter input number: ";
        cin>>number;
        cout<<"you entered "<<number
            <<". Is that correct? (yes/no): ";
        cin>>ans;
        newLine();
        
    }while ((ans!='y')&&(ans!='y'));
}
