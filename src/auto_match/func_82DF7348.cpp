#include "havok/hkBase.h"
#include "havok/hkpSerializedAgentNnEntry.h"

struct Agent { unsigned char pad[3], size; };
struct Sector {
 char pad[0x58]; int lastSize; Agent **entries; int count;
};
struct World {
 char pad[0x28]; hkArrayBase<Sector *> sectors;
 void *arg1; int arg2;
 char pad3c[0x3c]; void *filter;
};
// hkpSerializedAgentNnEntry's constructor is out of line (82DF86E0) and inlined here, so the unit defines it.
HK_FORCE_INLINE hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry()
    : m_bodyA(HK_NULL), m_bodyB(HK_NULL), m_bodyAId(hkUlong(-1)), m_bodyBId(hkUlong(-1)), m_useEntityIds(false)
{
    *(hkUint32 *)m_endianCheckBuffer = 0x103;
    m_version = 1;
}

extern "C" void fn_82DB9F80(hkArrayBase<Sector *> *, hkMemoryAllocator *, int, int, void *, int);
extern "C" int fn_82DF6F28(void *, Agent *, void *, hkpSerializedAgentNnEntry *);
extern "C" void fn_82DF3CE0(void *, hkpSerializedAgentNnEntry *);
static HK_FORCE_INLINE void copy(hkArrayBase<Sector *> &to,const hkArrayBase<Sector *> &from) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (to.getCapacity()<from.m_size) {
  if ((to.m_capacityAndFlags & (int)0x80000000)==0)
   alloc.bufFree(to.m_data,to.getCapacity(),4);
  int capacity=from.m_size;
  to.m_data=(Sector **)alloc.bufAlloc(capacity,4);
  to.m_capacityAndFlags=capacity;
 }
 to.m_size=from.m_size;
 int count=to.m_size;
 Sector **source=from.m_data;
 Sector **dest=to.m_data;
 for (int i=0;i<count;++i) *dest++=*source++;
}
extern "C" void fn_82DF7348(void *self, World *world, void *output) {
 hkArray<Sector *> sectors;
 copy(sectors,world->sectors);
 int arg2=world->arg2;
 int count=sectors.m_size;
 void *arg1=world->arg1;
 fn_82DB9F80(&sectors,&hkMemoryRouter::getInstance().heap(),count,0,arg1,arg2);
 for (int i=0;i<sectors.m_size;++i) {
  int j=0;
  for (;j<sectors[i]->count;) {
   Agent *start=sectors[i]->entries[j++];
   Agent *agent=start;
   Agent *end;
   if (j==sectors[i]->count) end=(Agent *)((char *)start+sectors[i]->lastSize);
   else end=(Agent *)((char *)start+0x200);
   while (agent<end) {
    hkpSerializedAgentNnEntry *entry=new hkpSerializedAgentNnEntry;
    if (!fn_82DF6F28(self,agent,world->filter,entry)) fn_82DF3CE0(output,entry);
    entry->removeReference();
    agent=(Agent *)((char *)agent+agent->size);
   }
  }
 }
}
