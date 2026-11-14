int strcmp(const char *a, const char *b);

typedef struct Item_8284DED8 {
    char name[0x2c];
    int count;      /* 0x2c */
    int f30;
    int current;    /* 0x34 */
    int f38;
} Item_8284DED8;

typedef struct Bank_8284DED8 {
    char pad[0x3c];
    int numItems;          /* 0x3c */
    Item_8284DED8 *items;  /* 0x40 */
} Bank_8284DED8;

typedef struct Self_8284DED8 {
    char pad[0x48];
    Bank_8284DED8 *bank;
} Self_8284DED8;

void fn_8284DED8(Self_8284DED8 *self, const char *name)
{
    int i;

    for (i = 0; i < self->bank->numItems; i++) {
        if (strcmp(self->bank->items[i].name, name) == 0) {
            self->bank->items[i].current = (self->bank->items[i].current + 1) % self->bank->items[i].count;
            return;
        }
    }
}
