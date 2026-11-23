extern int fn_82522838();
extern char *fn_82522CF8();
extern int fn_8259A230();
extern char *fn_8259C458();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern void *XMemSet(void *dest, int value, unsigned int count);
extern int lbl_8326B7D0[];
extern int *lbl_832767CC;

typedef struct Object_82540308 {
    int owner; /* 0x0000 */
    unsigned char pad4[0xa85c];
    float threshold; /* 0xa860 */
    unsigned char padA864[0x34c];
    unsigned int color; /* 0xabb0 */
    int index;          /* 0xabb4 */
    unsigned char padABB8[0x2c];
    int enabled; /* 0xabe4 */
    unsigned char padABE8[0x58];
} Object_82540308;

static __forceinline char *Allocate_82540308(unsigned int size)
{
    int *g;
    char *s;
    char *r;
    unsigned int v;
    unsigned int n;

    if (lbl_832767CC == 0) {
        fn_82522838();
        if (lbl_832767CC == 0) {
            fn_82522838();
        }
    }
    g = lbl_832767CC;
    if (*g == 0) {
        fn_82522838();
    }
    fn_8259C5D8(g + 2, 1, fn_82A1BB18() + 1);
    fn_82A1BB18();
    s = fn_8259C458(lbl_8326B7D0[fn_8259A230()]);
    v = *(unsigned int *)(s + 0x28);
    *(unsigned int *)(s + 0x28) = 0x10;
    r = fn_82522CF8(s, size);
    n = v;
    if (n > 0x10) {
        n = 0x10;
    }
    *(unsigned int *)(s + 0x28) = n;
    fn_82A1BB18();
    fn_8259C738(g + 2);
    return r;
}

Object_82540308 *fn_82540308(int owner)
{
    Object_82540308 *self;

    self = (Object_82540308 *)Allocate_82540308(sizeof(Object_82540308));
    XMemSet(self, 0, sizeof(Object_82540308));
    self->owner = owner;
    self->color = 0x808080ff;
    self->index = -1;
    self->enabled = 1;
    self->threshold = 0.0002f;
    return self;
}
