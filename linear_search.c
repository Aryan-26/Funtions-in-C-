#include<stdio.h>

    int main(){
    int i, key, arr[50], n, flag;
    flag=0;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted array: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of elements to be searched: ");
    scanf("%d", &key);
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            printf("Found the element %d at position %d", key, i+1);
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("Element not found");
    } 
    return 0;
}