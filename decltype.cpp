#include<bits/stdc++.h>

using namespace std;

auto fun(bool f) ->decltype(10)
{
    return  (f?'A':47);
}

int main(){

    cout<<fun(1);

return 0;
}