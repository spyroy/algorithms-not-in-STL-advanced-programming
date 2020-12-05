#include <iostream> 
#include <math.h> 

/* template fibonacci function.
begin = start of iterator.
end = end of iterator.
function returns true if the given input is
sub set of the fibonacci set, false otherwise.
*/
template <typename T>
bool Fib(T begin, T end){
    for(auto it = begin; it != end; ++it){
        int x = 5*(*it)*(*it) + 4;
        int x2 = 5*(*it)*(*it) - 4;
        int square = std::sqrt(5*(*it)*(*it) + 4);
        int square2 = std::sqrt(5*(*it)*(*it) - 4);
        if(square*square != x && square2*square2 != x2){
            return false;
        }  
    }
    
    return true;
}

/*template Transpose function.
begin = start of iterator.
end = end of iterator.
function returns begin if the set size is even
and transposes every adjecent elements,
otherwise returns end.
*/
template <typename T>
T Transpose(T begin, T end){
    size_t count = 0;
    
    for(auto it = begin; it != end;++it){
        count++;
    }

    if(count%2 == 1){
        return begin;
    }

    for(auto it = begin; it != end;++it){
        T pointer = it++;
        auto t = *it;
        *it = *pointer;
        *pointer = t;
    }

    return end;
}

/*template Transform function.
begin = start of first iterator.
end = end of first iterator.
b = start of second iterator.
Op = function.
function returns begin of second iterator
and the second iterator contains the result of the 
function - Op on every adjecent elements.
*/
template <typename T1 ,typename T2, typename op>
T2 Transform2(T1 begin, T1 end, T2 b, op Op){
    for(auto it = begin; it != end;++it){
        T1 pointer = it++;
        if(it == end){
            break;
        }
        *b = Op(*pointer,*it);
        b++;
    }
    return b;
}

