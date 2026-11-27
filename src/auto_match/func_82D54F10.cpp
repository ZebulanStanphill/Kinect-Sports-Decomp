#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvTreeAgent.h"
extern "C" void fn_82D54F10(const hkpCdBody &a,const hkpCdBody &b,const hkpLinearCastCollisionInput &in,hkpCdPointCollector &c,hkpCdPointCollector *start) {
 hkpLinearCastCollisionInput flipped=in;
 flipped.m_path.m_quad=__vxor(in.m_path.m_quad,lbl_8209AB20);
 hkpSymmetricAgentFlipCastCollector fc(in.m_path,c);
 if(start) { hkpSymmetricAgentFlipCastCollector sf(in.m_path,*start); hkpBvTreeAgent::staticLinearCast(b,a,flipped,fc,&sf); }
 else hkpBvTreeAgent::staticLinearCast(b,a,flipped,fc,0);
}
