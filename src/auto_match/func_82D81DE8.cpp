#include "havok/hkBase.h"
extern "C" unsigned __int64 __mftb();
struct TimerEntry { const char *name; unsigned int time, unused; };
struct TimerStream { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; };
extern "C" TimerStream *KeTlsGetValue(unsigned int);
extern "C" unsigned int lbl_8323B4A0;
static HK_FORCE_INLINE void timer(const char *name) {
 TimerStream *stream=KeTlsGetValue(lbl_8323B4A0);
 if (stream->current < stream->end) {
  TimerEntry *entry=stream->current;
  entry->name=name;
  entry->time=(unsigned int)__mftb();
  stream->current=entry+1;
 }
}
class Broadphase { public:
 virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual void slot3();
 virtual unsigned char enabled(); virtual void slot5();
 virtual void castCollector(void *,void *,void *);
 virtual void castRay(void *,void *,void *);
};
struct World { char pad[0x58]; void *bp; Broadphase *special; char pad60[0x1c]; void *filter; };
class hkpBroadPhaseCastCollector { public: virtual ~hkpBroadPhaseCastCollector() {} };
class hkpSimpleWorldRayCaster : public hkpBroadPhaseCastCollector {
public:
 hkpSimpleWorldRayCaster() : a(0), b(0) {}
 char pad[44]; void *a, *b;
 char tail[8];
};
extern "C" void fn_83089730(hkpSimpleWorldRayCaster *,void *,void *,void *,int,void *);
extern "C" void fn_82D81DE8(World *world, void *input, void *output) {
 timer("TtworldCastRay");
 if (world->special && world->special->enabled()) {
  world->special->castRay(input,world->filter,output);
 } else {
  hkpSimpleWorldRayCaster caster;
  fn_83089730(&caster,world->bp,input,world->filter,0,output);
 }
 timer("Et");
}
