#include<bits/stdc++.h>

using namespace std;
class A{

    public:
        int i=25;
     A(){
            cout<<"Object Constructed"<<endl;
        }
    ~A(){
        cout<<"Object Destroyed"<<endl;
    }
    void print(A a){
        cout<<"Printing i="<<a.i<<endl;
    }
    A ( A& a){
        cout<<"Copy constructor\n";
        this->i = a.i;
    }

};



int main(){

    A a;
    a.i=50;
    a.print(a);




return 0;
}