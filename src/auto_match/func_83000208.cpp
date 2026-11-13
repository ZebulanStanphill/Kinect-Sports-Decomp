class Obj_83000208 {
public:
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44();
    virtual void f48(float f, int a, int b, int c);
    int pad04[23];
    unsigned char f60;
};

extern "C" int fn_83000208(Obj_83000208 *self, unsigned char v)
{
    self->f60 = v;
    self->f48((float)v, 0x21, 0, 0);
    return 1;
}
