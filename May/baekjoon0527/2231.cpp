#include<iostream>
using namespace std;

int main(void){
	int n;
	cin>>n;
	
	int sum, mok, i;
	for(i=1;i<n;i++){
		sum = i;  //어떤 수와 아래의 각 자리의 수가 합해지므로.. sum = 어떤수로 초기화한다. 
		mok = i;
		
		while(mok){
			sum += mok%10;
			mok /= 10;
		}
		if(n == sum){
			cout<<i<<endl;
			return 0;
		}
		
	}
	cout<<"0"<<endl;
	
	return 0;
}
