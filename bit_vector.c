#include <stdio.h>
#include <ctype.h>

char universal_set[26] = {
    'A','B','C','D','E','F','G','H','I','J','K','L','M',
    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
};

char set1[26], set2[26];
int bit_vec1[26], bit_vec2[26], result[26];

void initialize() {
    for (int i = 0; i < 26; i++) {
        set1[i] = 0;
        set2[i] = 0;
        bit_vec1[i] = 0;
        bit_vec2[i] = 0;
        result[i] = 0;
    }
}

void bitVector(char ary[], int bit_vec[], int n) {
    for (int i = 0; i < n; i++) {
        char c = toupper(ary[i]);
        if (c >= 'A' && c <= 'Z') {
            bit_vec[c - 'A'] = 1;
        }
    }
}

void Union(int a[], int b[]) {
    for (int i = 0; i < 26; i++)
        result[i] = a[i] | b[i];
}

void Intersection(int a[], int b[]) {
    for (int i = 0; i < 26; i++)
        result[i] = a[i] & b[i];
}

void Complement(int a[]) {
    for (int i = 0; i < 26; i++)
        result[i] = (a[i] == 0) ? 1 : 0;
}

void Difference(int a[], int b[]) {
    for (int i = 0; i < 26; i++)
        result[i] = a[i] & (!b[i]);
}

void displaySetAndBits(int bit_vec[]) {

    // Display Set
    printf("Set: { ");
    for (int i = 0; i < 26; i++) {
        if (bit_vec[i] == 1) {
            printf("%c ", universal_set[i]);
        }
    }
    printf("}\n");

    // Display Bit Vector
    printf("Bits: [ ");
    for (int i = 0; i < 26; i++) {
        printf("%d ", bit_vec[i]);
    }
    printf("]\n");
}

int main() {

    int n1, n2, choice;
    initialize();

    printf("Enter number of elements in Set 1: ");
    scanf("%d", &n1);

    printf("Enter elements of Set 1: ");
    for (int i = 0; i < n1; i++)
        scanf(" %c", &set1[i]);

    printf("Enter number of elements in Set 2: ");
    scanf("%d", &n2);

    printf("Enter elements of Set 2: ");
    for (int i = 0; i < n2; i++)
        scanf(" %c", &set2[i]);

    bitVector(set1, bit_vec1, n1);
    bitVector(set2, bit_vec2, n2);

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Union\n");
        printf("2. Intersection\n");
        printf("3. Difference (Set1 - Set2)\n");
        printf("4. Complement of Set1\n");
        printf("5. Complement of Set2\n");
        printf("6. Display Set1 + Bits\n");
        printf("7. Display Set2 + Bits\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                Union(bit_vec1, bit_vec2);
                printf("\nResult of UNION:\n");
                displaySetAndBits(result);
                break;

            case 2:
                Intersection(bit_vec1, bit_vec2);
                printf("\nResult of INTERSECTION:\n");
                displaySetAndBits(result);
                break;

            case 3:
                Difference(bit_vec1, bit_vec2);
                printf("\nResult of DIFFERENCE (Set1 - Set2):\n");
                displaySetAndBits(result);
                break;

            case 4:
                Complement(bit_vec1);
                printf("\nComplement of Set1:\n");
                displaySetAndBits(result);
                break;

            case 5:
                Complement(bit_vec2);
                printf("\nComplement of Set2:\n");
                displaySetAndBits(result);
                break;

            case 6:
                printf("\nSet 1:\n");
                displaySetAndBits(bit_vec1);
                break;

            case 7:
                printf("\nSet 2:\n");
                displaySetAndBits(bit_vec2);
                break;

            case 8:
                printf("\nExiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

