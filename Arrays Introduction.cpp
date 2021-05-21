#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d ",&array[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",array[i]);
    }
    
       
    return 0;
}
