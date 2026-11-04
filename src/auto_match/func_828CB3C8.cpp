#include <exception>
#include <typeinfo>
namespace NW { class NetObjScopeItem_c { public: virtual void f(); }; }
extern "C" {
extern int fn_828B5580(void *, int);
extern int fn_828DF3D0(void *, const void *, int, int);
extern unsigned int lbl_82026458;

void *fn_828CB3C8(void *p, int a, int b, int c)
{
  fn_828DF3D0(p, &typeid(NW::NetObjScopeItem_c), a, b);
  *(void **)p = &lbl_82026458;
  fn_828B5580((char *)p + 0x10, c);
  return p;
}
}
