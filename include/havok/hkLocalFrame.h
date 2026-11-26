// hkLocalFrame (Common/Base/Types/Geometry/LocalFrame/hkLocalFrame.h): a
// named coordinate frame attached to an object. hkSimpleLocalFrame's vtable
// has fourteen slots, so the interface declares eleven virtual functions
// after hkReferencedObject's three; they are not declared here yet.
#ifndef HAVOK_HKLOCALFRAME_H
#define HAVOK_HKLOCALFRAME_H

#include "havok/hkBase.h"

class hkLocalFrame : public hkReferencedObject {
public:
    hkLocalFrame() {}
    hkLocalFrame(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

#endif
