#include<iostream>
using namespace std;

int main(void){
	int n;
	cin>>n;
	
	int sum, mok, i;
	for(i=1;i<n;i++){
		sum = i;  //� ���� �Ʒ��� �� �ڸ��� ���� �������Ƿ�.. sum = ����� �ʱ�ȭ�Ѵ�. 
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
