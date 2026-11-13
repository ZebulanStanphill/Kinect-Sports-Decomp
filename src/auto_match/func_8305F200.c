extern void *fn_83066770(void *b);
extern void fn_8305EBE0(void *a, void *b, void *c, float f, void *d);

void fn_8305F200(void *a, void *b, float f, void *d)
{
    fn_8305EBE0(a, b, fn_83066770(b), f, d ? d : a);
}
