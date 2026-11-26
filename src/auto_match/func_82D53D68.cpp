#include "havok/hkBase.h"
#include "havok/hkpCdPointCollector.h"
#include "havok/hkpCollisionInput.h"
class hkpCdBody;
// hkpSymmetricAgentFlipCastCollector as in havok/hkpSymmetricAgent.h, but the collector is stored after the path
// (a pointer assigned in the constructor body, not a reference in the initializer list).
class hkpSymmetricAgentFlipCastCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipCastCollector);
    HK_FORCE_INLINE hkpSymmetricAgentFlipCastCollector(const hkVector4 &path, hkpCdPointCollector &c)
    {
        m_path = path;
        m_collector = &c;
    }
    virtual void addCdPoint(const hkpCdPoint &point);

    hkVector4 m_path;                   // +0x10
    hkpCdPointCollector *m_collector;   // +0x20
};
extern "C" void fn_82D55500(const hkpCdBody &,const hkpCdBody &,const hkpLinearCastCollisionInput &,hkpCdPointCollector &,hkpCdPointCollector *);
extern "C" void fn_82D53D68(const hkpCdBody &a,const hkpCdBody &b,const hkpLinearCastCollisionInput &in,hkpCdPointCollector &c,hkpCdPointCollector *start) {
 hkpLinearCastCollisionInput flipped=in;
 flipped.m_path.setNeg4(in.m_path);
 hkpSymmetricAgentFlipCastCollector fc(in.m_path,c);
 if(start) { hkpSymmetricAgentFlipCastCollector sf(in.m_path,*start); fn_82D55500(b,a,flipped,fc,&sf); }
 else fn_82D55500(b,a,flipped,fc,0);
}
