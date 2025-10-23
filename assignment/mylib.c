#include "mylib.h"
    int reverseDigits(int n){
        int rev = 0, temp = n,rem;
        while(n>0){
            rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }
        return rev;
    
    }

    int isArmstrong(int num){
        int s = 0,count = 0, temp, flag, rem = 0;
        temp = num;
        flag = num;
        while(temp>0){
            temp = temp / 10;
            count++;
        }
        while(flag>0){
            rem = flag % 10;
            int p = 1;
            for(int i=0 ; i < count ; i++ ){
                p = p * rem;
            }
            s = s + p;
            flag = flag / 10;
        }
        if(s == num){
            return 1;
        }
        return 0;

    }
    int isAdams(int num){
        int rev,sq,resq;
        rev = reverseDigits(num);
        sq = num * num;
        resq = rev * rev;
        return reverseDigits(resq) == sq;
    }
    int isPrime(int num){
        if(num < 2){
            return 0;
        }
        for(int i=2; i<= num / 2; i++){
            if(num % i == 0){
                return 0;
            }   
        }
        return 1;
    }
    int isPrimePalindrome(int num){
        if(isPrime(num) && reverseDigits(num) == num){
            return 1;
        }
        return 0;
    }