#include "havok/hkBase.h"
extern "C" const float lbl_82057518;
class __declspec(align(16)) hkKdTreeCastCollector { public: virtual ~hkKdTreeCastCollector() {} char pad[0x7c]; float fraction; hkKdTreeCastCollector():fraction(lbl_82057518){} };
class hkpKdTreeWorldLinearCaster : public hkKdTreeCastCollector {};
extern "C" void fn_83096B20(hkpKdTreeWorldLinearCaster *, void*, void*, void*, void*, void*, void*, void*, void*);
struct World { char pad[0x10]; void *tree; };
extern "C" void fn_82DB33A0(World *world,void*a,void*b,void*c,void*d,void*e,void*f,void*g) {
 hkpKdTreeWorldLinearCaster caster;
 fn_83096B20(&caster,world->tree,a,b,c,d,e,f,g);
}
