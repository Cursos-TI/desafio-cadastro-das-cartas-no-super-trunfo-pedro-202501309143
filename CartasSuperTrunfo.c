#include <stdio.h>

int main() {
    char state1, state2;
    char code1[4], code2[4];
    char city1[100], city2[100];
    int population1, population2;
    float area1, area2;
    float gdp1, gdp2;
    int touristSpots1, touristSpots2;
    
    float density1, density2;
    float gdpPerCapita1, gdpPerCapita2;

    // Input for card 1
    printf("Enter the details for Card 1:\n");
    printf("State: ");
    scanf(" %c", &state1);
    printf("Card Code: ");
    scanf("%s", code1);
    printf("City Name: ");
    scanf(" %[^"]", city1);
    printf("Population: ");
    scanf("%d", &population1);
    printf("Area (in km²): ");
    scanf("%f", &area1);
    printf("GDP (in billions of reais): ");
    scanf("%f", &gdp1);
    printf("Number of Tourist Spots: ");
    scanf("%d", &touristSpots1);

    // Input for card 2
    printf("\nEnter the details for Card 2:\n");
    printf("State: ");
    scanf(" %c", &state2);
    printf("Card Code: ");
    scanf("%s", code2);
    printf("City Name: ");
    scanf(" %[^"]", city2);
    printf("Population: ");
    scanf("%d", &population2);
    printf("Area (in km²): ");
    scanf("%f", &area2);
    printf("GDP (in billions of reais): ");
    scanf("%f", &gdp2);
    printf("Number of Tourist Spots: ");
    scanf("%d", &touristSpots2);
    
    // Calculating density and GDP per capita
    density1 = population1 / area1;
    density2 = population2 / area2;
    gdpPerCapita1 = gdp1 * 1000000000 / population1; // Convert billions to reais
    gdpPerCapita2 = gdp2 * 1000000000 / population2;

    // Displaying the data
    printf("\nCard 1:\n");
    printf("State: %c\n", state1);
    printf("Code: %s\n", code1);
    printf("City Name: %s\n", city1);
    printf("Population: %d\n", population1);
    printf("Area: %.2f km²\n", area1);
    printf("GDP: %.2f billion reais\n", gdp1);
    printf("Number of Tourist Spots: %d\n", touristSpots1);
    printf("Density: %.2f hab/km²\n", density1);
    printf("GDP per Capita: %.2f reais\n", gdpPerCapita1);

    printf("\nCard 2:\n");
    printf("State: %c\n", state2);
    printf("Code: %s\n", code2);
    printf("City Name: %s\n", city2);
    printf("Population: %d\n", population2);
    printf("Area: %.2f km²\n", area2);
    printf("GDP: %.2f billion reais\n", gdp2);
    printf("Number of Tourist Spots: %d\n", touristSpots2);
    printf("Density: %.2f hab/km²\n", density2);
    printf("GDP per Capita: %.2f reais\n", gdpPerCapita2);

    return 0;
}
