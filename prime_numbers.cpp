
#include <iostream>

int main(){
    int N=25;
    int sieve[N];
    for(int i = 2; i*i < N; ++i)
    {
        if (sieve[i] == 0)
        {
            for(int k = i*i; k < N; k += i)
            {
                sieve[k] = 1;
            }
        }
    }
    for(int i = 0; i < N; ++i)
    {
        std::cout<<i;
    }
    std::cout<<"\n";
    for(int i = 0; i < N; ++i)
    {
        std::cout<<sieve[i];
    }
    std::cout<<"\n";

    std::cout<<"Prime numbers:\n";

    for(int i = 2; i < N; ++i)
    {
        if (sieve[i] == 0)
        {
            std::cout<<i;
        }
    }
    std::cout<<"\n";

   return 0;
} 