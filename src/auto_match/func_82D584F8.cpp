#include "havok/hkpCdPointCollector.h"
#include "havok/hkpCollisionInput.h"
// Local copy of hkpSymmetricAgentFlipCastCollector: this function stores the path before the target
// collector, which the header's constructor (reference member set in the initializer list) does not.
class hkpSymmetricAgentFlipCastCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSymmetricAgentFlipCastCollector);
    HK_FORCE_INLINE hkpSymmetricAgentFlipCastCollector(const hkVector4 &p, void *target)
    {
        m_path = p;
        m_collector = target;
    }
    virtual void addCdPoint(const hkpCdPoint &point);

    hkVector4 m_path;   // +0x10
    void *m_collector;  // +0x20
};
extern "C" void fn_82D57B60(void*,void*,hkpLinearCastCollisionInput*,hkpCdPointCollector*,hkpCdPointCollector*);
extern "C" void fn_82D584F8(void *self,void *a,void *b,const hkpLinearCastCollisionInput *input,void *collector,void *start){
 hkpLinearCastCollisionInput copy=*input;
 copy.m_path.setNeg4(input->m_path);
 hkpSymmetricAgentFlipCastCollector flipped(input->m_path,collector);

 if(start){hkpSymmetricAgentFlipCastCollector flippedStart(input->m_path,start);fn_82D57B60(b,a,&copy,&flipped,&flippedStart);return;}
 fn_82D57B60(b,a,&copy,&flipped,0);
}
