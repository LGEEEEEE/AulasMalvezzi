#include <stdio.h>

int main() {
    int I; float A,B,C;
    printf("Digite I (1,2 ou 3): ");
    scanf("%d",&I);
    printf("Digite A, B, C: ");
    scanf("%f %f %f",&A,&B,&C);

    if(I==1){
        if(A<B && A<C) printf("%.2f %.2f %.2f\n",A,(B<C?B:C),(B>C?B:C));
        else if(B<A && B<C) printf("%.2f %.2f %.2f\n",B,(A<C?A:C),(A>C?A:C));
        else printf("%.2f %.2f %.2f\n",C,(A<B?A:B),(A>B?A:B));
    } else if(I==2){
        if(A>B && A>C) printf("%.2f %.2f %.2f\n",A,(B>C?B:C),(B<C?B:C));
        else if(B>A && B>C) printf("%.2f %.2f %.2f\n",B,(A>C?A:C),(A<C?A:C));
        else printf("%.2f %.2f %.2f\n",C,(A>B?A:B),(A<B?A:B));
    } else if(I==3){
        printf("%.2f %.2f %.2f\n",C,B,A);
    }
    return 0;
}