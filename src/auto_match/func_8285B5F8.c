typedef struct Sub_8285B5F8 {
    int v[3];
} Sub_8285B5F8;

typedef struct Block_8285B5F8 {
    int owner;               /* 0x00 */
    Sub_8285B5F8 a;          /* 0x04 */
    int count;               /* 0x10 */
    Sub_8285B5F8 b;          /* 0x14 */
    Sub_8285B5F8 c;          /* 0x20 */
    unsigned char *data;     /* 0x2c */
    unsigned char inlineData[4]; /* 0x30 */
} Block_8285B5F8;

typedef struct Layout_8285B5F8 {
    char pad0[0x34];
    void **children;         /* 0x34 */
    unsigned short childCount; /* 0x38 */
    char pad3a[0xa];
    unsigned short slots;    /* 0x44 */
    char pad46[0xa];
    int owner;               /* 0x50 */
    char pad54[0xc];
    unsigned int dataSize;   /* 0x60 */
    char pad64[4];
    char *base;              /* 0x68 */
} Layout_8285B5F8;

typedef struct Desc_8285B5F8 {
    char pad0[8];
    int offset;              /* 0x08 */
} Desc_8285B5F8;

extern void fn_828106A0(Sub_8285B5F8 *sub);
extern void fn_8285B568(void *child, Desc_8285B5F8 *desc);
extern void *memset(void *, int, unsigned int);

void fn_8285B5F8(Layout_8285B5F8 *self, unsigned char useInline, Desc_8285B5F8 *desc)
{
    Block_8285B5F8 *block = (Block_8285B5F8 *)(self->base + desc->offset);
    unsigned char *data = useInline ? block->inlineData : 0;
    int i;
    unsigned short slots;

    block->owner = self->owner;
    fn_828106A0(&block->a);
    block->count = 0;
    fn_828106A0(&block->b);
    fn_828106A0(&block->c);
    if (useInline) {
        unsigned char **pData = &block->data;
        *pData = data;
    }
    memset(block->data, 0, self->dataSize);
    for (i = 0; i < self->childCount; i++)
        fn_8285B568(self->children[i], desc);
    slots = self->slots;
    for (i = 0; i < slots; i++) {
    }
}
