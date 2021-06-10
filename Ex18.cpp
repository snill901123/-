// U0924014劉承皓版權所有，翻版必究
//Ex18
#include<bits/stdc++.h>
using namespace std;
void F(int *ptr){
	cout<<"改動值之前"<<endl;
	cout<<"Value of ptr = "<<ptr<<endl;
	cout<<"Value of *ptr = "<<*ptr<<endl;
	*ptr=*ptr+1;
	cout<<endl;
	cout<<"改動值之後"<<endl;
	cout<<"Value of ptr = "<<ptr<<endl;
	cout<<"Value of *ptr = "<<*ptr<<endl<<endl;
}
int main(){
	int number;
	cout<<"請輸入一個數字";
	cin>>number;
	cout<<endl;
	cout<<"呼叫第一次"<<endl<<endl;
	F(&number);
	cout<<"呼叫第二次"<<endl<<endl;
	F(&number);
} 
