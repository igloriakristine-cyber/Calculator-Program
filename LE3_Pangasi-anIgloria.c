 #include <stdio.h>

int main() {
    char Fname[30];
    char section[30];
    float num1 = 0.0f;
    float num2 = 0.0f;

    printf("Enter Full Name: ");
    fgets(Fname, sizeof(Fname), stdin);
    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);

    printf("\nEnter First Number: ");
    scanf("%f", &num1);
    printf("Enter Second Number: ");
    scanf("%f", &num2);

    printf(" \nStudent Calculator ");
    printf("\nStudent Name: %s", Fname);
    printf("Section: %s", section);
    printf("Results: \n");

    switch (1) {    
    default:
        printf("%d + %d = %d\n", (int)num1, (int)num2, (int)(num1 + num2));
        printf("%d - %d = %d\n", (int)num1, (int)num2, (int)(num1 - num2));
        printf("%d * %d = %d\n", (int)num1, (int)num2, (int)(num1 * num2));
        if (num2 != 0)
            printf("%.0f / %.0f = %.2f\n", num1, num2, num1 / num2);
        else
            printf("Error (divide by zero)\n");
}

    return 0;
}