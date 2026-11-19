/* Compares a stored network key with another key: string keys case-insensitively, blob keys bytewise,
 * every other kind as the raw 16 bytes. */
typedef struct Key_828BA358 {
    unsigned char type; /* 0x0 */
    char pad1[7];
    unsigned int length; /* 0x8 */
    unsigned char *data; /* 0xc */
} Key_828BA358;

typedef struct Entry_828BA358 {
    char pad0[8];
    Key_828BA358 key; /* 0x8 */
    int kind;         /* 0x18 */
} Entry_828BA358;

extern int memcmp(const void *a, const void *b, unsigned int size);
extern int __ascii_stricmp(const unsigned char *a, const unsigned char *b);

unsigned char fn_828BA358(Entry_828BA358 *entry, Key_828BA358 *key)
{
    if (entry->key.type != key->type) {
        return 0;
    }
    if (entry->kind == 4) {
        return entry->key.data != 0 && key->data != 0 && entry->key.length == key->length &&
               __ascii_stricmp(entry->key.data, key->data) == 0;
    }
    if (entry->kind == 6) {
        return entry->key.data != 0 && key->data != 0 && entry->key.length == key->length &&
               memcmp(entry->key.data, key->data, key->length) == 0;
    }
    return memcmp(&entry->key, key, 16) == 0;
}
