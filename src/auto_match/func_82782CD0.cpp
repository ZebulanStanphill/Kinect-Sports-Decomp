// Copies element src of a strided array to element dst through the element type's get/set interface.
struct Iface_82782CD0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void Set(char *dst, void *value);
    virtual void v5();
    virtual void *Get(char *src);
};
struct Desc_82782CD0 {
    int pad0;
    int stride;
    Iface_82782CD0 *iface;
};
struct Elem_82782CD0 {
    Iface_82782CD0 *iface;
    char *p;
    __forceinline void *Get() const { return iface->Get(p); }
    __forceinline void Set(void *v) const { iface->Set(p, v); }
};
struct Array_82782CD0 {
    int pad[2];
    char *data;
    Desc_82782CD0 *desc;
    __forceinline Elem_82782CD0 operator[](int i) { Elem_82782CD0 e; e.iface = desc->iface; e.p = data + desc->stride * i; return e; }
};
struct Ref_82782CD0 { Array_82782CD0 *array; void Copy(int dst, int src); };
void Ref_82782CD0::Copy(int dst, int src)
{
    Elem_82782CD0 d = (*array)[dst];
    Elem_82782CD0 s = (*array)[src];
    d.Set(s.Get());
}
