/*  Fazer um programa em C que calcule o volume V de uma esfera em função do raio R, conforme fórmula abaixo. 
    O raio deverá variar de 0 a 20cm de 0,5 em 0,5 cm.
                           V = 4/3piR^3
*/

#include<stdio.h>
#include<math.h>

int main (){

    float r, v;

    for (r = 0; r <= 20; r+=0.5){
        v = 4.0 / 3.0 * M_PI * pow(r, 3);
        printf("%10.2fcm  |  %10.2fcm3\n",r, v);
    }
}