typedef unsigned int size_t;
void *memcpy(void *dst, const void *src, size_t n);
extern int fn_829EDB80();

typedef struct S {
    char pad0[8];
    void *data;
    char pad0c[0x14 - 0x0c];
    unsigned short count;
    char pad16[0x2c - 0x16];
    unsigned short *dims;
} S;

void fn_829EDF18(S *p, const void *src, int arg)
{
    unsigned int n = 0;

    if (p->data != 0 && p->count != 0) {
        n = *p->dims;
    }
    memcpy(p->data, src, n * 4);
    fn_829EDB80(p, arg);
}
