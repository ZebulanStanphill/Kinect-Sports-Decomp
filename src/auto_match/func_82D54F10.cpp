#include "havok/hkBase.h"
#include "havok/hkVector4.h"
class hkpCdBody; struct hkpLinearCastCollisionInput { unsigned __int64 data[10]; hkVector4 path; unsigned __int64 extra[2]; };
class hkpCdPointCollector { public: virtual ~hkpCdPointCollector() {} virtual void addCdPoint(const void *); virtual void reset(); float distance; };
class hkpSymmetricAgentFlipCastCollector: public hkpCdPointCollector {
public:
 HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE,hkpSymmetricAgentFlipCastCollector);
 HK_FORCE_INLINE hkpSymmetricAgentFlipCastCollector(const hkVector4 &p,hkpCdPointCollector &c) { distance=3.40282e+38f; path=p; target=&c; }
 virtual void addCdPoint(const void *);
 hkVector4 path; hkpCdPointCollector *target;
};
extern "C" void fn_82D57B60(const hkpCdBody &,const hkpCdBody &,const hkpLinearCastCollisionInput &,hkpCdPointCollector &,hkpCdPointCollector *);
extern "C" void fn_82D54F10(const hkpCdBody &a,const hkpCdBody &b,const hkpLinearCastCollisionInput &in,hkpCdPointCollector &c,hkpCdPointCollector *start) {
 hkpLinearCastCollisionInput flipped=in;
 flipped.path.m_quad=__vxor(in.path.m_quad,lbl_8209AB20);
 hkpSymmetricAgentFlipCastCollector fc(in.path,c);
 if(start) { hkpSymmetricAgentFlipCastCollector sf(in.path,*start); fn_82D57B60(b,a,flipped,fc,&sf); }
 else fn_82D57B60(b,a,flipped,fc,0);
}
