typedef struct Bits {
    unsigned int pad : 25;
    unsigned int flag : 1;
    unsigned int rest : 6;
} Bits;
typedef struct S {
    int owner;
    Bits bits;
    long long data;
} S;
extern void fn_82681FE0(int, S *, unsigned int);

S *fn_8228E780(S *dst, S *src)
{
    dst->owner = 0;
    dst->bits = src->bits;
    dst->data = src->data;
    if ((unsigned char)src->bits.flag) {
        int value = src->owner;
        dst->owner = value;
        fn_82681FE0(value, dst, *(unsigned int *)&dst->data);
    }
    return dst;
}
