// U0924014劉承皓版權所有，翻版必究 
//Ex19 
#include<bits/stdc++.h>
using namespace std;
double transfer(double* k,int r);
int main(){
	double n;
	cout<<"請輸入繩子的長度(單位:公分): ";
	cin>>n;
	cout<<"這條繩子長度為 "<<fixed<<setprecision(2)<<transfer(&n,1)<<" 公釐\n";
	cout<<fixed<<setprecision(2)<<transfer(&n,0)<<"公分\n";
	cout<<fixed<<setprecision(2)<<transfer(&n,-2)<<"公尺\n";
	cout<<fixed<<setprecision(2)<<transfer(&n,-5)<<"公里\n";
}
double transfer(double* k,int r){  //傳址呼叫 
	double a;
	a=*k * pow(10,r);
	return a;
}
