extern long _InterlockedDecrement(long *);
extern void fn_822315A0(void *p);

typedef struct Ref_82520540 {
    int vt;
    long refs;
} Ref_82520540;

typedef struct Obj_82520540 {
    int f0;
    void *p;
} Obj_82520540;

void fn_82520540(Obj_82520540 *self, Ref_82520540 *r)
{
    _InterlockedDecrement(&r->refs);
    if (self->p != 0)
        fn_822315A0(self->p);
}
