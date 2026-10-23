#include "havok/hkBase.h"
class hkpWorldObject:public hkReferencedObject {public:virtual ~hkpWorldObject();};
class hkpEntity:public hkpWorldObject {public:HK_DECLARE_PLACEMENT_ALLOCATOR(); hkpEntity(hkFinishLoadedObjectFlag){} virtual ~hkpEntity();};
class hkpKeyframedRigidMotion {public:virtual ~hkpKeyframedRigidMotion();};
class DeleteObject {public:virtual void destroy(unsigned);};
static void *entityVtable(){union{void *ptr;char buf[sizeof(hkpEntity)];}u;hkFinishLoadedObjectFlag f;new(u.buf)hkpEntity(f);return u.ptr;}
extern "C" void fn_82DACF28(void*);extern "C" void fn_82D7EDB0(int);
template<unsigned N> static HK_FORCE_INLINE void freeElements(void *p,int n){hkMemoryRouter::getInstance().heap().blockFree(p,n*N);}
template<unsigned N> static HK_FORCE_INLINE void freeCapacity(void *p,unsigned c){unsigned n=c&0x3fff;hkMemoryRouter::getInstance().heap().blockFree(p,n*N);}
template<unsigned N> class SmallArray {public:void *data;unsigned short size,cap;HK_FORCE_INLINE int getCapacity() const {return cap&0x3fff;} static HK_FORCE_INLINE void release(void*p,int n){freeElements<N>(p,n);} HK_FORCE_INLINE ~SmallArray(){unsigned c=cap;if((c&0x8000)==0)freeElements<N>(data,getCapacity());}};
extern "C" void fn_82D8AD50(unsigned *param_1)
{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  puVar2 = (unsigned int *)param_1[0x26];
  *param_1 = (unsigned)entityVtable();
  if (puVar2 != (unsigned int *)0x0) {
    int count=*(unsigned short*)(param_1+0x81);
    unsigned int *needle=puVar2+2;
    iVar5 = 0;
    if (count > 0) {
      piVar6 = (int *)param_1[0x80];
      do {
        if ((unsigned int *)*piVar6 == needle) goto LAB_82d8adb4;
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < count);
    }
    iVar5 = -1;
LAB_82d8adb4:
    *(unsigned int *)(iVar5 * 4 + param_1[0x80]) = 0;
    ((DeleteObject*)puVar2)->destroy(1);
    param_1[0x26] = 0;
  }
  fn_82DACF28(param_1);
  iVar5 = param_1[0x85];
  if ((void*)iVar5 != 0) {
    fn_82D7EDB0(iVar5);
    hkMemoryRouter::getInstance().heap().blockFree((void*)(iVar5),0x10);
  }
  if (param_1[0x84] != 0) {
    fn_82CE4118((hkReferencedObject*)param_1[0x84]);
  }
  param_1[0x84] = 0;
  ((SmallArray<4>*)(param_1+0x82))->~SmallArray();
  ((SmallArray<4>*)(param_1+0x80))->~SmallArray();
  ((hkpKeyframedRigidMotion*)(param_1+0x38))->hkpKeyframedRigidMotion::~hkpKeyframedRigidMotion();
  ((hkArray<char>*)(param_1+0x30))->~hkArray();
  ((hkArray<int>*)(param_1+0x2d))->~hkArray();
  ((SmallArray<48>*)(param_1+0x2b))->~SmallArray();
  ((hkpWorldObject*)param_1)->hkpWorldObject::~hkpWorldObject();
  return;
}

