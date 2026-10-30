typedef struct { int v[1]; } Elem;
extern void fn_828B6380(Elem *e);

void fn_828A30A0(Elem *first, Elem *last)
{
    Elem *p = first;
    for (; p != last; p++) {
        fn_828B6380(p);
    }
}
