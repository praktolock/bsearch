#include <stdio.h>

int bsearch(int*arr, int sz, int n)
{
    int counter=0;
    while(counter<sz)
    {
        if(arr[counter]>n) break;
        counter++;
    }
    if(counter==sz)
        return(-1);
    else
        return(counter);
}

int main()
{
    int arr[]={1,4,6,6,9,12,16};
    
    printf("%d\n", bsearch(arr, 7, 7));

    return 0;
}
