// U0924014�B�ӵq���v�Ҧ��A�Фŧ�ŧ
//Ex23
#include<bits/stdc++.h>
#include"Ex23.h"
using namespace std;
int main(){
	Package A("Ben","���_�����","�H����","678",50,20);
	cout<<"Ben�A���_�����A�H����A678�A50�s�q�A�C�s�q20��\n"; 
	cout<<A.caculateCost()<<"\n\n";
	TwoDayPackage B("NotherBen","���_�����","�H����","678",50,20,100);
	cout<<"Ben�A���_�����A�H����A678�A50�s�q�A�C�s�q20���A��Ѥ��O�v100\n";
	cout<<B.caculateCost()<<"\n\n";
	OvernightPackage C("NotherBen","���_�����","�H����","678",50,20,15);
	cout<<"Ben�A���_�����A�H����A678�A50�s�q�A�C�s�q20���A�j�]�O�v15\n";
	cout<<C.caculateCost()<<"\n\n";
}
