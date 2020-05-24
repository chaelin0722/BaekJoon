#include <iostream>
using namespace std;

int main(void){
	int a, b, c, abc;
	int count[10]={0};  //나머지는 0~9까지 10개밖에 없다..! 
	cin>>a>>b>>c;
	abc = a*b*c;
	
	while(abc){
		count[abc%10]++;
		abc = abc/10;
			
	}
	int i;
	for(i=0;i<10;i++){
		cout<<count[i]<<"\n";
	}
	
	return 0;
}
