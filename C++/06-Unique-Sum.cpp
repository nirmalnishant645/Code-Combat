#include<iostream>
using namespace std;
#include <stdio.h>
int main()
{
	int t;
	cin>>t;
	while(t>0){
	    int n, i;
    	cin>>n;         // Size of Array
    	int arr[n], arr2[n];
    
    	for(i=0; i<n; i++){         //intaking elements into array
        	cin>>arr[i];
    	}
	    
	    int pos=0;
	    for (i=0; i<n; i++){        // traversing array 
	        int flag=0;
	        for(int j=0; j<pos; j++){
	            if (arr[i]==arr2[j]){   //checking for duplicate element
	                flag=1;
	                break;
	        }   }
	        if(flag==0){
	            arr2[pos] = arr[i];     //copying non-duplicate element to second array
	            pos++;
	    }   }
	    
	    long int sum=0;
	    for (i=0; i<pos; i++){      // sum of element of second array
	        sum = sum + arr2[i];
	    }
    	cout<<sum<<endl;
		t--;
	}
    return 0;
}
