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
public: hkpFlagCdBodyPairCollector() {m_earlyOut=false;} virtual void addCdBodyPair(const hkpCdBody&,const hkpCdBody&);
};
class hkpSimpleClosestContactCollector : public hkpCdPointCollector {
public:
 hkpSimpleClosestContactCollector() : m_hasHit(false) { m_distance=3.40282e+38f; }
 virtual void addCdPoint(const hkpCdPoint&);
 hkBool m_hasHit; char pad[0x23]; float m_distance; char tail[0x10];
};

typedef void (*Dispatch)(const hkpCdBody*,const hkpCdBody*,const hkpCollisionInput*,hkpCdBodyPairCollector*);
static HK_FORCE_INLINE Dispatch getDispatch(hkpCollisionDispatcher *d,int a,int b,int off) {
 unsigned char *p=(unsigned char*)d;
 unsigned idx=p[(a+13)*32+b];
 return *(Dispatch*)(p+idx*20+off);
}
extern "C" void fn_82D6EA18(const hkpCdBody &a, const hkpCdBody &b, const hkpCollisionInput &input, hkpCdBodyPairCollector &collector) {
 beginTimer("LthkpBvAgent","StcheckBvShape");
 {
 hkpCdBody body(&a);
 const hkpShape *shape=a.m_shape;
 body.setShape(*(const hkpShape**)((const char*)shape+0x10),-1);
 int type=b.m_shape->m_type;
 Dispatch dispatch=getDispatch(input.m_dispatcher,body.m_shape->m_type,type,4+0x9a0);
 hkpFlagCdBodyPairCollector c;
 dispatch(&body,&b,&input,&c);
 if (c.m_earlyOut) {
  beginTimer("Stchild");
  body.setShape(*(const hkpShape**)((const char*)shape+0x18),0);
  getDispatch(input.m_dispatcher,body.m_shape->m_type,type,4+0x9a0)(&body,&b,&input,&collector);
 }
 }
 beginTimer("lt");
}
