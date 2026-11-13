struct Weak_826AB6F8 {
    void *rep;
    void *obj;
    unsigned char c;
};

struct Value_826AB6F8 {
    unsigned char type;
    int data[4];
};

struct Owner_826AB6F8 {
    char pad[0x138];
    int field;
};

class Source_826AB6F8 {
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
    virtual bool get(Owner_826AB6F8 **owner, int *key, Value_826AB6F8 *out);
};

extern "C" Weak_826AB6F8 *fn_82696B20(Weak_826AB6F8 *dst, Value_826AB6F8 *src, int flags);
extern "C" void fn_82696330(Value_826AB6F8 *v);

extern "C" Weak_826AB6F8 *fn_826AB6F8(Weak_826AB6F8 *out, Source_826AB6F8 *src, Owner_826AB6F8 **owner)
{
    Value_826AB6F8 v;

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
