// U0924014�B�ӵq���v�Ҧ��A½�����s
//Ex18
#include<bits/stdc++.h>
using namespace std;
void F(int *ptr){
	cout<<"��ʭȤ��e"<<endl;
	cout<<"Value of ptr = "<<ptr<<endl;
	cout<<"Value of *ptr = "<<*ptr<<endl;
	*ptr=*ptr+1;
	cout<<endl;
	cout<<"��ʭȤ���"<<endl;
	cout<<"Value of ptr = "<<ptr<<endl;
	cout<<"Value of *ptr = "<<*ptr<<endl<<endl;
}
int main(){
	int number;
	cout<<"�п�J�@�ӼƦr";
	cin>>number;
	cout<<endl;
	cout<<"�I�s�Ĥ@��"<<endl<<endl;
	F(&number);
	cout<<"�I�s�ĤG��"<<endl<<endl;
	F(&number);
} 
