#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

struct Person{
    int age;
    string name;
    int join;
};

bool cmp(Person u, Person v){
    if(u.age < v.age)
        return true;
    else if (u.age == v.age)
        return u.join < v.join;
    else
        return false;
}

int main()
{
    int T;
    cin >> T;

    vector<Person> vec(T);

    for (int i = 0; i < T; i++){
        cin >> vec[i].age >> vec[i].name;
        vec[i].join = i;
    }

    sort(vec.begin(), vec.end(), cmp);

    for (int i = 0; i < T; i++)
        cout << vec[i].age << " " << vec[i].name << "\n";
}
