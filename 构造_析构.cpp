//��⣺https://blog.csdn.net/u011392772/article/details/42772697 

#include <string>
#include <iostream>
using namespace std;
class Student{//����Student�� 
	public:
	Student(int n,string nam,char s){//���幹�캯�� 
		num =n;
		name =nam;
		sex=s;
		cout<<"Constructor called."<<endl;//����й���Ϣ 
	} 
	
	~Student(){
		//������������
		cout<<"Destructor called.The num is"<<num<<"."<<endl; 
	}
	
	void display(){
		//�����Ա����
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
		Student stud1(1408,"pfq",'f');//��������stud1
		stud1.display() ;//���ѧ��1������
		Student stud2(1408,"curry",'f');//�������stud2
		stud2.display() ;//���ѧ��2������
		return 0; 
	}











