// The configured labels name the payload RTTI and boost::any holder vtable.
extern "C" unsigned char fn_82F64538(const type_info *, const type_info *);
extern "C" void *fn_8265C9E0(unsigned int);
extern "C" char lbl_831D7088[], lbl_831D70C4[], lbl_82197B20[];
struct Placeholder_82249B68 {
    virtual ~Placeholder_82249B68() {}
    virtual const type_info &type() const = 0;
    virtual Placeholder_82249B68 *clone() const = 0;
};
struct Holder_82249B68 { void *vtable; int held; };
struct Any_82249B68 { Placeholder_82249B68 *content; };
struct Source_82249B68 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void Get(unsigned int key, int *value);
};
static __forceinline int *cast_82249B68(Any_82249B68 *a) {
    return a && fn_82F64538(a->content ? &a->content->type() : (const type_info *)lbl_831D7088,
                          (const type_info *)lbl_831D70C4)
        ? &((Holder_82249B68 *)a->content)->held : 0;
}
extern "C" void fn_82249B68(Source_82249B68 *s, unsigned int key, Any_82249B68 *a) {
    int *p = cast_82249B68(a);
    if (p != 0) {
        s->Get(key, p);
    } else {
        int v;
        s->Get(key, &v);
        Holder_82249B68 *storage = (Holder_82249B68 *)fn_8265C9E0(sizeof(Holder_82249B68));
        Holder_82249B68 *n;
        if (storage) { storage->vtable = lbl_82197B20; storage->held = v; n = storage; }
        else { n = 0; }
        Placeholder_82249B68 *old = a->content;
        a->content = (Placeholder_82249B68 *)n;
        delete old;
    }
}
