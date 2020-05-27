#include<iostream>

using namespace std;

int main(void){
	
	int num, sum, mok;
	
	cin>>num;
	int i;
	for(i=1;i<num;i++){
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
