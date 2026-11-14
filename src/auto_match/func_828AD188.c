typedef struct Ref_828AD188 {
    void *ptr;
} Ref_828AD188;

typedef struct Obj_828AD188 {
    char pad0[0x8c];
    Ref_828AD188 ref;          /* 0x8c */
    char pad90[0xa0 - 0x90];
    int state;                 /* 0xa0 */
    char padA4[0x2cc - 0xa4];
    char src[4];               /* 0x2cc */
} Obj_828AD188;

extern unsigned char fn_828A0B28(Obj_828AD188 *p);
extern void fn_828A1C38(Ref_828AD188 *r);
extern unsigned char fn_828ACC40(Obj_828AD188 *p);
extern Ref_828AD188 *fn_828AD110(Ref_828AD188 *out, void *src);

static __forceinline void Ref_move_828AD188(Ref_828AD188 *dst, Ref_828AD188 *src)
{
    if (dst != src) {
        void *v = src->ptr;
        src->ptr = 0;
        if (v != dst->ptr) {
            fn_828A1C38(dst);
            dst->ptr = v;
        }
    }
}

unsigned char fn_828AD188(Obj_828AD188 *p)
{
    unsigned char ok;
    Ref_828AD188 tmp;

    ok = (p->state == 0 && p->ref.ptr == 0);
    ok = (ok && fn_828A0B28(p) == 1);
    ok = (ok && fn_828ACC40(p) != 0);
    if (ok) {
        fn_828AD110(&tmp, p->src);
        Ref_move_828AD188(&p->ref, &tmp);
        fn_828A1C38(&tmp);
        p->state = 2;
    }
    return ok;
}
