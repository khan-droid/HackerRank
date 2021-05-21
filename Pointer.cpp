#include <stdio.h>

void update(int *a,int *b) {
    int x,y;
    x=*a;
    y=*b;
    *a=x+y;
    int d;
    d=x-y;
    if(d<0){
        *b=-d;
    }
    else{
        *b=d;
    }    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
