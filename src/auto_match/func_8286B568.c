typedef struct Elem_8286B568 { int words[7]; } Elem_8286B568;

extern void fn_8286B368(Elem_8286B568 *first, Elem_8286B568 *mid, Elem_8286B568 *last);

void fn_8286B568(Elem_8286B568 *first, Elem_8286B568 *mid, Elem_8286B568 *last)
{
    if (40 < last - first) {
        int step = (last - first + 1) / 8;
        fn_8286B368(first, first + step, first + 2 * step);
        fn_8286B368(mid - step, mid, mid + step);
        fn_8286B368(last - 2 * step, last - step, last);
        fn_8286B368(first + step, mid, last - step);
    } else {
        fn_8286B368(first, mid, last);
    }
}
