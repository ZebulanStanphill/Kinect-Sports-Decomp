// hkpSerializedDisplayMarker (Physics/Utilities/Serialize/Display/hkpSerializedDisplayMarker.h), 0x50 bytes: a
// referenced object with a transform. The size and the member come from the game's hkClass (initialiser
// 83134D58, members lbl_82144900: "transform", an hkTransform at +0x10). The destructor is implicit: slot 0 of
// ??_7hkpSerializedDisplayMarker@@6B@ is a deleting destructor folded with hkpShape's. The finish constructor is
// inline (the finish and getVtable functions 82DE4DE8 and 82DE4E00 expand it).
#ifndef HAVOK_HKPSERIALIZEDDISPLAYMARKER_H
#define HAVOK_HKPSERIALIZEDDISPLAYMARKER_H

#include "havok/hkBase.h"
#include "havok/hkTransform.h"

class hkpSerializedDisplayMarker : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpSerializedDisplayMarker(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}

    hkTransform m_transform;   // +0x10
};

#endif
