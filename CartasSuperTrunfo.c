#include <stdio.h>

int main() {
    char state1, state2;
    char code1[4], code2[4];
    char city1[100], city2[100];
    unsigned long int population1, population2;
    float area1, area2, gdp1, gdp2;
    int touristSpots1, touristSpots2;

    // Input for card 1
    printf("Enter the details for Card 1:\n");
    printf("State: ");
    scanf(" %c", &state1);
    printf("Card Code: ");
    scanf("%s", code1);
    printf("City Name: ");
    scanf(" %[^\n]", city1);
    printf("Population: ");
    scanf("%lu", &population1);
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
    scanf(" %[^\n]", city2);
    printf("Population: ");
    scanf("%lu", &population2);
    printf("Area (in km²): ");
    scanf("%f", &area2);
    printf("GDP (in billions of reais): ");
    scanf("%f", &gdp2);
    printf("Number of Tourist Spots: ");
    scanf("%d", &touristSpots2);

    // Convert GDP from billions to reais
    gdp1 *= 1000000000;
    gdp2 *= 1000000000;

    // Calculations
    float density1 = population1 / area1;
    float density2 = population2 / area2;
    float gdpPerCapita1 = gdp1 / population1;
    float gdpPerCapita2 = gdp2 / population2;

    // Super Power Calculation
    float superPower1 = population1 + area1 + gdp1 + touristSpots1 + gdpPerCapita1 + (1 / density1);
    float superPower2 = population2 + area2 + gdp2 + touristSpots2 + gdpPerCapita2 + (1 / density2);

    // Displaying the data
    printf("\nCard 1:\n");
    printf("State: %c\n", state1);
    printf("Code: %s\n", code1);
    printf("City Name: %s\n", city1);
    printf("Population: %lu\n", population1);
    printf("Area: %.2f km²\n", area1);
    printf("GDP: %.2f billion reais\n", gdp1 / 1000000000);
    printf("Number of Tourist Spots: %d\n", touristSpots1);
    printf("Density: %.2f hab/km²\n", density1);
    printf("GDP per Capita: %.2f reais\n", gdpPerCapita1);
    printf("Super Power: %.2f\n", superPower1);

    printf("\nCard 2:\n");
    printf("State: %c\n", state2);
    printf("Code: %s\n", code2);
    printf("City Name: %s\n", city2);
    printf("Population: %lu\n", population2);
    printf("Area: %.2f km²\n", area2);
    printf("GDP: %.2f billion reais\n", gdp2 / 1000000000);
    printf("Number of Tourist Spots: %d\n", touristSpots2);
    printf("Density: %.2f hab/km²\n", density2);
    printf("GDP per Capita: %.2f reais\n", gdpPerCapita2);
    printf("Super Power: %.2f\n", superPower2);

    // Comparison logic
    int choice = 1;  // Change this value to compare different attributes (1: Population, 2: Area, 3: GDP, 4: Density, 5: GDP per Capita, 6: Super Power)

    printf("\nCard Comparison:\n");

    if (choice == 1) {
        printf("Comparing Population:\n");
        printf("Card 1: %lu\n", population1);
        printf("Card 2: %lu\n", population2);
        printf("Winner: %s\n", (population1 > population2) ? "Card 1" : "Card 2");
    } else if (choice == 2) {
        printf("Comparing Area:\n");
        printf("Card 1: %.2f km²\n", area1);
        printf("Card 2: %.2f km²\n", area2);
        printf("Winner: %s\n", (area1 > area2) ? "Card 1" : "Card 2");
    } else if (choice == 3) {
        printf("Comparing GDP:\n");
        printf("Card 1: %.2f billion reais\n", gdp1 / 1000000000);
        printf("Card 2: %.2f billion reais\n", gdp2 / 1000000000);
        printf("Winner: %s\n", (gdp1 > gdp2) ? "Card 1" : "Card 2");
    } else if (choice == 4) {
        printf("Comparing Density (Lower is Better):\n");
        printf("Card 1: %.2f hab/km²\n", density1);
        printf("Card 2: %.2f hab/km²\n", density2);
        printf("Winner: %s\n", (density1 < density2) ? "Card 1" : "Card 2");
    } else if (choice == 5) {
        printf("Comparing GDP per Capita:\n");
        printf("Card 1: %.2f reais\n", gdpPerCapita1);
        printf("Card 2: %.2f reais\n", gdpPerCapita2);
        printf("Winner: %s\n", (gdpPerCapita1 > gdpPerCapita2) ? "Card 1" : "Card 2");
    } else if (choice == 6) {
        printf("Comparing Super Power:\n");
        printf("Card 1: %.2f\n", superPower1);
        printf("Card 2: %.2f\n", superPower2);
        printf("Winner: %s\n", (superPower1 > superPower2) ? "Card 1" : "Card 2");
    } else {
        printf("Invalid choice! Please choose a number from 1 to 6.\n");
    }

    return 0;
}
