class Obj_82F8E2E8 {
public:
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual int f24(int a, int b, int c, int d);
};

extern "C" void fn_82F8E2E8(Obj_82F8E2E8 *self, int b, int c, int d)
{
    self->f24(0, b, c, d);
}
