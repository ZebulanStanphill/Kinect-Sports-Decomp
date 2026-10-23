#include "havok/hkBase.h"
#include "havok/hkpCollisionFilter.h"
extern "C" unsigned __int64 __mftb();
struct TimerEntry { const char *name; unsigned int time, unused; };
struct TimerStream { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; };
extern "C" TimerStream *KeTlsGetValue(unsigned int);
extern "C" unsigned int lbl_8323B4A0;
extern "C" float lbl_82057518;
static HK_FORCE_INLINE void timer(const char *name) {
 TimerStream *stream=KeTlsGetValue(lbl_8323B4A0);
 if (stream->current < stream->end) {
  TimerEntry *entry=stream->current;
  entry->name=name;
  entry->time=(unsigned int)__mftb();
  stream->current=entry+1;
 }
}
struct CollisionInput { char pad[0x70]; void *config; };
class TreeManager { public:
 virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual void slot3();
 virtual unsigned char isUpToDate(); virtual void slot5(); virtual void slot6(); virtual void slot7();
 virtual void linearCast(const void *collA, const void *input, const hkpCollidableCollidableFilter *filter, const CollisionInput *ci, void *config, void *castCollector, void *startCollector);
};
struct World { char pad[0x58]; void *bp; TreeManager *tree; char pad60[0x18]; CollisionInput *input; hkpCollisionFilter *filter; };
class hkpBroadPhaseCastCollector { public: virtual ~hkpBroadPhaseCastCollector() {} };
class hkpWorldLinearCaster : public hkpBroadPhaseCastCollector {
public:
 hkpWorldLinearCaster() { tol = lbl_82057518; }
 char pad[0x7c]; float tol;
 char tail[0xc];
};
extern "C" void fn_83089BB8(hkpWorldLinearCaster *, void *, const void *, const void *, const hkpCollidableCollidableFilter *, const CollisionInput *, void *, void *, void *, void *);
extern "C" void fn_82D820E0(World *world, const void *collA, const void *input, void *castCollector, void *startCollector) {
 timer("TtworldLinCast");
 if (world->tree && world->tree->isUpToDate()) {
  world->tree->linearCast(collA,input,world->filter,world->input,world->input->config,castCollector,startCollector);
 } else {
  hkpWorldLinearCaster caster;
  fn_83089BB8(&caster,world->bp,collA,input,world->filter,world->input,world->input->config,0,castCollector,startCollector);
 }
 timer("Et");
}
