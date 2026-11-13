/* Constructor: three empty vectors, then a 0x34-byte member object built from a
   function object bound to the id argument, then id/0x3e5/1 fields. */
typedef struct {
    void *vt;
    void *arg;
} Impl_825373A0;

typedef struct {
    Impl_825373A0 impl;
    int pad[2];
    Impl_825373A0 *mgr;
} Fn_825373A0;

typedef struct {
    int *first;
    int *last;
    int *end;
    int pad;
} Vec_825373A0;

typedef struct {
    Vec_825373A0 a;
    Vec_825373A0 b;
    Vec_825373A0 c;
    void *obj;
    int id;
    int f38;
    int f3c;
} Obj_825373A0;

extern char lbl_821C4044[];
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_825380D0(void *mem, Fn_825373A0 *f);

Obj_825373A0 *fn_825373A0(Obj_825373A0 *self, int id)
{
    void *mem;
    self->a.first = 0;
    self->a.last = 0;
    self->a.end = 0;
    self->b.first = 0;
    self->b.last = 0;
    self->b.end = 0;
    self->c.first = 0;
    self->c.last = 0;
    self->c.end = 0;
    mem = fn_8265C9E0(0x34);
    if (mem != 0) {
        Fn_825373A0 f;
        f.impl.vt = lbl_821C4044;
        f.impl.arg = &id;
        f.mgr = &f.impl;
        mem = fn_825380D0(mem, &f);
    } else {
        mem = 0;
    }
    self->obj = mem;
    self->f38 = 0x3e5;
    self->f3c = 1;
    self->id = id;
    return self;
}
