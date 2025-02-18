#include <stdio.h>
#include <string.h>

// Define the city structure
typedef struct {
    char name[100];
    int population;
} city;

// Bubble Sort to sort cities by population in ascending order
void bubbleSort(city T[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (T[j].population > T[j + 1].population) {
                // Swap the cities
                city temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }
}

int main() {
    city T[100];
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name of the city number %d: ", i + 1);
        scanf("%s", T[i].name);
        printf("Enter population of the city: ");
        scanf("%d", &T[i].population);
    }

    // Sort the array of cities by population
    bubbleSort(T, n);

    printf("Ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("City %d:\n", i + 1);
        printf("  Name: %s\n", T[i].name);
        printf("  Population: %d\n", T[i].population);
    }

    return 0;
}
