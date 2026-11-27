// hkLocalFrame (Common/Base/Types/Geometry/LocalFrame/hkLocalFrame.h): a named coordinate frame attached to
// an object, and hkLocalFrameCollector, which getNearbyFrames reports to.
//
// The interface is the eleven slots that hkSimpleLocalFrame's vtable (??_7hkSimpleLocalFrame@@6B@, 8212FD74,
// fourteen slots) has after hkReferencedObject's three, identified by what its functions do:
//   +0x0C getLocalTransform   82CEFE58 copies the transform at +0x10 out
//   +0x10 setLocalTransform   82CEFC58 copies one in
//   +0x14 getLocalPosition    82CEFC90 copies the translation (+0x40) out
//   +0x18 getNearbyFrames     82CEFE90: reports itself to the collector when the target is within the distance
//                             of its position, then asks every child (slot +0x18) with the target in its space
//   +0x1C getName             82CE4728 (the string pointer at +0x64 without its flag bit)
//   +0x20 getParentFrame      8289DE38 (+0x5C)
//   +0x24 setParentFrame      82CE4718
//   +0x28 getNumChildFrames   82CEFCA0 (the size of the array at +0x50)
//   +0x2C getChildFrame       82CEFCA8
//   +0x30 getGroup            82CE4720 (+0x60)
//   +0x34 setGroup            82CEFC00: references the new group, releases the old one
// The order is that of Havok's header, and the names and parameter types are Havok's. The game has no vtable
// of hkLocalFrame itself, so which functions are pure is from Havok's header too (all but getLocalPosition).
// hkLocalFrameCollector: 82CEFE90 calls its slot +0xC with the frame and the distance, so it has
// hkReferencedObject's three slots first.
#ifndef HAVOK_HKLOCALFRAME_H
#define HAVOK_HKLOCALFRAME_H

#include "havok/hkBase.h"

class hkLocalFrame;
class hkLocalFrameGroup;
class hkTransform;
class hkVector4;

class hkLocalFrameCollector : public hkReferencedObject {
public:
    virtual void addFrame(const hkLocalFrame *frame, hkReal distance) = 0;   // +0xC
};

class hkLocalFrame : public hkReferencedObject {
public:
    hkLocalFrame() {}
    hkLocalFrame(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}

    virtual void getLocalTransform(hkTransform &transform) const = 0;                      // +0x0C
    virtual void setLocalTransform(const hkTransform &transform) = 0;                      // +0x10
    virtual void getLocalPosition(hkVector4 &position) const;                              // +0x14
    virtual void getNearbyFrames(const hkVector4 &target, hkReal maxDistance,
                                 hkLocalFrameCollector &collector) const = 0;              // +0x18
    virtual const char *getName() const = 0;                                               // +0x1C
    virtual const hkLocalFrame *getParentFrame() const = 0;                                // +0x20
    virtual void setParentFrame(const hkLocalFrame *parentFrame) = 0;                      // +0x24
    virtual int getNumChildFrames() const = 0;                                             // +0x28
    virtual hkLocalFrame *getChildFrame(int i) const = 0;                                  // +0x2C
    virtual const hkLocalFrameGroup *getGroup() const = 0;                                 // +0x30
    virtual void setGroup(const hkLocalFrameGroup *localFrameGroup) = 0;                   // +0x34
};

#endif
