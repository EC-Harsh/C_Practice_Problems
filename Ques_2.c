# include <stdio.h>
int main() {
    int n,sum=0;
    printf("Enter the natural number upto which you want sum of: ");
    scanf("%d",&n);

    //Method 1 have time complexity O(n) ;
    for(int i=1;i<=n;i++){
        sum+=i;
    }

    printf("(Using method 1) The sum of natural numbers upto %d is: %d",n,sum);

    //Method 2 have time complexity O(1);
     sum=(n*(n+1))/2;
     printf("\n(Using method 2) The sum of natural numbers upto %d is: %d\n",n,sum);

return 0 ;
}