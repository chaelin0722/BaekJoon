/*1924 simple_ver*/
#include<iostream>
using namespace std;

int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
char *day[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT"};

int main(void){
	int m,d;
	cin>>m>>d;
	int i;
	for(i=0; i<m-1; i++){
		d += month[i];
	}
	cout<<day[d%7];
	
	return 0;
} 
