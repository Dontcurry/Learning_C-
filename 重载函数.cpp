#include<iostream>
using namespace std;
int max(int a,int b){
	a=a>b?a:b;
	return a;
} 
double max(double a,double b){
	a=a>b?a:b;
	return a;
}
int main(){
	int a,b;
	double c,d;
	cout<<"先输入两个整数再输入两个小数。"<<endl;
	cin>>a>>b;
	cout<<max(a,b)<<endl;
	cin>>c>>d;
	cout<<max(c,d)<<endl;
	return 0;
}
