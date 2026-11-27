#include "havok/hkBase.h"
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpHeightFieldAgent.h"
extern "C" void fn_82D5AAB0(const hkpCdBody &a,const hkpCdBody &b,const hkpLinearCastCollisionInput &in,hkpCdPointCollector &c,hkpCdPointCollector *start) {
 hkpLinearCastCollisionInput flipped=in;
 flipped.m_path.setNeg4(in.m_path);
 hkpSymmetricAgentFlipCastCollector fc(in.m_path,c);
 if(start) { hkpSymmetricAgentFlipCastCollector sf(in.m_path,*start); hkpHeightFieldAgent::staticLinearCast(b,a,flipped,fc,&sf); }
 else hkpHeightFieldAgent::staticLinearCast(b,a,flipped,fc,0);
}
