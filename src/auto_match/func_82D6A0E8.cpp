#include "havok/hkBase.h"
#include "havok/hkpPredGskfAgent.h"
extern "C" hkpGskBaseAgent *fn_82D6A0E8(const hkpCdBody &a,const hkpCdBody &b,const void *input,hkpContactMgr *m) {
 if (m) return new hkpPredGskfAgent(a,b,m);
 return new hkpGskBaseAgent(a,b,0);
}
