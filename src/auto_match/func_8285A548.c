typedef struct Parent_8285A548 {
    char pad0[0x44];
    unsigned int base;
} Parent_8285A548;

typedef struct Self_8285A548 {
    char pad0[0x34];
    int items;
    char pad38[0xc];
    Parent_8285A548 *parent;
} Self_8285A548;

extern void fn_8285A498(int items, int a, int b);
extern unsigned int lbl_8321132C[];

void fn_8285A548(Self_8285A548 *self, int a, int b)
{
    int items = self->items;
    Parent_8285A548 *parent = self->parent;

    lbl_8321132C[0] = 0;
    lbl_8321132C[1] = items;
    if (parent != 0) {
        lbl_8321132C[0] = parent->base;
    }
    fn_8285A498(items, a, b);
}
