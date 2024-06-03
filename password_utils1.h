#ifndef PASSWORD_UTILS_H
#define PASSWORD_UTILS_H

#include <stdint.h>
#include <stddef.h>

#define HASHLEN 32
#define SALTLEN 16

void generate_salt(uint8_t *salt, size_t length);
void hash_password(const char *password, const uint8_t *salt, char *hash);
int verify_password(const char *password, const uint8_t *salt, const char *hash_hex);

#endif // PASSWORD_UTILS_H
