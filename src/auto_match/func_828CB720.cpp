#include <exception>
#include <typeinfo>
namespace NW { class NetObjScopeItem_c { public: virtual void f(); }; }
extern "C" {
extern void *fn_8265C9E0(unsigned int size);
extern void fn_828B5608(void *);
extern int fn_828DF3D0(void *, const void *, int, int);
extern void fn_828E7140(void *out, void *item);
extern unsigned int lbl_82026458;
}
static __forceinline void *Item_ctor(void *p, int a, int b)
{
    fn_828DF3D0(p, &typeid(NW::NetObjScopeItem_c), a, b);
    *(void **)p = &lbl_82026458;
    fn_828B5608((char *)p + 0x10);
    return p;
}
extern "C" void *fn_828CB720(void *out, int a, int b)
{
    void *mem = fn_8265C9E0(0x18);
    void *p = mem ? Item_ctor(mem, a, b) : 0;
    fn_828E7140(out, p);
    return out;
}
