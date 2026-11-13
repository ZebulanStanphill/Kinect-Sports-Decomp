typedef int Elem_8282EDA0;

extern void fn_8282ED20(Elem_8282EDA0 *first, Elem_8282EDA0 *mid, Elem_8282EDA0 *last, void *pred);

void fn_8282EDA0(Elem_8282EDA0 *first, Elem_8282EDA0 *mid, Elem_8282EDA0 *last, void *pred)
{
    if (40 < last - first) {
        int step = (last - first + 1) / 8;
        fn_8282ED20(first, first + step, first + 2 * step, pred);
        fn_8282ED20(mid - step, mid, mid + step, pred);
        fn_8282ED20(last - 2 * step, last - step, last, pred);
        fn_8282ED20(first + step, mid, last - step, pred);
    } else {
        fn_8282ED20(first, mid, last, pred);
    }
}
