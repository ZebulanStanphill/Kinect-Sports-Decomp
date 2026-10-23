#include "havok/hkBase.h"
struct hkPackfileHeader { int m_magic[2]; int m_userTag; int m_fileVersion; int m_layoutRules; int m_numSections; int m_contentsSectionIndex; int m_contentsSectionOffset; };
struct hkPackfileSectionHeader {
 char m_sectionTag[19]; char m_nullByte; int m_absoluteDataStart; int m_localFixupsOffset; int m_globalFixupsOffset;
 int m_virtualFixupsOffset; int m_exportsOffset; int m_importsOffset; int m_endOffset;
 HK_FORCE_INLINE int getDataSize() const { return m_localFixupsOffset; }
 HK_FORCE_INLINE int getVirtualSize() const { return m_exportsOffset - m_virtualFixupsOffset; }
};
struct ClassLocation { void *m_object; int m_sectionIndex; int m_offset; };
class hkBinaryPackfileReader { public:
 virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();
 virtual const char *getContentsVersion();virtual void v11();virtual void v12();virtual void v13();virtual int getSectionIndex(const char *);virtual void *getClassByName(int,int); HK_FORCE_INLINE void findClasses(hkArray<ClassLocation> &out);
 char pad[0x18]; hkPackfileHeader *m_header; hkPackfileSectionHeader *m_sections; void **m_sectionData;
};
extern "C" {int fn_82CFBBF0(const char *,const char *);const char *fn_82CEAC20(void *);void fn_82CE63B0(hkMemoryAllocator *,void *,int);}
struct hkClassMember {int a;void *m_enum;};
extern "C" hkClassMember *fn_82CEAFA8(void *,const char *);
extern "C" char lbl_8323AEC8[];
extern "C" char lbl_8204EF40[];
static HK_FORCE_INLINE ClassLocation &expandOne(hkArray<ClassLocation> &a) {
 hkMemoryAllocator &alloc=hkContainerHeapAllocator::get(&a);
 if(a.m_size==a.getCapacity())fn_82CE63B0(&alloc,&a,sizeof(ClassLocation));
 return a.m_data[a.m_size++];
}
HK_FORCE_INLINE void hkBinaryPackfileReader::findClasses(hkArray<ClassLocation> &out) {
 if(m_header->m_fileVersion<4 && fn_82CFBBF0(getContentsVersion(),"Havok-4.0.0-b1")!=0) {
  int sec=getSectionIndex("__classindex__");
  if(sec>=0 && m_sections[sec].getDataSize()!=0 && m_sectionData[sec]!=0) {
   int *p=(int *)m_sectionData[sec];int count=m_sections[sec].getDataSize()/4;
   for(int i=0;i<count;i+=2) {
    int a=p[i];if(a==-1)break;int b=p[i+1];void *obj=getClassByName(a,b);
    if(obj){ClassLocation &l=expandOne(out);l.m_object=obj;l.m_sectionIndex=a;l.m_offset=b;}
   }
  }
 } else {
  for(int i=0;i<m_header->m_numSections;++i) {
   if(m_sectionData[i]) {
    hkPackfileSectionHeader &s=m_sections[i];char *base=(char *)m_sectionData[i];
    int *v=(int *)(base+s.m_virtualFixupsOffset);
    for(int j=0;j<s.getVirtualSize()/4;j+=3) {
     int src=v[j];if(src!=-1) {
      int b=v[j+1],c=v[j+2];if(fn_82CFBBF0((const char *)getClassByName(b,c),"hkClass")==0){void *obj=base+src;ClassLocation &l=expandOne(out);l.m_object=obj;l.m_sectionIndex=b;l.m_offset=c;}
     }
    }
   }
  }
 }
 for(int i=0;i<out.m_size;++i) {
  void *obj=out.m_data[i].m_object;
  if(fn_82CFBBF0(fn_82CEAC20(obj),"hctAttributeDescription")==0) {
   hkClassMember *m=fn_82CEAFA8(obj,lbl_8204EF40);if(m->m_enum==0)m->m_enum=lbl_8323AEC8;
  }
 }
}
extern "C" void fn_82E0ADB8(hkBinaryPackfileReader *self, hkArray<ClassLocation> &out) { self->findClasses(out); }
