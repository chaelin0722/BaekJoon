#include <iostream>
using namespace std;

int main(void){
	int remain[42] = {0,};  //������ ������� 0���� 41������ ������ �ǹǷ�.. ���̴�42 
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
