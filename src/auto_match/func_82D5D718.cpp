#include "havok/hkpCollisionInput.h"
#include "havok/hkpCdPointCollector.h"
// Kept local: the header's hkpSymmetricAgentFlipCastCollector initialises a reference m_collector before
// m_path, which reorders the constructor's stores; the game stores the collector after the path.
class hkpSymmetricAgentFlipCastCollector:public hkpCdPointCollector {public:
 HK_FORCE_INLINE hkpSymmetricAgentFlipCastCollector(const hkVector4 &v,hkpCdPointCollector *target){m_path.m_quad=v.m_quad;m_collector=target;}
 virtual void addCdPoint(const hkpCdPoint &point);
 hkVector4 m_path;hkpCdPointCollector *m_collector;
};
extern "C" void fn_82D5C4B0(void*,void*,hkpLinearCastCollisionInput*,hkpCdPointCollector*,hkpCdPointCollector*);
extern "C" void fn_82D5D718(void *self,void *a,void *b,const hkpLinearCastCollisionInput *input,hkpCdPointCollector *collector,hkpCdPointCollector *start){
 hkpLinearCastCollisionInput copy=*input;
 copy.m_path.m_quad=__vxor(input->m_path.m_quad,lbl_8209AB20);
 hkpSymmetricAgentFlipCastCollector flipped(input->m_path,collector);

 if(start){hkpSymmetricAgentFlipCastCollector flippedStart(input->m_path,start);fn_82D5C4B0(b,a,&copy,&flipped,&flippedStart);return;}
 fn_82D5C4B0(b,a,&copy,&flipped,0);
}
