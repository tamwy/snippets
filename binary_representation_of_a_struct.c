#include <stdio.h>
#include <string.h>

// Define a structure named "Person"
struct Person {
    char name[50];
    int age;
    float height;
};

void printBinary(const void* data, size_t size) {
    const unsigned char* bytes = (const unsigned char*)data;
    for (size_t i = 0; i < size; i++) {
        for (int j = 7; j >= 0; j--) {
            printf("%d", (bytes[i] >> j) & 1);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // Create an instance of the structure
    struct Person person1;
    strcpy(person1.name, "John");
    person1.age = 15;
    person1.height = 1.75;

    // Print the binary representation of the structure
    printBinary(&person1, sizeof(person1));

    return 0;
}
