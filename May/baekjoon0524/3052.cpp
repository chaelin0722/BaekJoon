#include <iostream>
using namespace std;

int main(void){
	int remain[42] = {0,};  //나머지 결과값은 0부터 41까지만 나오게 되므로.. 길이는42 
	int num,cnt=0;
	
	
	
	int i;
	for(i=0;i<10;i++){
		cin >> num;
		if(!remain[num%42]++){ // 
			cnt++;
		}
		
	}
	cout<<cnt<<"\n";
	return 0;
}
