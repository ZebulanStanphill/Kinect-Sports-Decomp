// The configured labels name the payload RTTI and boost::any holder vtable.
extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);
extern "C" void *fn_8265C9E0(unsigned int);
extern "C" char lbl_831D7088[], lbl_831D7480[], lbl_821B16D0[];
struct Placeholder_8233F058 {
    virtual ~Placeholder_8233F058() {}
    virtual const type_info &type() const = 0;
    virtual Placeholder_8233F058 *clone() const = 0;
};
struct Holder_8233F058 { void *vtable; int held; };
struct Any_8233F058 { Placeholder_8233F058 *content; };
struct Source_8233F058 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void Get(unsigned int key, int *value);
};
static __forceinline int *cast_8233F058(Any_8233F058 *a) {
    return a && fn_82F64538(a->content ? &a->content->type() : (const type_info *)lbl_831D7088,
                          (const type_info *)lbl_831D7480)
        ? &((Holder_8233F058 *)a->content)->held : 0;
}
extern "C" void fn_8233F058(Source_8233F058 *s, unsigned int key, Any_8233F058 *a) {
    int *p = cast_8233F058(a);
    if (p != 0) {
        s->Get(key, p);
    } else {
        int v;
        s->Get(key, &v);
        Holder_8233F058 *storage = (Holder_8233F058 *)fn_8265C9E0(sizeof(Holder_8233F058));
        Holder_8233F058 *n;
        if (storage) { storage->vtable = lbl_821B16D0; storage->held = v; n = storage; }
        else { n = 0; }
        Placeholder_8233F058 *old = a->content;
        a->content = (Placeholder_8233F058 *)n;
        delete old;
    }
}
