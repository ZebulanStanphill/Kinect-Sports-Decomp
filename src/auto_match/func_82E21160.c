typedef struct { int x0; unsigned int len; unsigned int cap; int xc; short *data; } Buf;
extern void fn_82E210D0(Buf *b);

short *fn_82E21160(Buf *b, int n)
{
    if (n + b->len >= b->cap) {
        fn_82E210D0(b);
    }
    return b->data + b->len;
}
