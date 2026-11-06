typedef unsigned int size_t;
extern void *memcpy(void *d, const void *s, size_t n);
typedef struct {
    char pad0[0x20];
    unsigned char *buf;
    unsigned char *end;
    int used;
    int cap;
} Buf_82BF2608;

extern void *(*lbl_831751D0)(int size);
extern void (*lbl_831751CC)(void *p);
extern int fn_82BF2490(Buf_82BF2608 *b, int size);

int fn_82BF2608(Buf_82BF2608 *b, int size)
{
    unsigned char *p;
    if (b->buf == 0 || b->cap == 0) {
        return fn_82BF2490(b, size);
    }
    p = lbl_831751D0(size);
    if (p != 0) {
        memcpy(p, b->buf, b->used);
        lbl_831751CC(b->buf);
        b->buf = p;
        b->cap = size;
        b->end = p + b->used;
        return 0;
    }
    return 0x65;
}
