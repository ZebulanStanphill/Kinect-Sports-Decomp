/* vector<12-byte element>::reserve (XLip, /O1 /Og- /Ob0), the func_826605D8 shape. The library was built
   without exceptions: _TRY_BEGIN / _CATCH_ALL expand to `if (1) {` / `} else {`. */
typedef struct { char b[12]; } Elem_82666388;
typedef struct Vec_82666388 {
    Elem_82666388 *first, *last, *end;
    char alval[4];
} Vec_82666388;

extern unsigned int fn_8265FE68(Vec_82666388 *v);
extern void fn_82660870(Vec_82666388 *v);
extern unsigned int fn_82666C10(Vec_82666388 *v);
extern Elem_82666388 *fn_82666DC8(void *alval, unsigned int count, void *hint);
extern void fn_826678B0(Vec_82666388 *v, Elem_82666388 *first, Elem_82666388 *last, Elem_82666388 *dest);
extern void fn_82668E40(void *alval, Elem_82666388 *p, unsigned int count);
extern unsigned int fn_826664D8(Vec_82666388 *v);
extern void fn_82668E00(Vec_82666388 *v, Elem_82666388 *first, Elem_82666388 *last);
extern void fn_82BA02A8(Vec_82666388 *v);

void fn_82666388(Vec_82666388 *v, unsigned int count)
{
    if (fn_8265FE68(v) < count) {
        fn_82660870(v);
    } else if (fn_82666C10(v) < count) {
        Elem_82666388 *ptr = fn_82666DC8(v->alval, count, 0);
        unsigned int size;

        if (1) {
            fn_826678B0(v, v->first, v->last, ptr);
        } else {
            fn_82668E40(v->alval, ptr, count);
        }
        size = fn_826664D8(v);
        if (v->first != 0) {
            fn_82668E00(v, v->first, v->last);
            fn_82668E40(v->alval, v->first, v->end - v->first);
        }
        fn_82BA02A8(v);
        v->end = ptr + count;
        v->last = ptr + size;
        v->first = ptr;
    }
}
