/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
Full Name  : Utsav Gautam
Student ID#: 157891219
Email      : ugautam4@myseneca.ca
Section    : ZCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
       // You will need this when converting from grams to pounds (lbs)
       const double GRAMS_IN_LBS = 453.5924;

       // declaring variables

       // variables for input from the user
       char oneCoffeeType, twoCoffeeType, threeCoffeeType;
       int oneBagWeight, twoBagWeight, threeBagWeight;
       char oneServeType, twoServeType, threeServeType;
       char strengthOfCoffee, likeCream;
       int numOfServings;

       // displaying the output to the user
       printf("Take a Break - Coffee Shop\n");
       printf("==========================\n\n");

       printf("Enter the coffee product information being sold today...\n\n");
       printf("COFFEE-1...\n");
       printf("Type ([L]ight,[M]edium,[R]ich): ");
       scanf(" %c", &oneCoffeeType);
       printf("Bag weight (g): ");
       scanf(" %d", &oneBagWeight);
       printf("Best served with cream ([Y]es,[N]o): ");
       scanf(" %c", &oneServeType);
       printf("\n");

       printf("COFFEE-2...\n");
       printf("Type ([L]ight,[M]edium,[R]ich): ");
       scanf(" %c", &twoCoffeeType);
       printf("Bag weight (g): ");
       scanf(" %d", &twoBagWeight);
       printf("Best served with cream ([Y]es,[N]o): ");
       scanf(" %c", &twoServeType);
       printf("\n");

       printf("COFFEE-3...\n");
       printf("Type ([L]ight,[M]edium,[R]ich): ");
       scanf(" %c", &threeCoffeeType);
       printf("Bag weight (g): ");
       scanf("%d", &threeBagWeight);
       printf("Best served with cream ([Y]es,[N]o): ");
       scanf(" %c", &threeServeType);
       printf("\n");

       // displaying in tabular format
       printf("---+------------------------+---------------+-------+\n");
       printf("   |    Coffee              |   Packaged    | Best  |\n");
       printf("   |     Type               |  Bag Weight   | Served|\n");
       printf("   +------------------------+---------------+ With  |\n");
       printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
       printf("---+------------------------+---------------+-------|\n");
       printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
              oneCoffeeType == 'L' || oneCoffeeType == 'l', (oneCoffeeType == 'm') || (oneCoffeeType == 'M'), (oneCoffeeType == 'R') || (oneCoffeeType == 'r'),
              oneBagWeight, oneBagWeight / GRAMS_IN_LBS, (oneServeType == 'Y') || (oneServeType == 'y'));

       printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (twoCoffeeType == 'L') || (twoCoffeeType == 'l'), (twoCoffeeType == 'M') || (twoCoffeeType == 'm'),
              (twoCoffeeType == 'R') || (twoCoffeeType == 'r'), twoBagWeight, twoBagWeight / GRAMS_IN_LBS, (twoServeType == 'Y') || (twoServeType == 'y'));

       printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (threeCoffeeType == 'L') || (threeCoffeeType == 'l'), (threeCoffeeType == 'M') || (threeCoffeeType == 'm'),
              (threeCoffeeType == 'R') || (threeCoffeeType == 'r'), threeBagWeight, threeBagWeight / GRAMS_IN_LBS, (threeServeType == 'Y') || (threeServeType == 'y'));
       printf("\n\n");

       printf("Enter how you like your coffee...\n\n");

       printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
       scanf(" %c", &strengthOfCoffee);
       printf("Do you like your coffee with cream ([Y]es,[N]o): ");
       scanf(" %c", &likeCream);
       printf("Typical number of daily servings: ");
       scanf("%d", &numOfServings);
       printf("\n");

       printf("The below table shows how your preferences align to the available products:\n\n");

       printf("--------------------+-------------+-------+\n");
       printf("  |     Coffee      |  Packaged   |  With |\n");
       printf("ID|      Type       | Bag Weight  |  Cream|\n");
       printf("--+-----------------+-------------+-------+\n");
       printf(" 1|       %d         |      %d      |   %d   |\n", (strengthOfCoffee == 'L') || (strengthOfCoffee == 'l'), numOfServings >= 1 && numOfServings <= 4, likeCream != 'n' || likeCream != 'N');

       printf(" 2|       %d         |      %d      |   %d   |\n", (strengthOfCoffee == 'M') || (strengthOfCoffee == 'm'), numOfServings >= 5 && numOfServings <= 9, likeCream == 'n' || likeCream == 'N');

       printf(" 3|       %d         |      %d      |   %d   |\n\n", (strengthOfCoffee == 'R') || (strengthOfCoffee == 'r'), numOfServings >= 10, likeCream == 'n' || likeCream == 'N');

       printf("Enter how you like your coffee...\n\n");

       printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
       scanf(" %c", &strengthOfCoffee);
       printf("Do you like your coffee with cream ([Y]es,[N]o): ");
       scanf(" %c", &likeCream);
       printf("Typical number of daily servings: ");
       scanf("%d", &numOfServings);
       printf("\n");

       printf("--------------------+-------------+-------+\n");
       printf("  |     Coffee      |  Packaged   |  With |\n");
       printf("ID|      Type       | Bag Weight  |  Cream|\n");
       printf("--+-----------------+-------------+-------+\n");

       printf(" 1|       %d         |      %d      |   %d   |\n", (strengthOfCoffee == 'L') || (strengthOfCoffee == 'l'), numOfServings >= 1 && numOfServings <= 4, likeCream == 'Y' || likeCream == 'y');
       printf(" 2|       %d         |      %d      |   %d   |\n", (strengthOfCoffee == 'M') || (strengthOfCoffee == 'm'), numOfServings >= 5 && numOfServings <= 9, likeCream == 'n' || likeCream == 'N');
       printf(" 3|       %d         |      %d      |   %d   |\n\n", (strengthOfCoffee == 'R') || (strengthOfCoffee == 'r'), numOfServings >= 10, likeCream == 'n' || likeCream == 'N');

       return 0;
}
