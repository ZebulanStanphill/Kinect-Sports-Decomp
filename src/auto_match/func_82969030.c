typedef struct { char pad0[0xc]; unsigned int count; char pad1[8]; unsigned int **data; } Obj_82969030;
extern void fn_829639F0(void *);
extern void fn_82BA02A8(void *);
extern void *memset(void *, int, unsigned int);

int fn_82969030(Obj_82969030 *o)
{
    unsigned int i = 0;
    unsigned int n = 0;
    for (; i < o->count; i++) {
        unsigned int *p = o->data[i];
        if ((*p & 0xfff00000) == 0) {
            fn_82BA02A8(p);
            fn_829639F0(p);
        } else {
            o->data[n] = p;
            n++;
        }
    }
    if (n == o->count)
        return 1;
    memset((void *)(n * 4 + (unsigned int)o->data), 0, (o->count - n) * 4);
    o->count = n;
    return 0;
}
