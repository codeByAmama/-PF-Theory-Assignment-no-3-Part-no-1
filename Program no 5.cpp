#include<iostream>
using namespace std;
char linearSearch(char a[],int size, char target){
	for(int i=0; i<size; i++){
		if(a[i]==target){
			return i;
		}
	}
	return -1;
}

int main(){
	int size=11, result;
	char player[size]={'j','s','t','r','u','w','x','z','y','q','v'};
	char target;
	cout<<"Enter initial Player: ";
	cin>>target;
	result=linearSearch(player, size, target);
	if(result!=-1){
		cout<<"Player is in the Team";
	}
	else{
		cout<<"Player is not found";
	}
	return 0;
}
