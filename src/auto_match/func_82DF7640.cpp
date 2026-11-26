#include "havok/hkBase.h"
#include "havok/hkpSerializedAgentNnEntry.h"

// hkpSerializedAgentNnEntry's constructor is out of line (82DF86E0) and inlined here, so the unit defines it.
HK_FORCE_INLINE hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry()
    : m_bodyA(HK_NULL), m_bodyB(HK_NULL), m_bodyAId(hkUlong(-1)), m_bodyBId(hkUlong(-1)), m_useEntityIds(false)
{
    *(hkUint32 *)m_endianCheckBuffer = 0x103;
    m_version = 1;
}

struct Pair { void *agent; unsigned key; };
struct Sector {int pad[2];char *world;char rest[4];};
extern "C" { void fn_82CEA160(void *,hkMemoryAllocator *,void *,unsigned); int fn_82CEA220(void *,unsigned);void fn_83089E78(void *,hkArrayBase<Pair> *);int fn_82DF6F28(void *,void *,void *,hkpSerializedAgentNnEntry *);void fn_82DF3CE0(void *,hkpSerializedAgentNnEntry *); }
extern "C" void fn_82DF7640(void *world,Sector **sectors,int count,void *result) {
 char *base=sectors[0]->world;
 hkMapBase<unsigned,unsigned> map;
 map.reserve(hkMemoryRouter::getInstance().heap(),count);
 if(count>0) {
  int remaining=count;Sector **cursor=sectors;
  do {
   void *p=(char *)*cursor+16;
   fn_82CEA160(&map,&hkMemoryRouter::getInstance().heap(),p,0);
   {
    hkArray<Pair> pairs;
    fn_83089E78((char *)*cursor+16,&pairs);
    for(int i=0;i<pairs.m_size;++i) {
     Pair *pair=&pairs.m_data[i];
     int found=fn_82CEA220(&map,pair->key);
     if(found>map.m_hashMod) {
      hkpSerializedAgentNnEntry *entry=new hkpSerializedAgentNnEntry;
      if(fn_82DF6F28(world,pair->agent,*(void **)(base+0x78),entry)==0) fn_82DF3CE0(result,entry);
      entry->removeReference();
     }
    }
   }
   ++cursor;
  }while(--remaining);
 }
 map.clearAndDeallocate(hkMemoryRouter::getInstance().heap());
}
