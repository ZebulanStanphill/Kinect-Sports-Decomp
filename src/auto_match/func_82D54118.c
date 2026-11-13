typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Obj_82D54118 { struct OVt_82D54118 *vt; } Obj_82D54118;
struct OVt_82D54118 { void *f0, *f4, *f8, *fc; int (*f10)(Obj_82D54118 *); };
typedef struct { int a; Obj_82D54118 **b; int c; int d; int e; int f; int g; } Msg_82D54118;

typedef struct Self_82D54118 {
    int pad00;
    int pad04;
    int f8;
    int pad0c;
    __vector4 v10;
    __vector4 v20;
    char queue[1];
} Self_82D54118;

static __forceinline void SetZero_82D54118(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

extern void fn_82D71478(void *, Msg_82D54118 *);

void fn_82D54118(Self_82D54118 *self, int a, Obj_82D54118 **o, int e, int g)
{
    Msg_82D54118 m;

    SetZero_82D54118(&self->v10);
    SetZero_82D54118(&self->v20);
    m.d = (*o)->vt->f10(*o);
    m.a = a;
    m.b = o;
    m.e = e;
    m.f = self->f8;
    m.g = g;
    fn_82D71478(self->queue, &m);
}
