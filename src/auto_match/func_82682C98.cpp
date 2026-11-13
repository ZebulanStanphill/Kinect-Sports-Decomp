struct Weak_82682C98 {
    void *rep;
    void *obj;
    unsigned char c;
};

struct Value_82682C98 {
    unsigned char type;
    int data[4];
};

struct Owner_82682C98 {
    char pad[0x13c];
    int field;
};

class Source_82682C98 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual bool get(Owner_82682C98 **owner, int *key, Value_82682C98 *out);
};

extern "C" Weak_82682C98 *fn_82696B20(Weak_82682C98 *dst, Value_82682C98 *src, int flags);
extern "C" void fn_82696330(Value_82682C98 *v);

extern "C" Weak_82682C98 *fn_82682C98(Weak_82682C98 *out, Source_82682C98 *src, Owner_82682C98 **owner)
{
    Value_82682C98 v;

    v.type = 0;
    if (src->get(owner, &(*owner)->field, &v)) {
        fn_82696B20(out, &v, 0);
    } else {
        out->c = 0;
        out->rep = 0;
        out->obj = 0;
    }
    fn_82696330(&v);
    return out;
}
