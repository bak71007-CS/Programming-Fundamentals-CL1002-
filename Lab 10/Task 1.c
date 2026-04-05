#include<stdio.h>

float triage(float severity, float age, float vitals){
    float wgh_score;

    wgh_score = (severity * 0.5) + (age * 0.3) + (vitals * 0.2);
    if(wgh_score > 7){
        printf("Immediate Attention Required");
    }
    else if(wgh_score > 4 && wgh_score < 7){
        printf("Moderate Priority");
    }
    else 
    printf("Can Wait");

    return wgh_score;
}

int main(){
    float sev, Age, vtls, wtg_scre;

    printf("Enter Severity (1-10): ");
    scanf("%f", &sev);
    printf("Enter Age Risk Factor (1-10): ");
    scanf("%f", &Age);
    printf("Enter Vital Stability (1-10): ");
    scanf("%f", &vtls);

    triage(sev, Age, vtls);

    return 0;
    
}