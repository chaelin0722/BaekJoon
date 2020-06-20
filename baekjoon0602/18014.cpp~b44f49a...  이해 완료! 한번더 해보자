#include<iostream>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b){
	if(a.first < b.first) return true;
	return false;
	
}

int main(void){
	ios::sync_with_stdio(false); //cin, cout 은 printf, scanf 보다 느린데 좀더 가속화해준다.. 정공법은아님 
	vector< pair<int, string> > vec; 
	int n;
	cin>>n;
	vec.resize(n); //resize() 함수 
	
	int i;
	for(i=0;i<n;i++){
		cin>> vec[i].first >> vec[i].second;
		
	}
	stable_sort(vec.begin(), vec.end(), comp);
	
	for(i=0;i<n;i++){
		cout<<vec[i].first<<" "<<vec[i].second<<endl;
	}
	
	
	return 0;
}

/* vector 함수 
reserve()는 공간이 예약된다.

배열을 만들때 int array[크기] 하는것과 같다.
만약 앞으로 데이터가 자주 추가된다면 벡터가 가득 찼을때 스스로 공간을 늘리지 않기 때문에 
성능을 더 향상할 수 있다.
만약 전부 찬상태에서 또 집어넣으면 늘어난다.


resize()는 공간 예약 + 안의 모든 공간을 특정한 값으로 채운다.

변수를 만들때 쓰레기값이 없게 하기위해 NULL로 초기화 하는것과 비슷하다. 
ex) int array[10] = {0 ,}
현재보다 큰 공간을 예약하면 그만큼 더 집어넣는다. 
ex) 5개가 들어있는 상태에서 resize(10)하면 5개가 더들어감 -> 5 + 5 = 10
용량이 딱 정해져 있다. 더 집어넣으면 버려진다...  


stable_sort와 sort의 다른 점은 정렬하는 원소 값이 같은 경우이다..
 
*/
