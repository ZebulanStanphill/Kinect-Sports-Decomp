#include "havok/hkBase.h"
#include "havok/hkpWorldPostSimulationListener.h"
struct Bytes12 { int a[3]; }; struct Bytes16 { int a[4]; };
class hkBatchArrays:public hkReferencedObject, public hkpWorldPostSimulationListener {
public: HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE); HK_FORCE_INLINE ~hkBatchArrays() {} int pad[2]; hkArray<Bytes12> a; hkArray<Bytes16> b; hkArray<Bytes12> c;
};
extern "C" void fn_82DB4350(hkBatchArrays *self) { self->c.~hkArray();self->b.~hkArray();self->a.~hkArray();self->hkpWorldPostSimulationListener::~hkpWorldPostSimulationListener();self->hkReferencedObject::~hkReferencedObject(); }
