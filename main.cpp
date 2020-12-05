#include "alg.h"
#include <iostream>
#include <vector>
#include <list>
#include <set>

int main(int argc, char **argv){
    std::list<int> l = {13,21,8,5};
    bool b = Fib(l.begin(), l.end());
    std::cout << b << std::endl;

    std::list<int> v = {1,2,3,4,5,6,7,8};
    auto i = Transpose(v.begin(), v.end());
    if(i == v.end()){
        std::cout << "its the end " << std::endl;
    }
    else
    {
        std::cout << "its the begin " << *i << std::endl;
    }
    for(int i : v){
        std::cout << i << std::endl;
    }

    std::vector<int> vec = {1,2,3,10,8,6,10,20,25,30,50,70};
    std::vector<int> vec2 (10);
    auto a = Transform2(vec.begin(),vec.end(),vec2.begin(),[](const int x, const int y){return x-y;});
    if(a == vec2.begin()+2){
        std::cout << "its the right place " << std::endl;
    }
    for(int i : vec2){
        std::cout << i << std::endl;
    }
}