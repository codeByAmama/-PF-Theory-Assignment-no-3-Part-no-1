#include<iostream>
using namespace std;
int calculatePower(int base, int exponent){
	int result=1;
	for(int i=1; i<=exponent; i++){
		result*=base;
	}
	return result;
}

int main(){
	int base, exponent, powerFunction;
	cout<<"Enter the Base Value: ";
	cin>>base;
	cout<<"Enter the Exponent Power: ";
	cin>>exponent;
    powerFunction=calculatePower(base, exponent);
    cout<<base<<" raised to the power "<<exponent<<" is: "<<powerFunction;
    return 0;
}
