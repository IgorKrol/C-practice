//gcc 5.4.0

#include  <stdio.h>
#include <string.h>
#include <stdlib.h>

char* num2str(int a, char* str){
    //init
    char stringNumber [2];
    char stringDecimal[33] = "1";
    
    while(a!=0){
    //stringnumber:
    stringNumber[0] = a%10 + 48;
    //build rows in string "#decimalPlace = #numberInThisPlace
    strcat(str, stringDecimal);
    strcat(str, "=");
    strcat(str, stringNumber);
    strcat(str, "\n");
    
    //shift number and place
    a = a/10;
    strcat(stringDecimal, "0");
    }


return str;
}
int main(void)
{
    int a = 1993;
    char str[2000] = "";
    num2str(a,str);
    
    printf("%s\n", str);
    return 0;
}