typedef struct Ref { void *p; int x; } Ref;
extern void fn_8267C4C8(void *p);
extern void fn_82687270(void *p);

Ref *fn_82687F98(Ref *dst, Ref *src)
{
    if ((int)src->p != 0) {
        fn_8267C4C8(src->p);
    }
    if (dst->p != 0) {
        fn_82687270(dst->p);
    }
    *dst = *src;
    return dst;
}
