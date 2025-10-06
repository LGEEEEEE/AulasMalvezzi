#include <stdio.h>

int main() {
    float a, b, c, d;
    printf("Digite tres numeros em ordem crescente: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Digite o quarto numero: ");
    scanf("%f", &d);
    float arr[4] = {a,b,c,d}, temp;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]<arr[j]){
                temp=arr[i]; arr[i]=arr[j]; arr[j]=temp;
            }
        }
    }
    printf("Ordem decrescente: %.2f %.2f %.2f %.2f\n", arr[0], arr[1], arr[2], arr[3]);
    return 0;
}