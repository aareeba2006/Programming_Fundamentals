#include<stdio.h>
int main() {
    //Temperature Conerter With Recomendatios
   float celsius;
    
    printf("Enter a temperature in celsius = ");
    scanf("%f" ,&celsius);

    //Formula
  float Fahrenheit;
    Fahrenheit = celsius * 9/5 +32 ;
    printf("Enter temperature in Fahrenheit = %.2f \n ", Fahrenheit );

    //Weather recomendations based on the temperature range
    float temperature = celsius;
    if (temperature >= 30){
        printf("It's hot!Stay hydrated and wear light clothes. \n");
  }  else if (temperature >= 20 && temperature ==29) {
    printf("Nice weather!Perfect for outdoor activities.\n");
  }   else if (temperature >= 10 && temperature == 19) {
    printf("Cool weather. Wear a light jacket.\n");
  }  else if (temperature >=0 && temperature == 9){
    printf("Cold!Wear warm clothes.\n");
  } else {
    printf("Freezing!Stay indoors and bundle up.\n");
  }

  return 0;
}