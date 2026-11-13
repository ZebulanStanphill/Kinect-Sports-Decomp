typedef struct Elem_828B6AB8 { int a; int b; } Elem_828B6AB8;

extern void fn_828B68E8(Elem_828B6AB8 *first, Elem_828B6AB8 *mid, Elem_828B6AB8 *last, void *pred);

void fn_828B6AB8(Elem_828B6AB8 *first, Elem_828B6AB8 *mid, Elem_828B6AB8 *last, void *pred)
{
    if (40 < last - first) {
        int step = (last - first + 1) / 8;
        fn_828B68E8(first, first + step, first + 2 * step, pred);
        fn_828B68E8(mid - step, mid, mid + step, pred);
        fn_828B68E8(last - 2 * step, last - step, last, pred);
        fn_828B68E8(first + step, mid, last - step, pred);
    } else {
        fn_828B68E8(first, mid, last, pred);
    }
}
