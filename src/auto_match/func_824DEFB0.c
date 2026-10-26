typedef struct { int a, b; } E;
typedef struct { E *first; E *last; E *end; char pad[0x14]; int x20; } Vec;
extern void fn_82359C18(void *p);
extern void fn_8265CA20(void *p);

void fn_824DEFB0(Vec *v)
{
    fn_82359C18(&v->x20);
    if (v->first != 0) {
        E *p;
        for (p = v->first; p != v->last; p++)
            ;
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}
