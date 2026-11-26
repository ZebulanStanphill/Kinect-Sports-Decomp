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
extern "C" void fn_82D5A348(const hkpCdBody &, const hkpCdBody &, const hkpLinearCastCollisionInput &,
                            hkpCdPointCollector &, hkpCdPointCollector *);
extern "C" void fn_82D5B050(void *self, const hkpCdBody &a, const hkpCdBody &b, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *start)
{
    hkpLinearCastCollisionInput copy = input;
    copy.m_path.setNeg4(input.m_path);
    hkpSymmetricAgentFlipCastCollector flipped(input.m_path, collector);

    if (start) {
        hkpSymmetricAgentFlipCastCollector flippedStart(input.m_path, *start);
        fn_82D5A348(b, a, copy, flipped, &flippedStart);
        return;
    }
    fn_82D5A348(b, a, copy, flipped, 0);
}
