#include "havok/hkpCollisionInput.h"
#include "havok/hkpCdPointCollector.h"
class hkpCdBody;
// Kept local: the header's hkpSymmetricAgentFlipCastCollector initialises a reference m_collector before
// m_path, which reorders the constructor's stores; the game stores the collector after the path.
class hkpSymmetricAgentFlipCastCollector: public hkpCdPointCollector {
public:
 HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE,hkpSymmetricAgentFlipCastCollector);
 HK_FORCE_INLINE hkpSymmetricAgentFlipCastCollector(const hkVector4 &p,hkpCdPointCollector &c) { m_path=p; m_collector=&c; }
 virtual void addCdPoint(const hkpCdPoint &point);
 hkVector4 m_path; hkpCdPointCollector *m_collector;
};
extern "C" void fn_82D57B60(const hkpCdBody &,const hkpCdBody &,const hkpLinearCastCollisionInput &,hkpCdPointCollector &,hkpCdPointCollector *);
extern "C" void fn_82D54F10(const hkpCdBody &a,const hkpCdBody &b,const hkpLinearCastCollisionInput &in,hkpCdPointCollector &c,hkpCdPointCollector *start) {
 hkpLinearCastCollisionInput flipped=in;
 flipped.m_path.m_quad=__vxor(in.m_path.m_quad,lbl_8209AB20);
 hkpSymmetricAgentFlipCastCollector fc(in.m_path,c);
 if(start) { hkpSymmetricAgentFlipCastCollector sf(in.m_path,*start); fn_82D57B60(b,a,flipped,fc,&sf); }
 else fn_82D57B60(b,a,flipped,fc,0);
}
