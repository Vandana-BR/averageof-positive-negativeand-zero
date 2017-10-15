#include <math.h>
#include <stdio.h>


int main(){
    int n;
    float even=0,odd=0,zero=0;
    scanf("%d",&n);
    int arr[n];
    int arr_i;
    for(arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(arr_i = 0; arr_i < n; arr_i++){
       if(arr[arr_i]>0)
       {
           even++;
       }
        else if(arr[arr_i]<0)
        {
            odd++;
        }
        else if(arr[arr_i]==0)
        {
            zero++;
        }
    }
    printf("%f\n %f\n %f\n",(float)(even/n),(float)(odd/n),(float)(zero/n));
    return 0;
}
