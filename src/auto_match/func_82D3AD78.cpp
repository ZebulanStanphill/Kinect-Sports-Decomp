#include "havok/hkBase.h"
class hkpMoppModifier { public: virtual ~hkpMoppModifier() {} };
class hkpRemoveTerminalsMoppModifier : public hkReferencedObject, public hkpMoppModifier {
public:
 HK_DECLARE_CLASS_ALLOCATOR(0);
 hkpRemoveTerminalsMoppModifier(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
};
const void *getVtablehkpRemoveTerminalsMoppModifier() {
 union { void *ptr; char buf[sizeof(hkpRemoveTerminalsMoppModifier)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkpRemoveTerminalsMoppModifier(f);
 return u.ptr;
}
