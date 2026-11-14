typedef struct Buf_826236B8 {
    int f00;
    int f04;
    unsigned int size;
    void *data;
    void *cur;
    int f14;
    int f18;
    int f1c;
    struct Buf_826236B8 *self;
    unsigned int f24;
    int f28;
} Buf_826236B8;

extern int XMemSet(void *, int, int);
extern void *fn_82522D98(unsigned int size);

void fn_826236B8(Buf_826236B8 *b, unsigned int size)
{
    void *p;
    XMemSet(b, 0, 0x2c);
    b->size = size;
    b->f00 = 0;
    b->f04 = 0;
    if (size != 0) {
        p = fn_82522D98(size);
        b->f24 = size;
        b->data = p;
        b->cur = p;
    } else {
        b->data = 0;
        b->cur = 0;
        b->f24 = 1;
    }
    b->self = b;
    b->f28 = 0;
}
