extern void *memcpy(void *dst, const void *src, unsigned int n);
extern void fn_8267C4F0(void *p);

typedef struct Obj_826EA6A0 {
    unsigned char data[0x1c];
    void *ref;
    unsigned char owned;
} Obj_826EA6A0;

static __forceinline void Reset(void **pr)
{
    if (*pr != 0)
        fn_8267C4F0(*pr);
    *pr = 0;
}

Obj_826EA6A0 *fn_826EA6A0(Obj_826EA6A0 *o, const void *src)
{
    o->ref = 0;
    Reset(&o->ref);
    o->owned = 1;
    memcpy(o, src, 0x1c);
    return o;
}
