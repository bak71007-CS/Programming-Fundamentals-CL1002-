#include<stdio.h>

//To MegaJoules
float toMegajoules(float kwh){    
    return kwh * 3.6;
}

//To BTUs
float toBTU(float kwh){
    return kwh * 3412.14;
}

//To Calories (KCAL)
float toCalories(float kwh){ 
    return kwh * 859845;   
}

int main(){
    float KwH;
    float BTUs, MegaJoules, Kcal;

    printf("Enter Energy in KiloWatt: ");
    scanf("%f", &KwH);

    MegaJoules = toMegajoules(KwH);
    BTUs = toBTU(KwH);
    Kcal = toCalories(KwH);

    printf("\n-----Conversions-----");
    printf("\nMegaJoules = %.2f", MegaJoules);
    printf("\nBTUs = %.2f", BTUs);
    printf("\nKCAL = %.2f", Kcal);

    return 0;

}

