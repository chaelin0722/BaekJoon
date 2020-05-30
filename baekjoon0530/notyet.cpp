#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> x;
vector<int> y;

int main(){
	int n, i,j,x_value,y_value;
	cin>>n;
int y1;
	for(i=0;i<n;i++){		
		cin>>x_value>>y_value;
		x.push_back(x_value);
		y.push_back(y_value);
	}
	sort(x.begin(), x.end());
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(x[i]==x[j]) {
				y = y+i-1;
				y1 = y+i;
			}sort(y, y1);
		}		
		cout<<x[i]<<"\t"<<y[i]<<endl;
		
		
	}
	
	
	return 0;
}
