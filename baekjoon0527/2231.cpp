#include<iostream>
using namespace std;

int main(void){
	int n;
	cin>>n;
	
	int arr[3] = {0};
	int num, i, mok, result =10000;
	num = n-1;
	
	while(num--){	
		mok = num;
	
		for(i=0;i<3;i++){
			arr[i] = mok%10;
			mok = mok/10;
		}
		
		if(num+arr[0]+arr[1]+arr[2]== n && num>result) {
			cout<<num<<endl;
			return 0;
		}else if(num+arr[0]+arr[1]+arr[2]== n && num<result){
			
			num = result;
		}	
		
	}
	cout<<"0\n"<<endl;
	
	return 0;
}
