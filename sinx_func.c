#include<stdio.h>
#include<math.h>

double fact(int x){

    int i;
    double sonuc=1.0;

    if(x>0){

        for(i=1;i<=x;i++){

        sonuc*=i;
        }
    }
    else sonuc=1.0;

    return sonuc;
}

int main(){

    int k=0,i;

    double sinx=0.0,rad=0.0;
    double pi=3.14159,x;

    printf("\nsinx fonksiyonunda x'i giriniz:");
    scanf("%lf",&x);

    rad=(pi*x)/180;

    for(i=1;i<=100;i++){

        
        if(i%2==1){
                       
            sinx+=pow(-1,k)*(pow(rad,i)/fact(i));

            k++;
        }
      
    }

    printf("\nsin%.2lf = %lf \n\n",x,sinx);//sin45.00 = 0.7071

    return 0;
}
