typedef struct {
    char pad0[0x35];
    unsigned char flags;
    unsigned short count;
} Item;

extern int fn_82A30690(void *ctx, unsigned int size, int *a, int *b, int *c, int *d);
extern void fn_82A2CBB0(Item *item, int p, int a);
extern void fn_82A2CB08(void *ctx, int b, int c, int d);

int fn_82A30700(void *ctx, Item *item, int p)
{
    int a;
    int b;
    int c;
    int d;
    int hr;
    unsigned int size = item->count << 6;

    hr = fn_82A30690(ctx, size, &a, &b, &c, &d);
    if (hr >= 0) {
        fn_82A2CBB0(item, p, a);
        item->flags = (item->flags & 0xcf) | 0x20;
        fn_82A2CB08(ctx, b, c, d);
    }
    return hr;
}
