#include "havok/hkBase.h"
struct Agent { unsigned char pad[3], size; };
struct Sector {
 char pad[0x58]; int lastSize; Agent **entries; int count;
};
struct World {
 char pad[0x28]; hkArrayBase<Sector *> sectors;
 void *arg1; int arg2;
 char pad3c[0x3c]; void *filter;
};
struct ContactAtomHeader {
 unsigned short type;
 char pad[14];
 ContactAtomHeader() : type(22) {}
};
struct ContactData {
 unsigned short a,b;
 unsigned int words[7];
 ContactData() : a(0),b(3) { for(int i=0;i<7;++i) words[i]=0; }
};
struct ContactAtom : ContactAtomHeader { ContactData data; };
struct Tail {
 hkArray<int> a,b;
 int kind,count;
 Tail() : kind(0x103),count(1) {}
};
struct __declspec(align(16)) hkpSerializedAgentNnEntry : hkReferencedObject {
 void *a,*b;
 unsigned int x,y;
 hkBool flag;
 char pad19[7];
 ContactAtom atom;
 hkArray<int> arrayA, arrayB, arrayC;
 char pad74[0x80];
 Tail state;
 char tail[12];
 hkpSerializedAgentNnEntry() : a(0),b(0),x(-1),y(-1),flag(0) {}
};
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
