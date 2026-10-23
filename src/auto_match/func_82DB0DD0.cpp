#include "havok/hkBase.h"
extern "C" const float lbl_82057518;
class __declspec(align(16)) hkKdTreeCastCollector { public: virtual ~hkKdTreeCastCollector() {} char pad[0x7c]; float fraction; hkKdTreeCastCollector(float f):fraction(f){} };
class hkpKdTreeWorldLinearCaster : public hkKdTreeCastCollector { public: hkpKdTreeWorldLinearCaster(float f):hkKdTreeCastCollector(f){} };
extern "C" void fn_83096B20(hkpKdTreeWorldLinearCaster *, void*, void*, void*, void*, void*, void*, void*, void*);
struct World { char pad[0xc]; void *aabbTree; void *tree; char pad2[0x10]; unsigned char hasAabb; };
namespace hkAabbTreeData { struct hkAabbTreeAabb {}; struct hkAabbTreeAabb16 {}; }
template<class A,class B> struct hkAabbTreeQueryUtils { class Collector { public: virtual ~Collector(){} }; };
using namespace hkAabbTreeData;
template<class A> class __declspec(align(16)) hkpAabbTreeWorldLinearCaster
 : public hkAabbTreeQueryUtils<hkAabbTreeAabb,unsigned short>::Collector,
 public hkAabbTreeQueryUtils<hkAabbTreeAabb16,unsigned short>::Collector,
 public hkAabbTreeQueryUtils<hkAabbTreeAabb,unsigned int>::Collector,
 public hkAabbTreeQueryUtils<hkAabbTreeAabb16,unsigned int>::Collector {
 public: HK_DECLARE_PLACEMENT_ALLOCATOR(); char pad[0x80]; float fraction;
 hkpAabbTreeWorldLinearCaster(float f):fraction(f){}
};
extern "C" void fn_830970B8(hkpAabbTreeWorldLinearCaster<hkAabbTreeAabb16>*,void*,void*,void*,void*,void*,void*,void*,void*);
extern "C" void fn_82DB0DD0(World *world,void*a,void*b,void*c,void*d,void*e,void*f,void*g) {
 const float maxFraction=lbl_82057518;
 if(world->tree) { hkpKdTreeWorldLinearCaster caster(maxFraction); fn_83096B20(&caster,world->tree,a,b,c,d,e,f,g); }
 if(world->hasAabb) { hkpAabbTreeWorldLinearCaster<hkAabbTreeAabb16> caster(maxFraction); fn_830970B8(&caster,world->aabbTree,a,b,c,d,e,f,g); }
}
