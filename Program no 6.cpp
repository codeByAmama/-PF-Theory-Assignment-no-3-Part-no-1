#include<iostream>
using namespace std;
int calculateLength(char word[]){
	int count=0;
	while(word[count]!='\0'){
		count++;
}
	return count;
}

int main(){
	int wordLength;
	char word[50];
	cout<<"Enter a word: ";
	cin>>word;
  wordLength=calculateLength(word);
  cout<<"The Length of the word is: "<<wordLength;
	return 0;
}
