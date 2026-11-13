typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" __vector4 __vsubfp(__vector4 a, __vector4 b);

struct Child_823BCEB0 {
    virtual void f00();
    virtual void f04();
    virtual void f08();
    virtual void f0c();
    virtual void Set(int key, const __vector4 &v);
};

struct Xform_823BCEB0 {
    __vector4 f00;
    __vector4 pos;
    __vector4 dir;
};

struct Obj_823BCEB0 {
    __vector4 f00;
    __vector4 pos;
    Child_823BCEB0 *a;
    Child_823BCEB0 *b;
};

extern "C" void fn_823BCEB0(Obj_823BCEB0 *o, int key, const Xform_823BCEB0 *x)
{
    __vector4 d = __vsubfp(x->pos, o->pos);
    o->a->Set(key, d);
    __vector4 dir = x->dir;
    o->b->Set(key, dir);
}
