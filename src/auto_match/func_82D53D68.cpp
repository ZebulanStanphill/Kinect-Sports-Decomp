#include "havok/hkBase.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" __vector4 __vxor(__vector4, __vector4);
extern "C" __vector4 __vspltw(__vector4, unsigned int);
extern "C" __vector4 __vaddfp(__vector4, __vector4);
extern "C" __vector4 __vsubfp(__vector4, __vector4);
extern "C" __vector4 __vmulfp(__vector4, __vector4);
class hkVector4 { public:
 HK_FORCE_INLINE void operator=(const hkVector4 &v) { q=v.q; }
 HK_FORCE_INLINE void setZero() { q=__vxor(q,q); }
 HK_FORCE_INLINE void setAll(float x) { q.f[0]=x; q=__vspltw(q,0); }
 __vector4 q;
};

class hkpCdBody; struct hkpLinearCastCollisionInput { unsigned __int64 data[10]; hkVector4 path; unsigned __int64 extra[2]; };
class hkpCdPointCollector { public: virtual ~hkpCdPointCollector() {} virtual void addCdPoint(const void *); virtual void reset(); float distance; };
extern "C" const float lbl_82134508;
extern "C" const __vector4 lbl_8209AB20;
class hkpSymmetricAgentFlipCastCollector: public hkpCdPointCollector {
public:
 HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE,hkpSymmetricAgentFlipCastCollector);
 HK_FORCE_INLINE hkpSymmetricAgentFlipCastCollector(const hkVector4 &p,hkpCdPointCollector &c) { distance=lbl_82134508; path=p; target=&c; }
 virtual void addCdPoint(const void *);
 hkVector4 path; hkpCdPointCollector *target;
};
extern "C" void fn_82D55500(const hkpCdBody &,const hkpCdBody &,const hkpLinearCastCollisionInput &,hkpCdPointCollector &,hkpCdPointCollector *);
extern "C" void fn_82D53D68(const hkpCdBody &a,const hkpCdBody &b,const hkpLinearCastCollisionInput &in,hkpCdPointCollector &c,hkpCdPointCollector *start) {
 hkpLinearCastCollisionInput flipped=in;
 flipped.path.q=__vxor(in.path.q,lbl_8209AB20);
 hkpSymmetricAgentFlipCastCollector fc(in.path,c);
 if(start) { hkpSymmetricAgentFlipCastCollector sf(in.path,*start); fn_82D55500(b,a,flipped,fc,&sf); }
 else fn_82D55500(b,a,flipped,fc,0);
}
