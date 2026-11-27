// hkpBvAgent::linearCast (Physics/Collide/Agent/CompoundAgent/Bv/hkpBvAgent.cpp), its vtable's slot +0x14: asks the bounding
// volume agent first and, when the bounding volume shapes collide, the child agent (created on first use).
#include "havok/hkpBvAgent.h"
#include "havok/hkpBvShape.h"
#include "havok/hkpSimpleClosestContactCollector.h"
#include "havok/hkpCdBodyPairCollector.h"
#include "havok/hkpCollisionDispatcher.h"


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
void hkpBvAgent::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
{
 beginTimer("LthkpBvAgent","StcheckBvShape");
 const hkpBvShape *bvShape=static_cast<const hkpBvShape *>(bodyA.getShape());
 hkpCdBody newA(&bodyA);
 newA.setShape(bvShape->getBoundingVolumeShape(),HK_INVALID_SHAPE_KEY);
 hkpSimpleClosestContactCollector checker;
 m_boundingVolumeAgent->linearCast(newA,bodyB,input,checker,&checker);
 if (checker.m_hasHit) {
  beginTimer("Stchild");
  newA.setShape(bvShape->getChildShape(),0);
  if (!m_childAgent) {
   m_childAgent=input.m_dispatcher->getNewCollisionAgent(newA,bodyB,input,m_contactMgr);
  }
  m_childAgent->linearCast(newA,bodyB,input,collector,startCollector);
 }
 beginTimer("lt");
}
