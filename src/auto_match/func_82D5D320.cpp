#include "havok/hkBase.h"
#include "havok/hkpCollisionAgent.h"
class hkpSymmetricAgentFlipCastCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipCastCollector);
    hkpSymmetricAgentFlipCastCollector(const hkVector4 &path, hkpCdPointCollector &c)
    {
        m_path = path;
        m_collector = &c;
    }
    virtual void addCdPoint(const hkpCdPoint &point);

    hkVector4 m_path;                   // +0x10
    hkpCdPointCollector *m_collector;   // +0x20
};
extern "C" void fn_82D6C100(const hkpCdBody &,const hkpCdBody &,const hkpLinearCastCollisionInput &,hkpCdPointCollector &,hkpCdPointCollector *);
extern "C" void fn_82D5D320(const hkpCdBody &a,const hkpCdBody &b,const hkpLinearCastCollisionInput &in,hkpCdPointCollector &c,hkpCdPointCollector *start) {
 hkpLinearCastCollisionInput flipped=in;
 flipped.m_path.setNeg4(in.m_path);
 hkpSymmetricAgentFlipCastCollector fc(in.m_path,c);
 if(start) { hkpSymmetricAgentFlipCastCollector sf(in.m_path,*start); fn_82D6C100(b,a,flipped,fc,&sf); }
 else fn_82D6C100(b,a,flipped,fc,0);
}
