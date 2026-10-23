extern "C" unsigned char *fn_824475E0(void *param);

class Obj {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void call(void *arg, const unsigned char &v);
};

extern "C" void fn_82447660(Obj *o, void *param_2, void *param_3)
{
    unsigned char v = *fn_824475E0(param_3);
    o->call(param_2, v);
}
