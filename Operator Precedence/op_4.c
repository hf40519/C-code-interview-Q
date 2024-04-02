#include <stdio.h>
int main(void)
{
    // ---- 1 ---- //
    int arr[] = {10, 20};
    int *p = arr;
    ++*p; // ++(*p)
    // prefix、dereference優先度一樣 (associativity右至左)
    printf("arr[0] = %d, arr[1] = %d, *p = %d \n",
           arr[0], arr[1], *p); // 11, 20, 11
    // ---- 2 ---- //
    int arr2[] = {10, 20};
    int *p2 = arr2;
    *p2++; // *(p++)
    // postfix優先度高
    printf("arr[0] = %d, arr[1] = %d, *p = %d \n",
           arr2[0], arr2[1], *p2); // 10, 20, 20
    // ---- 3 ---- //
    int arr3[] = {10, 20};
    int *p3 = arr3;
    *++p3; // *(++p)
    // prefix、dereference優先度一樣 (associativity右至左)
    printf("arr[0] = %d, arr[1] = %d, *p = %d \n",
           arr3[0], arr3[1], *p3); // 10, 20, 20
    // ---- 4 ---- //
    char str[] = "geeksforgeeks";
    char *ptr = str;

    while (*ptr != '\0')
        ++*ptr++; // ++(*(ptr++)) > postfix 先return再加1
    // []為改變val, ()為pointer
    // [h](e)eksforgeeks h[f](e)ksforgeeks hf[f](k)sforgeeks hff[l](s)forgeeks hffl[t](f)orgeeks hfflt[g](o)rgeeks
    // hffltg[p](r)geeks hffltgp[s](g)eeks hffltgps[h](e)eks hffltgpsh[f](e)ks hffltgpshf[f](k)s hffltgpshff[l](s)
    // hffltgpshffl[t](\0) > '\0' 結束
    printf("%s %s", str, ptr); // hffltgpshfflt  ptr='\0'

    return 0;
}