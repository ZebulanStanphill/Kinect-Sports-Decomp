int strcmp(const char *a, const char *b);

typedef struct Item_8284DD70 {
    char name[0x2c];
    int count; /* 0x2c */
    int f30;
    int current34;
    int current; /* 0x38 */
} Item_8284DD70;

typedef struct Bank_8284DD70 {
    char pad[0x3c];
    int numItems;         /* 0x3c */
    Item_8284DD70 *items; /* 0x40 */
} Bank_8284DD70;

typedef struct Self_8284DD70 {
    char pad[0x48];
    Bank_8284DD70 *bank;
} Self_8284DD70;

void fn_8284DD70(Self_8284DD70 *self, const char *name)
{
    int i;

    for (i = 0; i < self->bank->numItems; i++) {
        if (strcmp(self->bank->items[i].name, name) == 0) {
            self->bank->items[i].current34 =
                (self->bank->items[i].current34 + 1) % self->bank->items[i].count;
            self->bank->items[i].current = (self->bank->items[i].current + 1) % self->bank->items[i].count;
            return;
        }
    }
}
