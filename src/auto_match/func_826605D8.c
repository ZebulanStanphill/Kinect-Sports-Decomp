/* vector<32-byte element>::reserve (XLip, /O1 /Og- /Ob0). The library was built without exceptions:
   _TRY_BEGIN / _CATCH_ALL expand to `if (1) {` / `} else {`, so the deallocate of the catch block
   stays as an unreachable block. */
typedef struct { char b[0x20]; } Elem_826605D8;
typedef struct Vec_826605D8 {
    Elem_826605D8 *first, *last, *end;
    char alval[4];
} Vec_826605D8;

extern unsigned int fn_82660760(Vec_826605D8 *v);
extern void fn_82660870(Vec_826605D8 *v);
extern unsigned int fn_82660720(Vec_826605D8 *v);
extern Elem_826605D8 *fn_826610F8(void *alval, unsigned int count);
extern void fn_82661AB8(Vec_826605D8 *v, Elem_826605D8 *first, Elem_826605D8 *last, Elem_826605D8 *dest);
extern void fn_82660558(void *alval, Elem_826605D8 *p, unsigned int count);
extern unsigned int fn_82660740(Vec_826605D8 *v);
extern void fn_82660790(Vec_826605D8 *v, Elem_826605D8 *first, Elem_826605D8 *last);
extern void fn_82BA02A8(Vec_826605D8 *v);

void fn_826605D8(Vec_826605D8 *v, unsigned int count)
{
    if (fn_82660760(v) < count) {
        fn_82660870(v);
    } else if (fn_82660720(v) < count) {
        Elem_826605D8 *ptr = fn_826610F8(v->alval, count);
        unsigned int size;

        if (1) {
            fn_82661AB8(v, v->first, v->last, ptr);
        } else {
            fn_82660558(v->alval, ptr, count);
        }
        size = fn_82660740(v);
        if (v->first != 0) {
            fn_82660790(v, v->first, v->last);
            fn_82660558(v->alval, v->first, v->end - v->first);
        }
        fn_82BA02A8(v);
        v->end = ptr + count;
        v->last = ptr + size;
        v->first = ptr;
    }
}
