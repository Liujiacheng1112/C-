#include<cstdio>
using namespace std;

class Person{
public:
    int a;
    Person(){
        a = 12;
    }
    ~Person(){
        a = 1;
    }
};
int main(){
    Person p;
}