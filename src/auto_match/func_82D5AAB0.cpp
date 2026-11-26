#include "havok/hkBase.h"
#include "havok/hkpCdPointCollector.h"
#include "havok/hkpCollisionInput.h"
class hkpCdBody;
// Local copy of hkpSymmetricAgentFlipCastCollector: this function stores the path before the target
// collector, which the header's reference member (set in the initializer list) cannot reproduce.
class hkpSymmetricAgentFlipCastCollector: public hkpCdPointCollector {
public:
 HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE,hkpSymmetricAgentFlipCastCollector);
 HK_FORCE_INLINE hkpSymmetricAgentFlipCastCollector(const hkVector4 &p,hkpCdPointCollector &c) { m_path=p; m_collector=&c; }
 virtual void addCdPoint(const hkpCdPoint &point);
 hkVector4 m_path; hkpCdPointCollector *m_collector;
};
extern "C" void fn_82D5A348(const hkpCdBody &,const hkpCdBody &,const hkpLinearCastCollisionInput &,hkpCdPointCollector &,hkpCdPointCollector *);
extern "C" void fn_82D5AAB0(const hkpCdBody &a,const hkpCdBody &b,const hkpLinearCastCollisionInput &in,hkpCdPointCollector &c,hkpCdPointCollector *start) {
 hkpLinearCastCollisionInput flipped=in;
 flipped.m_path.setNeg4(in.m_path);
 hkpSymmetricAgentFlipCastCollector fc(in.m_path,c);
 if(start) { hkpSymmetricAgentFlipCastCollector sf(in.m_path,*start); fn_82D5A348(b,a,flipped,fc,&sf); }
 else fn_82D5A348(b,a,flipped,fc,0);
}
