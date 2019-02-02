#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n); // Taking the number of buildings
    int a[n],i,secondL,larg;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]); // Taking Input
    larg =a[0];
    secondL = -1;
    for(i=1;i<n;i++){ // Finding the Second Largest
        if(a[i]>larg){
            secondL= larg;
            larg = a[i];
        }
        else if(a[i]>secondL && a[i] != larg)
            secondL = a[i];
    }
    if(secondL == -1) // If there was no second largest number in the array
        printf("-1");
    else{
        for(i=0;i<n;i++){
            if(a[i]==secondL){
                printf("%d ",i+1); // Print the result if there exist a second largest
            }
        }
    }
    return 0;
}