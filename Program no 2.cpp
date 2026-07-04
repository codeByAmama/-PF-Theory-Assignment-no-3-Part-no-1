#include<iostream>
using namespace std;
void takeScore(int a[], int size){
	cout<<"Enter Students test Scores in the form of Array: ";
	for(int i=0; i<size; i++){
		cin>>a[i];
	}
	cout<<endl;
}

void printScoreValue(int a[], int size){
	for(int i=0; i<size; i++){
		cout<<"The Test Score of the Student "<<i+1<<" is: ";
		cout<<a[i]<<endl;
	}
 cout<<endl;
}

int calculateLowest(int a[], int size){
    int minValue=a[0];
    for(int i=0; i<size; i++){
	if(a[i]<minValue){
		minValue=a[i];
	}
	}
	return minValue;
}

int calculateHighest(int a[], int size){
    int maxValue=a[0];
    for(int i=0; i<size; i++){
	if(a[i]>maxValue){
		maxValue=a[i];
	}
	}
	return maxValue;
}

int main(){
  int Array_size,lowestScore, highestScore;
  cout<<"Enter the Number of Students: ";
  cin>>Array_size;
  int scoreArray[Array_size];
  takeScore(scoreArray, Array_size);
  printScoreValue(scoreArray, Array_size);	
  lowestScore=calculateLowest(scoreArray, Array_size);
  highestScore=calculateHighest(scoreArray, Array_size);
  cout<<"The Lowest Score is: "<<lowestScore<<endl;
  cout<<"The Higest Score is: "<<highestScore;
  return 0;
}
