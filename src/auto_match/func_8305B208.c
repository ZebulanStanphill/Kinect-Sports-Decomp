typedef struct Buf_8305B208 {
    int f0;
    unsigned int size;
    unsigned char *base;
    unsigned char *cur;
    unsigned char *end;
} Buf_8305B208;
extern void *fn_830571E0(unsigned int size);
extern void *memset(void *p, int c, unsigned int n);

int fn_8305B208(Buf_8305B208 *b, unsigned int size)
{
    unsigned char *p = (unsigned char *)fn_830571E0(size);
    b->base = b->cur = p;
    if (p == 0) {
        return 0x34;
    }
    memset(p, 0, size);
    b->size = size;
    b->end = b->cur + size;
    return 1;
}
