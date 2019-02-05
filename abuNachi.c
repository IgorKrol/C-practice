//gcc 5.4.0

#include  <stdio.h>
#define N 10
#define ASCII 48

int isAbu(char b[]){
    int i = 0;
    //get b size
    while(b[i]!='\0'){
        i++;
    }
    //init a with ints
    int a[i];
    i=0;
    //convert char numbers into int numbers
    while(b[i]!='\0'){
        a[i] = b[i] - ASCII;
        i++;
    }
    //init f1,f2,f3,b3
    int f1 = a[0];
    int f2 = a[1];
    int f3 = f1+f2;
    int b3 = 0;
    i = 2;
    //while in array
    while(i < N){
        //build b3
        while(f3 > b3 && i < N){
            b3 = b3*10 + a[i];
            i++;
        }
        //if b3 < f3 means this wont be abunachi numbers
        if (f3 < b3) {
            
            return 0;
        }
        //if they are equal, shift the numbers
        if (f3 == b3){
            f1 = f2;
            f2 = f3;
            f3 = f1 + f2;
            b3 = 0;
        }
    }    
return 1;
}
int main(void)
{
    char a[] = "1910192949";
    isAbu(a) == 0? printf("false"):printf("true");
    return 0;
}