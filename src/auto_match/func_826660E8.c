/* vector<4-byte element>::reserve (XLip, /O1 /Og- /Ob0), the func_826605D8 shape. The library was built
   without exceptions: _TRY_BEGIN / _CATCH_ALL expand to `if (1) {` / `} else {`. */
typedef struct { char b[4]; } Elem_826660E8;
typedef struct Vec_826660E8 {
    Elem_826660E8 *first, *last, *end;
    char alval[4];
} Vec_826660E8;

extern unsigned int fn_8265FE68(Vec_826660E8 *v);
extern void fn_82660870(Vec_826660E8 *v);
extern unsigned int fn_8265D3F0(Vec_826660E8 *v);
extern Elem_826660E8 *fn_8265FE98(void *alval, unsigned int count, void *hint);
extern void fn_8266AE20(Vec_826660E8 *v, Elem_826660E8 *first, Elem_826660E8 *last, Elem_826660E8 *dest);
extern void fn_82668E40(void *alval, Elem_826660E8 *p, unsigned int count);
extern unsigned int fn_8265CF70(Vec_826660E8 *v);
extern void fn_82668DC0(Vec_826660E8 *v, Elem_826660E8 *first, Elem_826660E8 *last);
extern void fn_82BA02A8(Vec_826660E8 *v);

void fn_826660E8(Vec_826660E8 *v, unsigned int count)
{
    if (fn_8265FE68(v) < count) {
        fn_82660870(v);
    } else if (fn_8265D3F0(v) < count) {
        Elem_826660E8 *ptr = fn_8265FE98(v->alval, count, 0);
        unsigned int size;

        if (1) {
            fn_8266AE20(v, v->first, v->last, ptr);
        } else {
            fn_82668E40(v->alval, ptr, count);
        }
        size = fn_8265CF70(v);
        if (v->first != 0) {
            fn_82668DC0(v, v->first, v->last);
            fn_82668E40(v->alval, v->first, v->end - v->first);
        }
        fn_82BA02A8(v);
        v->end = ptr + count;
        v->last = ptr + size;
        v->first = ptr;
    }
}
