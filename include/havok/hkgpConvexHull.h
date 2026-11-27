// hkgpConvexHull (Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHull.h and .cpp: the .cpp is in the
// game's assert strings), 0x14 bytes: the convex hull of a point set. The work is done by hkgpConvexHullImpl
// (hkgpConvexHullImpl.h), which this class owns.
// RTTI: hkgpConvexHull -> hkReferencedObject; its vtable (??_7hkgpConvexHull@@6B@) adds nothing to
// hkReferencedObject's three slots, and its deleting destructor is 82D16800.
//
// The layout is the game's:
//  - the constructor (82D0D6E8) allocates an implementation of 0x1C0 bytes, constructs it (82D16868) and
//    stores it at +0x8, then stores 0 at +0xC and +0x10;
//  - the destructor (82D0D640) destroys (82D16300) and frees the implementation, then deletes the object at
//    +0x10 through its vtable and clears the pointer;
//  - the copy function (82D0D770) copies the word at +0xC and calls the second virtual function of the object
//    at +0x10 to copy it.
// The constructor, the destructor and the deleting destructor are out of line. m_userData and m_userObject
// are named after Havok's header; the type of m_userData is not known.
//
// BuildConfig (0x10 bytes) holds the options of a build. Its constructor is out of line (82D0B0C0): the game's
// callers outside hkgpConvexHull.cpp call it, while hkgpConvexHullImpl's constructor (82D16868, in the same
// .cpp) has it inline, so it is defined in hkgpConvexHull.cpp and declared here. It stores false, 0.9999f (the
// constant lbl_821344F4) and the bytes 0, 1, 0, 1, 0, 0. The member names follow Havok's header, whose
// defaults have that pattern; the game's callers (82D081B8, 82DE52A0) set the first byte before they build and
// then test the hull's dimension. The last byte's name is not known.
#ifndef HAVOK_HKGPCONVEXHULL_H
#define HAVOK_HKGPCONVEXHULL_H

#include "havok/hkBase.h"

class hkgpConvexHullImpl;

extern "C" extern const hkReal lbl_821344F4;   // 0.9999f

class hkgpConvexHull : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);

    struct BuildConfig {
        BuildConfig();   // out of line (82D0B0C0); see above

        hkBool m_allowLowerDimensions;   // +0x0
        hkReal m_minCosAngle;            // +0x4
        hkBool m_setSourceIndices;       // +0x8
        hkBool m_buildIndices;           // +0x9
        hkBool m_buildMassProperties;    // +0xA
        hkBool m_sortInputs;             // +0xB
        hkBool m_internalInputs;         // +0xC
        hkBool m_unknownD;               // +0xD
    };

    hkgpConvexHull();            // out of line (82D0D6E8)
    virtual ~hkgpConvexHull();   // out of line (82D0D640)

    hkgpConvexHullImpl *m_data;         // +0x8
    void *m_userData;                   // +0xC
    hkReferencedObject *m_userObject;   // +0x10
};

#endif
