#include "stdio.h"
#include "math.h"
#define EXP1 "1.0 + 1.0/2.0 + 1.0/3.0 + ..."
#define EXP2 "1.0 - 1.0/2.0 + 1.0/3.0 + ..."

int main(){
    double num_now1, num_now2;
    double ans1, ans2;
    int count;
    int i;

    printf("for expression %s and %s, enter the number to count:",EXP1,EXP2);
    while(scanf("%d",&count) == 1){
        ans1=0., ans2=0.;
        for(i=1;i<count+1;i++){
            num_now1 = 1.0/i;
            num_now2 = pow(-1.,i+1)*num_now1;
            ans1 += num_now1;
            ans2 += num_now2;
        }
    printf("expression 1 equals: %lf\nexpression 2 equals: %lf\n",ans1,ans2);
    }

    return 0;
}