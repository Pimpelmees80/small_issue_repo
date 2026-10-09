#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// =====================================================
// 1. NO INPUTVALIDATIE
// =====================================================
int noValidation(int a, int b) {
    int result = 0;

    if (result == 0) {
        result = 1;
    }

    if ((double)rand() / RAND_MAX > 0.5) {
        result += 10;
    }

    return result;
}

// =====================================================
// 2. ONLY INPUTVALIDATIE
// =====================================================
int onlyValidation(int age, const char *name, int amount) {

    if (age < 0) {
        return -1;
    }

    if (name == NULL) {
        return -2;
    }

    if (strlen(name) == 0) {
        return -3;
    }

    if (amount <= 0) {
        return -4;
    }

    return amount;
}

// =====================================================
// 3. MIXED
// =====================================================
int mixed(int age, const char *name, int score) {

    // inputvalidatie
    if (age < 0) {
        return -1;
    }

    // inputvalidatie
    if (name == NULL) {
        return -2;
    }

    int bonus = 10;

    // Geen inputvalidatie (business logic)
    if (score > 100) {
        bonus = 20;
    }

    // Geen inputvalidatie
    if (bonus > 15) {
        score += 5;
    }

    // inputvalidatie
    if (score < 0) {
        return -3;
    }

    return score + bonus;
}

int main() {
    srand((unsigned int)time(NULL));

    printf("noValidation: %d\n", noValidation(1, 2));

    printf("onlyValidation(valid): %d\n",
           onlyValidation(25, "Pim", 100));

    printf("onlyValidation(invalid): %d\n",
           onlyValidation(-1, "Pim", 100));

    printf("mixed(valid): %d\n",
           mixed(25, "Pim", 150));

    printf("mixed(invalid): %d\n",
           mixed(-1, "Pim", 150));

    return 0;
}