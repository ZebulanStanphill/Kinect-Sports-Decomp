class Obj_83000120 {
public:
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44();
    virtual void f48(float f, int a, int b, int c);
    int pad04[23];
    short pad60;
    unsigned short f62;
};

extern "C" int fn_83000120(Obj_83000120 *self, int v)
{
    self->f62 = (unsigned short)v;
    self->f48((unsigned short)v * 0.01f, 0xb, 0, 0);
    return 1;
}
