// U0924014劉承皓版權所有，請勿抄襲
//Ex24
#include<bits/stdc++.h>
using namespace std;
class area{
	public:
		area(int x){
			a=x;
			calculate(x);
		}
		area(int x,int y){
			a=x;
			b=y;
			calculate(x,y);
		}
		area(int x,int y,int z){
			a=x;
			b=y;
			c=z;
			calculate(x,y,z);
		}
		int calculate(int x){
			D=x*x;
		}
		int calculate(int x,int y){
			D=x*y;
		}
		int calculate(int x,int y,int z){
			D=(x*y)/2;
		}
		void show(int x){
			cout<<"正方形 : "<<D<<"\n"; 
		}
		void show(int x,int y){
			cout<<"長方形 : "<<D<<"\n"; 
		}
		void show(int x,int y,int z){
			cout<<"三角形面積 : "<<D<<"\n"; 
		}
	private:
		int a,b,c,D;
};
int main(){
	area A(10);
	A.show(10);
	area B(10,20);
	B.show(10,20);
	area C(3,4,5);
	C.show(3,4,5);
}
