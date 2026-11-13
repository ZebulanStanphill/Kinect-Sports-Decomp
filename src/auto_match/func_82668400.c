typedef struct { int v[3]; } Elem_82668400;
extern void fn_82667870(void *al, Elem_82668400 *p, const Elem_82668400 *val);
extern void fn_826686C8(void *al, Elem_82668400 *p);

/* _Uninit_copy with allocator: the catch-all destroy loop is dead without EH
   (_TRY_BEGIN/_CATCH_ALL expand to `{` / `} if (0) {`). */
Elem_82668400 *fn_82668400(Elem_82668400 *first, Elem_82668400 *last, Elem_82668400 *dest, void *al, void *valty, unsigned char tag)
{
    Elem_82668400 *next = dest;
    {
        for (; first != last; ++dest, ++first) {
            fn_82667870(al, dest, first);
        }
    }
    if (0) {
        for (; next != dest; ++next) {
            fn_826686C8(al, next);
        }
    }
    return dest;
}
