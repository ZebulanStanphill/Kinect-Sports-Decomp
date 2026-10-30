typedef struct {
    char pad[8];
    int refs;
} Ref_8272FFB0;

typedef struct {
    char pad0[4];
    Ref_8272FFB0 *ref;
    void *b;
    char padc[8];
    void *a;
} Obj_8272FFB0;

extern void fn_8267BE38(void *p);
extern void fn_826944C8(Ref_8272FFB0 *p);

void fn_8272FFB0(Obj_8272FFB0 *o)
{
    Ref_8272FFB0 *r;

    fn_8267BE38(o->a);
    fn_8267BE38(o->b);
    r = o->ref;
    if (--r->refs == 0) {
        fn_826944C8(r);
    }
}
