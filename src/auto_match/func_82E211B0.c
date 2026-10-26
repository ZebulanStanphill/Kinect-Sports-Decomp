typedef struct Buf { unsigned int x0; unsigned int len; unsigned int cap; unsigned int xc; unsigned int base; } Buf;
extern void fn_82E210D0(Buf *b, unsigned int n);

unsigned int fn_82E211B0(Buf *b, unsigned int n)
{
    if (n + b->len >= b->cap) {
        fn_82E210D0(b, n);
    }
    return b->base + b->len;
}
