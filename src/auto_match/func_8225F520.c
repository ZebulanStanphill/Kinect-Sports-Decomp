typedef struct Obj { int x0; int *min; } Obj;
extern int fn_82A44628(void *p);

void fn_8225F520(Obj *p, void *q)
{
    int v;
    if (q != 0) {
        v = fn_82A44628(q);
        *p->min = *p->min < v ? *p->min : v;
    }
}
