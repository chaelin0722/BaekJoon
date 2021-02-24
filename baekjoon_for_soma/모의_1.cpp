#include <iostream>
#include <cstring>
#include <stdio.h> 
#include <string>
#define MAX 50

int cnt1 = 0; 
int cnt2 = 0;
char b[MAX];
using namespace std;

void init(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);	

}
int main() {
	init();
    cin>> b;
    
	string result;
    cout<<strlen(b);
	/*
	for(int i=0;i<strlen(b);i++){
    	if(b[i] == '(') cnt1++;
    	else cnt2++;
	} 
	
	if(cnt1 == cnt2) result = "YES";
    else result = "NO";
    
	cout<<result<<endl;
    */
    return 0;
}
