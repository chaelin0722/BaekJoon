#include <iostream>
#include <cstring> //memset
#include <stdio.h> // printf, scanf

int cnt1 = 0; 
int cnt2 = 0;
char result;
using namespace std;

void init(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);	

}
int main() {
	init();
	char b;
    cin>> b;
    
    for(int i=0;i<sizeof(b);i++){
    	if(b == '(') cnt1++;
    	else cnt2++;
	} 
	
	//if(cnt1 == cnt2) result = "YES";
    //else result = "NO";
    cout<<sizeof(b);
    //cout<<result<<endl;
    
    return 0;
}
