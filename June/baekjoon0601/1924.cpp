/*2007�� x��x�� �� ���� ���ϱ� _ class����.ver*/
#include<iostream>
using namespace std;

class calendar{
private:
	int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	string day[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT"};
	int key;
	int m, d; 

public:
	void setDate(){
		cin>>m;
		cin>>d;
		key =0;
	}
	void solution(){
		int i;
		for(i=0;i<m-1;i++)	d += month[i];
		key = d%7;  //1�� 1���� �������̹Ƿ�.. �� �ϼ��� 7�� ���� �������� ������ �ȴ�.. 
	}
	void printDay() const{
		cout << day[key];
	}
};
int main(void){

	calendar c;
	c.setDate();
	c.solution();
	c.printDay();
	
	return 0;
}
