#include <stdio.h>

int main() {
    
    int i, j;
    
    printf("Counting up:\n");
    
    for (i = 1; i <= 5; i++) {
        
        printf("%d ", i);
    }
    printf("\n\n");
    
    printf("Counting down:\n");
    
    for (i = 5; i >= 1; i--) {
        
        printf("%d ", i);
    }
    printf("\n\n");
    
    printf("Counting with step:\n");
    
    for (i = 1; i <= 10; i += 2) {
        
        printf("%d ", i);
    }
    printf("\n\n");
    
    printf("Nested loops:\n");
    for (i = 1; i <= 3; i++) {
        
        for (j = 1; j <= i; j++) {
            
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("Skipping iteration:\n");
    
    for (i = 1; i <= 5; i++) {
        
        if (i == 3) {
            
            continue;
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    printf("Breaking out of loop:\n");
    
    for (i = 1; i <= 5; i++) {
        
        if (i == 3) {
            
            break;
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    printf("Looping through an array:\n");
    
    int numbers[] = {2, 4, 6, 8, 10};
    
    int length = sizeof(numbers) / sizeof(numbers[0]);
    
    for (i = 0; i < length; i++) {
        
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    
    printf("Looping through a string:\n");
    
    char name[] = "John";
    
    for (i = 0; name[i] != '\0'; i++) {
        
        printf("%c ", name[i]);
    }
    printf("\n\n");
    
    printf("Infinite loop with break:\n");
    
    int counter = 0;
    
    for (;;) {
        
        counter++;
        
        printf("%d ", counter);
        
        if (counter >= 5) {
            
            break;
        }
    }
    printf("\n\n");
    
    return 0;
}
