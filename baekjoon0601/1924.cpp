/*2007년 x월x일 의 요일 구하기 _ class연습.ver*/
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
		key = d%7;  //1월 1일이 월요일이므로.. 총 일수를 7로 나눈 나머지가 요일이 된다.. 
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
