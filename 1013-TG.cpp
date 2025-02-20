#include <stdio.h>
#include <cmath>
using namespace std; 
int MaiorAB(int a, int b){
    int d;
    d=((a+b)+abs(a-b))/2;
    return d;  
}
int main() {
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a,b,c;
    cin>>a>>b>>c;
    int ab=MaiorAB(a,b);
    int bc=MaiorAB(b,c);
    int ac=MaiorAB(a,c);
    int[3] comp={ab,bc,ac};
    int[3] nums={a,b,c};
    int maior=0;
    for(int i=0;i<=2;i++){
        if(comp[maior]<comp[i]){
            maior=i;
        }
    }
    cout<<nums[maior]<<" eh o maior";
 
    return 0;
}
