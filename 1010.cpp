#include<stdio.h>
//from 블로그.. mCn 의 정석 
long long comb(int m, int n){
	
	long long c=1;
	if(2*n > m) n= m-n;
	for(int i=1; i<=n; i++){
		c = c*(m--)/i; //nCi
	}
	return c;

}
// algorithm that i thought
/* so many errors.. you should think more 
long long comb2(int m, int n){
	
	int sub;
	long long result=1;
	int test[] ={0};
	sub =m-n;
	
	if(sub == 0) return 1;
	if(n == 1) return m;
	else {
		
		for(int i=0; i<sub;i++){
			test[i] = 0;
		}
		for(int i=0; i<sub; i++){
			test[i] = m--;
			printf("for = %d\n",test[i]);
		}
		for(int i=0; i<sub; i++){
			result *= test[i];
			printf("multiple = %d\n",result);
		}
		return result;
	}
}
*/
int main(void){
	int t,n,m;

	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &n, &m);
		printf("%lld\n", comb(m,n));
	}
	return 0;
}
