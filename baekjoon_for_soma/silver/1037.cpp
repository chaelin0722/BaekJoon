#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int tot;
	cin>>tot;
	int i;
	int* div = new int[tot];
	
	for(i=0;i<tot;i++)
		cin>> div[i];
	sort(div, div+tot);
	
	cout<< div[0]* div[tot-1]<<endl;
	
	return 0;
}
