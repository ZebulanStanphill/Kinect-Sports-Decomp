typedef struct { int a, b; } E;
extern void fn_828B76C8(E *, E *, int, int);

void fn_828B7B80(E *first, E *last, int pred)
{
    for (; 1 < last - first; --last)
        fn_828B76C8(first, last, pred, 0);
}
