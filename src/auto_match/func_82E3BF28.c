#include <string.h>
typedef struct {
    unsigned int w0;
    unsigned char pad4[0xc];
    unsigned short h10;
} Key_82E3BF28;
typedef struct Node_82E3BF28 {
    Key_82E3BF28 key;
    int value;
    struct Node_82E3BF28 *next;
} Node_82E3BF28;
typedef struct {
    Node_82E3BF28 **buckets;
    unsigned int size;
} Table_82E3BF28;
typedef struct {
    Node_82E3BF28 *found;
    Node_82E3BF28 *prev;
} Pos_82E3BF28;

int fn_82E3BF28(Table_82E3BF28 *t, Key_82E3BF28 *key, int *value, Pos_82E3BF28 *pos)
{
    Node_82E3BF28 *n;
    if (t->buckets == 0)
        return 0;
    n = t->buckets[(key->h10 ^ key->w0) % (t->size >> 1)];
    pos->found = 0;
    pos->prev = 0;
    while (n != 0) {
        if (memcmp(&n->key, key, 0x12) == 0) {
            pos->found = n;
            *value = n->value;
            break;
        }
        pos->prev = n;
        n = n->next;
    }
    return n != 0;
}
