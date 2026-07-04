#include<iostream>
using namespace std;
float calculateVoltage(float current, float resistance){
	return current*resistance;
}

int main(){
   float current,resistance, voltage;
   cout<<"Enter the Value of Current: ";
   cin>>current;
   cout<<"Enter the Value of resistance: ";
   cin>>resistance;
   voltage=calculateVoltage(current, resistance);
   cout<<"The Total Voltage is: "<<voltage<<"V";
   return 0;
}
