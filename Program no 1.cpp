#include<iostream>
using namespace std;
int Array_size;
void takeScore(int a[], int size){
	cout<<"Enter Students Score: "<<endl;
	for(int i=0; i<Array_size; i++){
		cin>>a[i];
	}
}

void printScoreValue(int a[], int size){
	cout<<"The Score of the Students is: "<<endl;
	for(int i=0; i<Array_size; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
double calculateAverage(int a[], int size){
	cout<<"Now Calculate the Average of an Array "<<endl;
	int sum=0, average;
	for(int i=0; i<Array_size; i++){
		sum=sum+a[i];
	}
	cout<<"The sum of Array is: "<<sum<<endl;
    return average=sum/Array_size;
}
int main()
{
  double result;
  cout<<"Enter the Size of an Array: ";
  cin>>Array_size;
  int scoreArray[Array_size];
  takeScore(scoreArray, Array_size);
  printScoreValue(scoreArray, Array_size);
  result=calculateAverage(scoreArray, Array_size);
  cout<<"The Average of an Array is: "<<result;
}
