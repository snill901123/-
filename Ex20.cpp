// U0924014�B�ӵq���v�Ҧ��A½�����s 
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
	cout<<"�ü�:\n";
	for(int i=0;i<5;i++){
		cout<<a[i]<<"  ";
	}
	cout<<"\n";
	cout<<"��l:\n";
	for(int i=0;i<5;i++){
		F(a+i);
	}
	cout<<"\n";
	for(int i=1;i<5;i++){  //���J�ƧǪk 
		int key=a[i];
		int j=i-1;
		while (key < a[j] && j >= 0) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
	}
	cout<<"\n-----�Ƨǫ�-----\n"; 
	for(int i=0;i<5;i++){
		F(a+i);
	}
}
void F(int* ptr){
	cout<<"��m : "<<ptr<<"   �ƭ� : "<<*ptr<<"\n"; 
}
