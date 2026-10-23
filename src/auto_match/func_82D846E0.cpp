#include "havok/hkBase.h"
class hkpTypedBroadPhaseDispatcher {public:~hkpTypedBroadPhaseDispatcher();};
class DeleteObject {public:virtual void destroy(unsigned);};
class hkpWorld:public hkReferencedObject {public:hkpWorld(hkFinishLoadedObjectFlag f):hkReferencedObject(f){} virtual ~hkpWorld();};
static void *worldVtable(){union{void *ptr;char buf[sizeof(hkpWorld)];}u;hkFinishLoadedObjectFlag f;new(u.buf)hkpWorld(f);return u.ptr;}
extern "C" void fn_82D839C8(void*);extern "C" void fn_82D81240(void*,void*,unsigned);extern "C" void fn_82D8ED60(void*,unsigned);extern "C" void fn_82DAE3A0(void*);extern "C" void fn_82D89688(unsigned,int);extern "C" void fn_82DA6448(unsigned);
struct WorldSub {char pad[0x64];void *buffer;HK_FORCE_INLINE ~WorldSub(){if(buffer)hkMemoryRouter::getInstance().heap().blockFree(buffer,0x200);}};
struct WorldGroup {char pad[0x70];WorldSub sub;};
extern "C" void fn_82D846E0(unsigned *param_1)
{
  unsigned int *puVar1;
  int iVar3;
  int iVar4;
  unsigned char auStack_40 [16];
  
  iVar4 = param_1[0x1d];
  *param_1 = (unsigned)worldVtable();
  if ((void*)iVar4 != 0) {
    ((WorldGroup*)iVar4)->sub.~WorldSub();
    hkMemoryRouter::getInstance().heap().blockFree((void*)(iVar4),0x100);
  }
  fn_82CE4118((hkReferencedObject*)param_1[0x13]);
  param_1[0x13] = 0;
  iVar4 = param_1[0x2e];
  if ((void*)iVar4 != 0) {
    hkMemoryRouter::getInstance().heap().blockFree((void*)(iVar4),0x1c);
    param_1[0x2e] = 0;
  }
  iVar4 = param_1[0x31];
  if ((void*)iVar4 != 0) {
    hkMemoryRouter::getInstance().heap().blockFree((void*)(iVar4),0x1c);
    param_1[0x31] = 0;
  }
  iVar4 = param_1[0x30];
  if ((void*)iVar4 != 0) {
    hkMemoryRouter::getInstance().heap().blockFree((void*)(iVar4),0x1c);
    param_1[0x30] = 0;
  }
  if (param_1[0x14] != 0) {
    fn_82CE4118((hkReferencedObject*)param_1[0x14]);
  }
  param_1[0x14] = 0;
  fn_82D839C8(param_1);
  fn_82D81240(auStack_40,param_1,param_1[9]);
  param_1[9] = 0;
  fn_82D8ED60(param_1,param_1[8]);
  puVar1 = (unsigned int *)param_1[8];
  if (puVar1 != (unsigned int *)0x0) {
    ((DeleteObject*)puVar1)->destroy(1);
  }
  param_1[8] = 0;
  fn_82DAE3A0(param_1);
  fn_82CE4118((hkReferencedObject*)param_1[0x16]);
  param_1[0x16] = 0;
  fn_82CE4118((hkReferencedObject*)param_1[0x20]);
  param_1[0x20] = 0;
  iVar4 = param_1[0x19];
  if ((void*)iVar4 != 0) {
    ((hkpTypedBroadPhaseDispatcher*)iVar4)->~hkpTypedBroadPhaseDispatcher();
    hkMemoryRouter::getInstance().heap().blockFree((void*)(iVar4),0x10c);
  }
  if (param_1[0x6f] != 0) {
    fn_82CE4118((hkReferencedObject*)param_1[0x6f]);
  }
  puVar1 = (unsigned int *)param_1[0x1a];
  if (puVar1 != (unsigned int *)0x0) {
    ((DeleteObject*)puVar1)->destroy(1);
  }
  puVar1 = (unsigned int *)param_1[0x1b];
  if (puVar1 != (unsigned int *)0x0) {
    ((DeleteObject*)puVar1)->destroy(1);
  }
  puVar1 = (unsigned int *)param_1[0x1c];
  if (puVar1 != (unsigned int *)0x0) {
    ((DeleteObject*)puVar1)->destroy(1);
  }
  fn_82CE4118((hkReferencedObject*)param_1[0x1f]);
  fn_82CE4118((hkReferencedObject*)param_1[0x21]);
  iVar4 = *(int *)(param_1[0x1e] + 0x70);
  if ((void*)iVar4 != 0) {
    hkMemoryRouter::getInstance().heap().blockFree((void*)(iVar4),0x10);
  }
  if (param_1[0x1e] != 0) {
    fn_82D89688(param_1[0x1e],1);
  }
  fn_82CE4118((hkReferencedObject*)param_1[2]);
  iVar4 = param_1[0x22];
  if ((void*)iVar4 != 0) {
    fn_82DA6448(iVar4);
    hkMemoryRouter::getInstance().heap().blockFree((void*)(iVar4),0x28);
  }
  if (param_1[0x17] != 0) {
    fn_82CE4118((hkReferencedObject*)param_1[0x17]);
  }
  ((hkArray<int>*)(param_1+0x6c))->~hkArray();
  ((hkArray<int>*)(param_1+0x69))->~hkArray();
  ((hkArray<int>*)(param_1+0x66))->~hkArray();
  ((hkArray<int>*)(param_1+99))->~hkArray();
  ((hkArray<int>*)(param_1+0x60))->~hkArray();
  ((hkArray<int>*)(param_1+0x5d))->~hkArray();
  ((hkArray<int>*)(param_1+0x5a))->~hkArray();
  ((hkArray<int>*)(param_1+0x57))->~hkArray();
  ((hkArray<int>*)(param_1+0x54))->~hkArray();
  ((hkArray<int>*)(param_1+0x51))->~hkArray();
  ((hkArray<int>*)(param_1+0x4e))->~hkArray();
  ((hkArray<int>*)(param_1+0x4b))->~hkArray();
  ((hkArray<int>*)(param_1+0x48))->~hkArray();
  ((hkArray<int>*)(param_1+0x45))->~hkArray();
  if (param_1[0x14] != 0) {
    fn_82CE4118((hkReferencedObject*)param_1[0x14]);
  }
  param_1[0x14] = 0;
  ((hkArray<int>*)(param_1+0x10))->~hkArray();
  ((hkArray<int>*)(param_1+0xd))->~hkArray();
  ((hkArray<int>*)(param_1+10))->~hkArray();
  ((hkReferencedObject*)param_1)->hkReferencedObject::~hkReferencedObject();
  return;
}

