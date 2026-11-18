typedef struct Item_82966EC8 {
    char pad0[0x2c];
    unsigned int key; /* 0x2c: bit 0 marks a counted item */
} Item_82966EC8;

typedef struct List_82966EC8 {
    char pad0[0xc];
    unsigned int count; /* 0x0c */
    char pad10[8];
    Item_82966EC8 **items; /* 0x18 */
    char pad1c[0x50];
    unsigned int flags; /* 0x6c */
} List_82966EC8;

/* Counts the runs of marked items that share a key. */
unsigned int fn_82966EC8(List_82966EC8 *list)
{
    List_82966EC8 *self = list;
    unsigned int result = 0;
    unsigned int i;
    unsigned int flags = self->flags;

    if (flags & 0x10) {
        if (self->count == 0) {
            return 0;
        }
        if ((self->items[0]->key & 1) == 0) {
            result = 1;
        }
        for (i = 1; i < self->count; i++) {
            if ((self->items[i]->key & 1) && self->items[i]->key != self->items[i - 1]->key) {
                result++;
            }
        }
    } else if (flags & 8) {
        for (i = 0; i < self->count; i++) {
            if (self->items[i]->key & 1) {
                result++;
                if (i + 1 < self->count && self->items[i]->key == self->items[i + 1]->key) {
                    i++;
                }
            }
        }
    }
    return result;
}
