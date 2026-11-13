class Obj_82F90DB0 {
public:
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual long f10();
    char pad[0x54];
    int flag;
};

extern "C" void fn_82F90E28(Obj_82F90DB0 *self, long hr);

extern "C" long fn_82F90DB0(Obj_82F90DB0 *self)
{
    long hr;
    self->flag = 1;
    hr = self->f10();
    if (hr < 0) {
        fn_82F90E28(self, hr);
        return hr;
    }
    return 0;
}
