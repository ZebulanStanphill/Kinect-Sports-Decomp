#ifndef HAVOK_HKREFVARIANT_H
#define HAVOK_HKREFVARIANT_H

#include "havok/hkBase.h"

// hkRefVariant (Common/Base/Types/hkRefVariant.h): a reference to any
// hkReferencedObject.
class hkRefVariant : public hkRefPtr<hkReferencedObject> {
public:
    HK_FORCE_INLINE hkRefVariant() {}
    HK_FORCE_INLINE hkRefVariant(hkFinishLoadedObjectFlag f) : hkRefPtr<hkReferencedObject>(f) {}
};

#endif
