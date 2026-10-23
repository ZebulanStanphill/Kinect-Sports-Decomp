#include "havok/hkBase.h"
extern "C" void fn_82D95638(void*);
struct Bytes224 { char a[224]; };
class hkpVehicleInstance:public hkReferencedObject {
public:
 char pad[0x14]; hkReferencedObject *r[11]; hkArray<Bytes224> a;char p54[0x48];hkReferencedObject *r9c;hkArray<char> b;char pac[0x14];hkArray<int> c;
 hkpVehicleInstance(hkFinishLoadedObjectFlag f):hkReferencedObject(f),a(f),b(f),c(f) {}
 HK_FORCE_INLINE void cleanup() {
 if(r[0])r[0]->removeReference();if(r[1])r[1]->removeReference();if(r[2])r[2]->removeReference();if(r[3])r[3]->removeReference();if(r[4])r[4]->removeReference();if(r[5])r[5]->removeReference();if(r[6])r[6]->removeReference();if(r[7])r[7]->removeReference();if(r[8])r[8]->removeReference();if(r[10])r[10]->removeReference();if(r9c)r9c->removeReference();if(r[9])r[9]->removeReference();
 }
};
extern "C" void fn_82DFE168(hkpVehicleInstance *self) { union{void *ptr;char buf[sizeof(hkpVehicleInstance)];}u;hkFinishLoadedObjectFlag f;new(u.buf)hkpVehicleInstance(f);*(void**)self=u.ptr;self->cleanup();self->c.~hkArray();self->b.~hkArray();self->a.~hkArray();fn_82D95638(self); }
