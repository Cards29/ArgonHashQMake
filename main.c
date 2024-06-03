#include <stdio.h>
#include <string.h>
#include <time.h>
#include "password_utils1.c"

int main() {
    // Initialize random seed
    srand((unsigned int) time(NULL));

    const char *password = "user_password";
    uint8_t salt[SALTLEN];

    // Generate a random salt
    generate_salt(salt, SALTLEN);

    // Convert salt to hex string for displaying
    char salt_hex[SALTLEN * 2 + 1];
    for (int i = 0; i < SALTLEN; i++) {
        sprintf(salt_hex + (i * 2), "%02x", salt[i]);
    }
    printf("Generated Salt: %s\n", salt_hex);

    char hashed_password[HASHLEN * 2 + 1];
    hash_password(password, salt, hashed_password);

    printf("Hashed Password: %s\n", hashed_password);

    int is_valid = verify_password(password, salt, hashed_password);
    printf("Password is %s\n", is_valid ? "valid" : "invalid");

    return 0;
}
