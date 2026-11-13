typedef struct Obj_828A9288 { struct ObjVt_828A9288 *vt; } Obj_828A9288;
typedef struct ObjVt_828A9288 {
    void *f0, *f4;
    void *(*f8)(Obj_828A9288 *self, void *a, int b);
} ObjVt_828A9288;

extern unsigned char fn_828C4240(Obj_828A9288 *o);
extern unsigned char fn_828EA600(void *o);
extern void fn_828904D8(void *o);

void *fn_828A9288(Obj_828A9288 *self, void *a, int b)
{
    void *r;
    if (fn_828C4240(self) != 0)
        b = 0;
    fn_828EA600(a);
    r = self->vt->f8(self, a, b);
    fn_828904D8(r);
    return r;
}
