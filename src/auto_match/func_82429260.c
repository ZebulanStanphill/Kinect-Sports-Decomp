extern void XMemSet(void *dest, int value, unsigned int size);
extern void *memcpy(void *dest, const void *src, unsigned int size);
extern char lbl_821B9BC8[];

typedef struct Block32_82429260 {
    unsigned __int64 words[4];
} Block32_82429260;

typedef struct Object_82429260 {
    void *vtable;             /* 0x00 */
    int unk4;                 /* 0x04 */
    int arg8;                 /* 0x08 */
    int argC;                 /* 0x0c */
    unsigned char data[0x40]; /* 0x10 */
    Block32_82429260 block;   /* 0x50 */
} Object_82429260;

Object_82429260 *fn_82429260(Object_82429260 *self, int arg8, int argC, const void *data,
                             const Block32_82429260 *block)
{
    self->arg8 = arg8;
    self->argC = argC;
    self->unk4 = 0;
    self->vtable = lbl_821B9BC8;
    XMemSet(self->data, 0, 0x40);
    XMemSet(&self->block, 0, 0x20);
    if (data != 0) {
        memcpy(self->data, data, 0x40);
    }
    if (block != 0) {
        self->block = *block;
    }
    return self;
}
