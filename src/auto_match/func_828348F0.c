typedef struct Elem_828348F0 { int a; int b; int c; } Elem_828348F0;

extern void fn_82834608(Elem_828348F0 *first, Elem_828348F0 *mid, Elem_828348F0 *last, void *pred);

void fn_828348F0(Elem_828348F0 *first, Elem_828348F0 *mid, Elem_828348F0 *last, void *pred)
{
    if (40 < last - first) {
        int step = (last - first + 1) / 8;
        fn_82834608(first, first + step, first + 2 * step, pred);
        fn_82834608(mid - step, mid, mid + step, pred);
        fn_82834608(last - 2 * step, last - step, last, pred);
        fn_82834608(first + step, mid, last - step, pred);
    } else {
        fn_82834608(first, mid, last, pred);
    }
}
