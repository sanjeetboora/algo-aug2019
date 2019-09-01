#include<iostream>
using namespace std;

void generateStrings(char *input,char *output,int i,int j){
	//base case
	if(input[i]=='\0'){
		output[j] = '\0';
		cout<<output<<endl;
		return;
	}
	//rec case
	int digit = input[i]-'0';
	char ch = digit + 'A' - 1;
	output[j] = ch;
	generateStrings(input,output,i+1,j+1);
	//second case
	if(input[i+1]!='\0'){
		int secondDigit = input[i+1]-'0';
		int no = 10*digit + secondDigit;
		if(no<=26){
			ch = no + 'A' - 1;
			output[j] = ch;
			generateStrings(input,output,i+2,j+1);
		}
	}
}

int main(){
	char input[10],output[10];
	cin>>input;
	generateStrings(input,output,0,0);



	return 0;
}