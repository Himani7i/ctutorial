# include<stdio.h>

float convertTemp(float celsius);

int main() { 
    float far = convertTemp(32);
    printf("far : %f", far);
    return 0;
}

float convertTemp( float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;

}



