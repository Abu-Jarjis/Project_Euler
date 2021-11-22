#include<iostream>
using namespace std;

int sum_2_least(int numbers[5]);
int len(int numbers[5]);
int prime_factor_max(long long int main);

int main()
{
    long long int main = 20;
    cout << prime_factor_max(main);
    
}


int prime_factor_max(long long int main){
    for(long long i=2; i<main; i++)
    {
        cout<<i << "-------" <<main << "\n";
        while(main % i==0)
        {
            main /= i;

        }   

    }
