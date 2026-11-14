typedef struct Key_82BB01C8 {
    unsigned int high, low;
} Key_82BB01C8;

typedef struct Table_82BB01C8 {
    int pad;
    unsigned int count;
    Key_82BB01C8 **items;
} Table_82BB01C8;

extern Key_82BB01C8 **fn_82BC0088(Table_82BB01C8 *self, unsigned int index);
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern char lbl_82196F10[];

static __forceinline unsigned char Equal(Key_82BB01C8 *a, Key_82BB01C8 *b)
{
    if (a->high == b->high && a->low == b->low)
        return 1;
    return 0;
}

unsigned int fn_82BB01C8(Table_82BB01C8 *self, Key_82BB01C8 key)
{
    unsigned int i = 0;
    for (; i < self->count; i++) {
        Key_82BB01C8 **slot;
        if (i < self->count)
            slot = &self->items[i];
        else
            slot = fn_82BC0088(self, i);
        if (Equal(*slot, &key))
            return i;
    }
    fn_82AB15D0(
        0, "Assertion failed: %s (%s:%u)", lbl_82196F10,
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\vregtable.cpp",
        0x23c);
    return self->count;
}
