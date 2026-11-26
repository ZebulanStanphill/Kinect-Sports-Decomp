// hkpShapeBuffer (Physics/Collide/Shape/hkpShapeBuffer.h), 0x200 bytes aligned to 16: the storage that
// hkpShapeContainer::getChildShape builds a temporary child shape in. It is a class (getChildShape's parameter
// mangles as AAVhkpShapeBuffer@@). The size and alignment are the units' (82D4D370, 82D6C808 keep one on the
// stack); the member name follows Havok's header.
#ifndef HAVOK_HKPSHAPEBUFFER_H
#define HAVOK_HKPSHAPEBUFFER_H

#include "havok/hkBase.h"

#define HK_SHAPE_BUFFER_SIZE 512

class __declspec(align(16)) hkpShapeBuffer {
public:
    hkUint8 m_buffer[HK_SHAPE_BUFFER_SIZE];   // +0x0
};

#endif
