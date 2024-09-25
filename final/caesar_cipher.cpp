#include<stdio.h>
#include<string.h>

int main() {
    char message[100];  
    int key;

    printf("Enter key value: ");
    scanf("%d", &key); 

    printf("Enter message: ");
    getchar();  
    fgets(message, sizeof(message), stdin);  
    for(int i = 0; message[i] != '\0'; i++) {
        char c = message[i];
        if (c >= 'a' && c <= 'z') {
            c = (c - 'a' + key) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            c = (c - 'A' + key) % 26 + 'A';
        }
        message[i] = c;
    }
    printf("Encrypted text is: %s\n", message);

    for(int i = 0; message[i] != '\0'; i++) {
        char c = message[i];
        if (c >= 'a' && c <= 'z') {
            c = (c - 'a' - key + 26) % 26 + 'a'; 
        } else if (c >= 'A' && c <= 'Z') {
            c = (c - 'A' - key + 26) % 26 + 'A'; 
        }
        message[i] = c;
    }
    printf("Decrypted text is: %s\n", message);

    return 0;
}
