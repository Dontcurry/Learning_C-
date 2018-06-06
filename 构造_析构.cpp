//详解：https://blog.csdn.net/u011392772/article/details/42772697 

#include <string>
#include <iostream>
using namespace std;
class Student{//生命Student类 
	public:
	Student(int n,string nam,char s){//定义构造函数 
		num =n;
		name =nam;
		sex=s;
		cout<<"Constructor called."<<endl;//输出有关信息 
	} 
	
	~Student(){
		//定义析构函数
		cout<<"Destructor called.The num is"<<num<<"."<<endl; 
	}
	
	void display(){
		//定义成员函数
		cout<<"num:"<<num<<endl; 
		cout<<"name:"<<name<<endl;
		cout<<"sex:"<<sex<<endl<<endl;
	} 
	private:
		int num;
		string name;
		char sex;
}; 
	int main(){
		Student stud1(1408,"pfq",'f');//建立对象stud1
		stud1.display() ;//输出学生1的数据
		Student stud2(1408,"curry",'f');//定义对象stud2
		stud2.display() ;//输出学生2的数据
		return 0; 
	}











