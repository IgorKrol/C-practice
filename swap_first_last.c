#include <stdio.h>

void swap_first_last(char arr[]){
    int size = length(arr);
    char copy[size];
    
    int start;
    start = revCopy(copy,arr,0 ,3);
    start = revCopy(copy,arr,start,2);
    start = revCopy(copy,arr,start,1);
        
    for (int i = 0; i < size; i++){
        arr[i] = copy[i];
    }
}
int revCopy(char des[], char src[], int sNum, int wNum){
    int k = 0;
    for (int i = 0; i < wNum - 1; i++){
        while(src[k]) k++;
        k++;
    }
    int j=sNum;
    while(src[k]){
        des[j] = src[k];
        j++;
        k++;
    }
    des[j++] = src[k];
    return j;
}
int length(char a[]){
    int i = 0;
    int stop = 2;
    while(stop){
        if (!a[i]) stop--;
        i++;
    }
    return i;
}
int main()
{
    char c[] = "HELLO\0MY\0WORLD\0";
    printf("%s \n",c);
    swap_first_last(c);
    printf("%s", c);
    return 0;
}