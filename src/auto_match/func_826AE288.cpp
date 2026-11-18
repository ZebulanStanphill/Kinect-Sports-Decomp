struct Weak_826AE288 {
    void *rep;
    void *obj;
    unsigned char c;
};

struct Value_826AE288 {
    unsigned char type;
    int data[3];
};

struct Owner_826AE288;

class Source_826AE288
{
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
    virtual bool get(Owner_826AE288 **owner, int *key, Value_826AE288 *out);
};

struct Host_826AE288 {
    char pad[0x10];
    Source_826AE288 source; // 0x10
};

struct Owner_826AE288 {
    int slots[0xa8];
    Host_826AE288 *host; // 0x2a0
};

struct Context_826AE288 {
    char pad[0x78];
    Owner_826AE288 *owner; // 0x78
};

extern "C" Weak_826AE288 *fn_82696B20(Weak_826AE288 *dst, Value_826AE288 *src, Context_826AE288 *context);
extern "C" void fn_82696330(Value_826AE288 *v);

static __forceinline unsigned char IsObject_826AE288(const Value_826AE288 *v)
{
    return v->type == 8 || v->type == 11;
}

extern "C" Weak_826AE288 *fn_826AE288(Weak_826AE288 *out, Context_826AE288 *context, int index)
{
    Value_826AE288 v;

    v.type = 0;
    if (context->owner->host->source.get(&context->owner, &context->owner->slots[index + 2], &v) &&
        IsObject_826AE288(&v)) {
        fn_82696B20(out, &v, context);
    } else {
        out->c = 0;
        out->rep = 0;
        out->obj = 0;
    }
    fn_82696330(&v);
    return out;
}
