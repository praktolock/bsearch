#include <stdio.h>

int bsearch(int*arr, int sz, int n)
{
    int counter=0;
    while(counter<sz)
    {
        if(arr[counter]>n)return(counter);
        counter++;
    }
        return(-1);
}

int main()
{
    int arr[]={1,4,6,6,9,12,16};
    
    int index=bsearch(arr, sizeof(arr)/sizeof(int), 14);
    if(index==-1)
        printf("there is no suitable number in array :-(\n");
    else
        printf("%d\n", index);
    return 0;
}
