#include<iostream>
using namespace std;

int is_palindrome(int num);

int main(){
    int max = 0;
    for ( int i = 999; i >= 100; i--){
        for ( int j = 999; j >= 100; j--){
            int temp = i*j;
            if (max < temp && is_palindrome(temp)){
                max = temp;
            }
        }
        
    }
    cout << max;
}

int is_palindrome(int num){
    int temp = 0;
    int k = 100;
    for(int i = num; i > 0; i /= 10){
        temp = temp*10 + i%10;
    }
    return temp == num;
    
}

