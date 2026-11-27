// hkSimpleLocalFrame (Common/Base/Types/Geometry/LocalFrame/hkLocalFrame.h), 0x68 bytes: a local frame with a
// transform, child frames, a parent, a group and a name. The layout comes from the finish constructor
// (82CE4640, 82CE4668) and the destructor (82CEFFA8). The member names follow Havok's header.
// The destructor is out of line (82CEFFA8; the scalar deleting destructor 82CE4738 calls it). It releases the
// children and the group; m_name and m_children are then destroyed by their own destructors.
// It overrides all eleven slots of hkLocalFrame (the functions are listed in hkLocalFrame.h; they are C units
// under their fn_ names, apart from getNearbyFrames, 82CEFE90).
#ifndef HAVOK_HKSIMPLELOCALFRAME_H
#define HAVOK_HKSIMPLELOCALFRAME_H

#include "havok/hkBase.h"
#include "havok/hkTransform.h"
#include "havok/hkLocalFrame.h"
#include "havok/hkLocalFrameGroup.h"

class hkSimpleLocalFrame : public hkLocalFrame {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkSimpleLocalFrame(hkFinishLoadedObjectFlag flag)
        : hkLocalFrame(flag), m_children(flag), m_name(flag) {}
    virtual ~hkSimpleLocalFrame();

    virtual void getLocalTransform(hkTransform &transform) const;
    virtual void setLocalTransform(const hkTransform &transform);
    virtual void getLocalPosition(hkVector4 &position) const;
    virtual void getNearbyFrames(const hkVector4 &target, hkReal maxDistance, hkLocalFrameCollector &collector) const;
    virtual const char *getName() const;
    virtual const hkLocalFrame *getParentFrame() const;
    virtual void setParentFrame(const hkLocalFrame *parentFrame);
    virtual int getNumChildFrames() const;
    virtual hkLocalFrame *getChildFrame(int i) const;
    virtual const hkLocalFrameGroup *getGroup() const;
    virtual void setGroup(const hkLocalFrameGroup *localFrameGroup);

    hkTransform m_transform;                 // +0x10
    hkArray<hkLocalFrame *> m_children;      // +0x50
    const hkLocalFrame *m_parentFrame;       // +0x5C
    const hkLocalFrameGroup *m_group;        // +0x60
    hkStringPtr m_name;                      // +0x64
};

#endif
