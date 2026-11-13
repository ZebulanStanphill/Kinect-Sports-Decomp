#include "havok/hkBase.h"
class hkpPhantomOverlapListener { public: virtual ~hkpPhantomOverlapListener() {} };
class hkpRejectChassisListener : public hkReferencedObject, public hkpPhantomOverlapListener {
public:
 HK_DECLARE_CLASS_ALLOCATOR(0);
 hkpRejectChassisListener(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
};
const void *getVtablehkpRejectChassisListener() {
 union { void *ptr; char buf[sizeof(hkpRejectChassisListener)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkpRejectChassisListener(f);
 return u.ptr;
}
