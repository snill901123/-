// U0924014劉承皓版權所有，翻版必究 
//Ex20
#include<bits/stdc++.h>
using namespace std;
void F(int*);
int main(){
	srand(time(NULL));
	int a[5]={1,1,1,1,1},count=0;
	while(count<5){
		while(a[count]%3!=0){
			a[count]=10+rand()%90;
		}
		count++;
	}
	cout<<"亂數:\n";
	for(int i=0;i<5;i++){
		cout<<a[i]<<"  ";
	}
	cout<<"\n";
	cout<<"原始:\n";
	for(int i=0;i<5;i++){
		F(a+i);
	}
	cout<<"\n";
	for(int i=1;i<5;i++){  //插入排序法 
		int key=a[i];
		int j=i-1;
		while (key < a[j] && j >= 0) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
	}
	cout<<"\n-----排序後-----\n"; 
	for(int i=0;i<5;i++){
		F(a+i);
	}
}
void F(int* ptr){
	cout<<"位置 : "<<ptr<<"   數值 : "<<*ptr<<"\n"; 
}
