// U0924014�B�ӵq���v�Ҧ��A½�����s 
//Ex19 
#include<bits/stdc++.h>
using namespace std;
double transfer(double* k,int r);
int main(){
	double n;
	cout<<"�п�J÷�l������(���:����): ";
	cin>>n;
	cout<<"�o��÷�l���׬� "<<fixed<<setprecision(2)<<transfer(&n,1)<<" ����\n";
	cout<<fixed<<setprecision(2)<<transfer(&n,0)<<"����\n";
	cout<<fixed<<setprecision(2)<<transfer(&n,-2)<<"����\n";
	cout<<fixed<<setprecision(2)<<transfer(&n,-5)<<"����\n";
}
double transfer(double* k,int r){  //�ǧ}�I�s 
	double a;
	a=*k * pow(10,r);
	return a;
}
