typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" __vector4 __lvlx(const void *base, int offset);
extern "C" __vector4 __vspltw(__vector4 v, unsigned int i);
extern "C" __vector4 __vmulfp(__vector4 a, __vector4 b);

class Obj_82D9B7C8 {
public:
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void Apply(const __vector4 *v, int arg);   /* 0x50 */
};

extern "C" void fn_82D9B7C8(Obj_82D9B7C8 *self, float scale, const __vector4 *v, int arg)
{
    __vector4 scaled;
    scaled = __vmulfp(*v, __vspltw(__lvlx(&scale, 0), 0));
    self->Apply(&scaled, arg);
}
