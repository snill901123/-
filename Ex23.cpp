// U0924014劉承皓版權所有，請勿抄襲
//Ex23
#include<bits/stdc++.h>
#include"Ex23.h"
using namespace std;
int main(){
	Package A("Ben","曲奇玩具街","以酷鎮","678",50,20);
	cout<<"Ben，曲奇玩具街，以酷鎮，678，50盎司，每盎司20元\n"; 
	cout<<A.caculateCost()<<"\n\n";
	TwoDayPackage B("NotherBen","曲奇玩具街","以酷鎮","678",50,20,100);
	cout<<"Ben，曲奇玩具街，以酷鎮，678，50盎司，每盎司20元，兩天內費率100\n";
	cout<<B.caculateCost()<<"\n\n";
	OvernightPackage C("NotherBen","曲奇玩具街","以酷鎮","678",50,20,15);
	cout<<"Ben，曲奇玩具街，以酷鎮，678，50盎司，每盎司20元，隔夜費率15\n";
	cout<<C.caculateCost()<<"\n\n";
}
