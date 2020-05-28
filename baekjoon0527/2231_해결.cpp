#include<iostream>

using namespace std;

int main(void){
	
	int num, sum, mok;
	
	cin>>num;
	int i;
	for(i=1;i<num;i++){  //작은수 부터 더하니까 저절로 가장 작은 수의 답이 나오게됨....
 
		sum = i;
		mok = i;
		
		while(mok){
			sum += mok%10;
			mok /=10;
		}		
		if(num ==sum){
			cout<<i<<endl;
			return 0;
		}
	}
	
	cout<<"0\n";
	
	return 0;
}
