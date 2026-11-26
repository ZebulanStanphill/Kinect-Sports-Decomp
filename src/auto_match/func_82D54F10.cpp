#include "havok/hkpSymmetricAgent.h"
extern "C" void fn_82D57B60(const hkpCdBody &,const hkpCdBody &,const hkpLinearCastCollisionInput &,hkpCdPointCollector &,hkpCdPointCollector *);
extern "C" void fn_82D54F10(const hkpCdBody &a,const hkpCdBody &b,const hkpLinearCastCollisionInput &in,hkpCdPointCollector &c,hkpCdPointCollector *start) {
 hkpLinearCastCollisionInput flipped=in;
 flipped.m_path.m_quad=__vxor(in.m_path.m_quad,lbl_8209AB20);
 hkpSymmetricAgentFlipCastCollector fc(in.m_path,c);
 if(start) { hkpSymmetricAgentFlipCastCollector sf(in.m_path,*start); fn_82D57B60(b,a,flipped,fc,&sf); }
 else fn_82D57B60(b,a,flipped,fc,0);
}
