// hkpSaveContactPointsUtil-style serialisation of an hkpAgent1nTrack: copies
// every 512-byte sector and records an hkpSerializedTrack1nInfo per entry.
#include "havok/hkBase.h"
extern "C" { void fn_82CE6310(hkMemoryAllocator *,void *,int,int); void fn_82CE63B0(hkMemoryAllocator *,void *,int); void *memcpy(void *,const void *,unsigned); }
class hkpSerializedTrack1nInfo {
public:
 HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE,hkpSerializedTrack1nInfo);
 hkpSerializedTrack1nInfo():parent(-1) {}
 ~hkpSerializedTrack1nInfo();
 hkArrayBase<int> a,b; int parent,offset;
};
struct Track {
 HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE,Track);
 Track():size(0) {}
 int size; char data[508];
};
struct Result { hkArrayBase<Track *> tracks; hkArrayBase<hkpSerializedTrack1nInfo *> infos; };
extern "C" int fn_82DF6CD0(char *,hkBool,void *,int *,void *,char **,hkpSerializedTrack1nInfo *);
// hkArrayUtil::constructWithCopy for POD types.
template<class T> static HK_FORCE_INLINE void constructWithCopy(T *t,int n,const T &tcopy) { for(int i=0;i<n;++i) t[i]=tcopy; }
template<class T> static HK_FORCE_INLINE void pushBack(hkArrayBase<T> *a,const T &value) {
 hkMemoryRouter *r=hkMemoryRouter::getInstancePtr();
 if(a->m_size==a->getCapacity()) fn_82CE63B0(&r->heap(),a,sizeof(T));
 constructWithCopy<T>(a->m_data+a->m_size,1,value); a->m_size++;
}
extern "C" int fn_82DF7AF8(hkArrayBase<Track *> *source,void *world,Result *result) {
 int n=source->m_size;
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 const int capacity=result->tracks.getCapacity();
 if(capacity<n) {
  int cap2=2*capacity;
  int newSize=(n<cap2)?cap2:n;
  fn_82CE6310(&alloc,&result->tracks,newSize,4);
 }
 for(int i=0;i<source->m_size;++i) {
  Track *t=source->m_data[i];
  char *end=(char *)t+t->size+16;
  for(char *p=(char *)t+16;p<end;) {
   char *out=0;int size=0; char scratch[8];
   hkpSerializedTrack1nInfo *info=new hkpSerializedTrack1nInfo;
   if(fn_82DF6CD0(p,hkBool(false),world,&size,scratch,&out,info)) {delete info;return 1;}
   if(info->a.m_size) { info->offset=out-(char *)t-16;info->parent=i;pushBack(&result->infos,info); }
   else delete info;
   p+=size;
  }
  hkMemoryRouter *r=hkMemoryRouter::getInstancePtr();
  if(result->tracks.m_size==result->tracks.getCapacity()) fn_82CE63B0(&r->heap(),&result->tracks,4);
  ++result->tracks.m_size;
  result->tracks.m_data[i]=new Track;
  memcpy(result->tracks.m_data[i],t,512);
 }
 return 0;
}
