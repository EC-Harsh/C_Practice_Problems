# include <stdio.h>

int main() {
    int n;
    printf("Enter Length of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter Element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    int large=a[0];
    for(int i=1;i<n;i++){
        if(large<a[i]){
            large=a[i];
        }
        
    }
    printf("Largest element in the array is : %d\n",large);
    return 0 ;
}