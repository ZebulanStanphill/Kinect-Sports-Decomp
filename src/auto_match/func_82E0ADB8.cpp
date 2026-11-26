#include "havok/hkClass.h"
#include "havok/hkBinaryPackfileReader.h"
struct ClassLocation { void *m_object; int m_sectionIndex; int m_offset; };
extern "C" hkClassMember *fn_82CEAFA8(void *,const char *);
extern "C" hkClass lbl_8323AEC8;
extern "C" char lbl_8204EF40[];
static HK_FORCE_INLINE ClassLocation &expandOne(hkArray<ClassLocation> &a) {
 hkMemoryAllocator &alloc=hkContainerHeapAllocator::get(&a);
 if(a.m_size==a.getCapacity())hkArrayUtil::_reserveMore(alloc,&a,sizeof(ClassLocation));
 return a.m_data[a.m_size++];
}
// A member of hkBinaryPackfileReader in Havok; it keeps its fn_ name, so it is written as a function of the reader.
static HK_FORCE_INLINE void findClasses(hkBinaryPackfileReader *self, hkArray<ClassLocation> &out) {
 if(self->m_header->m_fileVersion<4 && hkString::strCmp(self->getContentsVersion(),"Havok-4.0.0-b1")!=0) {
  int sec=self->getSectionIndex("__classindex__");
  if(sec>=0 && self->m_sections[sec].getDataSize()!=0 && self->m_sectionData[sec]!=0) {
   int *p=(int *)self->m_sectionData[sec];int count=self->m_sections[sec].getDataSize()/4;
   for(int i=0;i<count;i+=2) {
    int a=p[i];if(a==-1)break;int b=p[i+1];void *obj=self->getSectionDataByIndex(a,b);
    if(obj){ClassLocation &l=expandOne(out);l.m_object=obj;l.m_sectionIndex=a;l.m_offset=b;}
   }
  }
 } else {
  for(int i=0;i<self->m_header->m_numSections;++i) {
   if(self->m_sectionData[i]) {
    hkPackfileSectionHeader &s=self->m_sections[i];char *base=(char *)self->m_sectionData[i];
    int *v=(int *)(base+s.m_virtualFixupsOffset);
    for(int j=0;j<s.getFinishSize()/4;j+=3) {
     int src=v[j];if(src!=-1) {
      int b=v[j+1],c=v[j+2];if(hkString::strCmp((const char *)self->getSectionDataByIndex(b,c),"hkClass")==0){void *obj=base+src;ClassLocation &l=expandOne(out);l.m_object=obj;l.m_sectionIndex=b;l.m_offset=c;}
     }
    }
   }
  }
 }
 for(int i=0;i<out.m_size;++i) {
  void *obj=out.m_data[i].m_object;
  if(hkString::strCmp(static_cast<const hkClass *>(obj)->getName(),"hctAttributeDescription")==0) {
   hkClassMember *m=fn_82CEAFA8(obj,lbl_8204EF40);if(m->m_class==0)m->m_class=&lbl_8323AEC8;
  }
 }
}
extern "C" void fn_82E0ADB8(hkBinaryPackfileReader *self, hkArray<ClassLocation> &out) { findClasses(self, out); }
