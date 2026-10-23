typedef struct { int v[7]; } CRITICAL_SECTION;
extern void RtlInitializeCriticalSection(CRITICAL_SECTION *cs);

typedef struct {
    int a;
    int b;
    int c;
} Vec;

typedef struct {
    void *vt;
    int f4;
    int f8;
    int fC;
    Vec v;
    CRITICAL_SECTION cs;
    int f38;
    int f3C;
    __int64 f40;
    int f48;
    int f4C;
    int f50;
    int f54;
    unsigned char f58;
    int f5C;
    int f60;
    int f64;
    int f68;
    int f6C;
    int f70;
    int f74;
    int f78;
    int f7C;
} Obj;

static void Vec_init(Vec *v) { v->a = 0; v->b = 0; v->c = 0; }
extern void fn_82FFFAF8(Obj *self);
extern char lbl_8217C364[];

Obj *fn_83014568(Obj *self, int a2, int a3)
{
    fn_82FFFAF8(self);
    self->vt = lbl_8217C364;
    Vec_init(&self->v);
    RtlInitializeCriticalSection(&self->cs);
    self->f5C = a3;
    self->f38 = 0;
    self->f3C = 0;
    self->f58 = 0;
    self->f78 = 0;
    self->f7C = 0;
    self->f60 = 0;
    self->f6C = 0;
    self->f40 = 0;
    self->f48 = 0;
    self->f50 = a2;
    return self;
}
