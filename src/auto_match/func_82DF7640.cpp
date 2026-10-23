#include "havok/hkBase.h"
struct hkpSimpleContactConstraintDataInfo { unsigned short flags,index; int data[7]; hkpSimpleContactConstraintDataInfo():flags(0),index(3) {for(int i=0;i<7;++i) data[i]=0;} };
struct hkpSimpleContactConstraintAtom { unsigned short type;char pad[14];hkpSimpleContactConstraintDataInfo info; hkpSimpleContactConstraintAtom():type(22) {} };
struct hkpSerializedTrack1nInfo { hkArray<void *> sectors; hkArray<void *> subTracks; };
class hkpSerializedAgentNnEntry : public hkReferencedObject {
public:
 HK_FORCE_INLINE hkpSerializedAgentNnEntry():a(0),b(0),c(-1),d(-1),flag(false),endian(0x103),version(1) {}
 void *a,*b; unsigned long c,d;hkBool flag;char pad[7];
 hkpSimpleContactConstraintAtom atom;
 hkArray<unsigned char> propertiesStream; hkArray<int> contactPoints; hkArray<unsigned char> cpIdMgr;
 unsigned char nnEntryData[128];
 hkpSerializedTrack1nInfo trackInfo;
 int endian, version; char pad3[12];
};
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
