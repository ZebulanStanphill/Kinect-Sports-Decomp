typedef struct T { int x; int y; } T;

static int less(T *a, T *b) { return a->y < b->y; }
static void swap(T *a, T *b) { T t = *a; *a = *b; *b = t; }

void fn_82552038(T *first, T *mid, T *last)
{
    if (less(mid, first)) swap(mid, first);
    if (less(last, mid)) swap(last, mid);
    if (less(mid, first)) swap(mid, first);
}
