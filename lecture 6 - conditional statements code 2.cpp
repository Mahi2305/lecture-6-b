#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Student, please enter the marks to calculate the grade: "<<endl;
	cin>>marks;
	if(marks>90){
		cout<<"A"<<endl;
	}
	else if(marks<90 && marks>80){
		cout<<"B"<<endl;
	}
	else if(marks<80 && marks>70){
		cout<<"C"<<endl;
	}
	else{
		cout<<"Pass"<<endl;
	}
}
