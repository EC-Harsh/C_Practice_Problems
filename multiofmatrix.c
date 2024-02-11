#include<stdio.h>
int main(){
    int ra,ca,rb,cb;
    printf("Enter Number of rows and column on matrix A: ");
    scanf("%d %d",&ra,&ca);
    printf("Enter Number of rows and column on matrix B: ");
    scanf("%d %d",&rb,&cb);
    if(ca!=rb){
        printf("Matrices cannot be multiplied\n");
    }
    else{
      int a[ra][ca],b[rb][cb];
        int res[ra][cb];
        for(int i=1;i<=ra;i++){
            for(int j=1;j<=ca;j++){
                printf("Enter %d element of %d row of MATRIX A: ",j,i);
                scanf("%d",&a[i-1][j-1]);
            }
        }
        printf("\n");
        for(int i=1;i<=rb;i++){
            for(int j=1;j<=cb;j++){
                printf("Enter %d element of %d row of MATRIX B: ",j,i);
                scanf("%d",&b[i-1][j-1]);
            }
        }

        for(int i=0;i<ra;i++){// i acessing rows of matrix A
            for(int j=0;j<cb;j++){// j acessing coloumns of matrix B
                int sum=0;
                for(int k=0;k<ca;k++){// k acessing elements of ith row of A and elements of jth column of matrix B
                    sum+=a[i][k]*b[k][j];
                }
                res[i][j]=sum;
            }
        }
    printf("A:\n");
    for(int i=0;i<ra;i++){
        for(int j=0;j<ca;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("B:\n");
    for(int i=0;i<rb;i++){
        for(int j=0;j<cb;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }


    printf("Product: \n");
    for(int i=0;i<ra;i++){
        for(int j=0;j<cb;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
    
return 0;}