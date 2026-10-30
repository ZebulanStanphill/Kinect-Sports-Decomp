typedef struct { int v[2]; } Elem;
extern void fn_828B55B0(Elem *e);

void fn_8288E5C8(Elem *first, Elem *last)
{
    Elem *p = first;
    for (; p != last; p++) {
        fn_828B55B0(p);
    }
}
