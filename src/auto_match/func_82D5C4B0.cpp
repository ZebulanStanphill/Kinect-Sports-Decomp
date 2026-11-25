#include "havok/hkpCdPointCollector.h"
#include "havok/hkpCdBodyPairCollector.h"
#include "havok/hkpCollisionDispatcher.h"

class hkpConstraintOwner;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;

extern "C" unsigned __int64 __mftb();
struct TimerEntry { const char *name; unsigned time, unused; };
struct TimerStream { void *pad; TimerEntry *next; void *pad2; TimerEntry *end; };
extern "C" TimerStream *KeTlsGetValue(unsigned);
extern "C" unsigned lbl_8323B4A0;
static HK_FORCE_INLINE void beginTimer(const char *name, const char *split=0) {
 TimerStream *s=KeTlsGetValue(lbl_8323B4A0);
 if(s->next<s->end) {
  TimerEntry *e=s->next;
  e->name=name;
  if(split) ((const char**)e)[3]=split;
  e->time=(unsigned)__mftb();
  s->next=(TimerEntry*)((char*)e+(split?16:12));
 }
}
class hkpFlagCdBodyPairCollector : public hkpCdBodyPairCollector {
public: virtual void addCdBodyPair(const hkpCdBody&,const hkpCdBody&);
};
class hkpSimpleClosestContactCollector : public hkpCdPointCollector {
public:
 hkpSimpleClosestContactCollector() : m_hasHit(false) { m_distance=3.40282e+38f; m_earlyOutDistance=3.40282e+38f; }
 virtual void addCdPoint(const hkpCdPoint&);
 hkBool m_hasHit; char pad[0x23]; float m_distance; char tail[0x8];
};

extern "C" void fn_82D75FD0(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &,hkpCdPointCollector &,hkpCdPointCollector *);
extern "C" void fn_82D5D320(const hkpCdBody &,const hkpCdBody &,const hkpCollisionInput &,hkpCdPointCollector &,hkpCdPointCollector *);
extern "C" void fn_82D5C4B0(const hkpCdBody &a,const hkpCdBody &b,const hkpCollisionInput &i,hkpCdPointCollector &out,hkpCdPointCollector *start) {
 beginTimer("LtCvsListAgent","StcheckHull");
 {
 hkpSimpleClosestContactCollector c;
 fn_82D75FD0(a,b,i,c,&c);
 if(c.m_hasHit) { beginTimer("Stchild"); fn_82D5D320(a,b,i,out,start); }
 }
 beginTimer("lt");
}
