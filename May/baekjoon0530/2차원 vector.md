## 2차원 vector

vector<vector<int>> 를 이용해 2차원 벡터를 만든다.



#### 공간 할당

vector< vector<int> > 자료형의 인자를 (행 크기, vector<int>(열 크기)) 이렇게 넣으면 된다.



~~~c++
vector<vector<int>> temp(행크기, vector<int>(열 크기));

vector<vector<int>> temp(5, vector<int>(5,0)); (가로5, 세로5)
~~~

temp에 (5,5) 할당 시

0 0 0 0 0

0 0 0 0 0

0 0 0 0 0

0 0 0 0 0

로 초기화 된다. 



데이터 참조방법

~~~c++
temp[m][n] 사용!

temp[0].push_back(1)를 할 경우
~~~



0 0 0 0 0 1

0 0 0 0 0

0 0 0 0 0

0 0 0 0 0

이 된다. 