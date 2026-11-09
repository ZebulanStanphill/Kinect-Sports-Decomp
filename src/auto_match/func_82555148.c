typedef struct Obj_82555148 { int a, b, pad[4]; void *p; } Obj_82555148;
extern void fn_828E2670(void *);
unsigned char fn_82555148(Obj_82555148 *self)
{
    void *p = self->p;
    self->a = 0;
    self->b = 0;
    if (p != 0) {
        fn_828E2670(p);
        self->p = 0;
        return 1;
    }
    return 0;
}
