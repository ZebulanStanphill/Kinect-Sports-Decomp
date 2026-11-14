typedef struct Parent_8285A3A8 {
    char pad0[0x44];
    unsigned int base;
} Parent_8285A3A8;

typedef struct Block_8285A3A8 {
    void *data;
    unsigned char inlineData[4];
} Block_8285A3A8;

typedef struct Self_8285A3A8 {
    char pad0[0x34];
    unsigned int items;
    char pad38[0xc];
    Parent_8285A3A8 *parent;
    char pad48[0xc];
    char *base;
} Self_8285A3A8;

typedef struct Desc_8285A3A8 {
    char pad0[8];
    int offset;
} Desc_8285A3A8;

extern void fn_8285A300(unsigned int items, unsigned char useInline, Desc_8285A3A8 *desc);
extern unsigned int lbl_8321132C[];

void fn_8285A3A8(Self_8285A3A8 *self, unsigned char useInline, Desc_8285A3A8 *desc)
{
    Block_8285A3A8 *block = (Block_8285A3A8 *)(self->base + desc->offset);
    void *data;
    Parent_8285A3A8 *parent;

    lbl_8321132C[1] = self->items;
    data = useInline ? block->inlineData : 0;
    if (useInline)
        block->data = data;
    {
        Parent_8285A3A8 *parent = self->parent;
        lbl_8321132C[0] = 0;
        if (parent != 0) {
            lbl_8321132C[0] = parent->base;
        }
    }
    fn_8285A300(self->items, useInline, desc);
}
