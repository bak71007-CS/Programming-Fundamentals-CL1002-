#include <stdio.h>

int main() {
    void *sensor;  

    //Vibration sensor 
    int vibrations = 847;
    sensor = &vibrations;  
    printf("Vibrations: %d\n", *(int *)sensor);
    printf("Pointer address: %p\n\n", (void *)sensor);

    //Temperature sensor
    float temperature = 73.6;
    sensor = &temperature;  
    printf("Temperature: %.2fC\n", *(float *)sensor);
    printf("Pointer address: %p\n\n", (void *)sensor);

    //Status sensor 
    char status = 'W';
    sensor = &status;  
    printf("Status: %c\n", *(char *)sensor);
    printf("Pointer address: %p\n\n", (void *)sensor);

    //Alerta
    if (*(char *)sensor == 'N') {
        printf("All normal.\n");
    } else if (*(char *)sensor == 'W') {
        printf("Warning! Check systems.\n");
    } else if (*(char *)sensor == 'C') {
        printf("Critical! Act immediately!\n");
    }

    return 0;
}