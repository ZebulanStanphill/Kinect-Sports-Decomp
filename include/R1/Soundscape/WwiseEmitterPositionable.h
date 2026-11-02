// R1::Soundscape::WwiseEmitterPositionable_c, an emitter with a position, and
// its shapes (WwiseEmitter_Point_c, _Sphere_c, _Plane_c, _Line_c,
// _InfiniteLine_c, _Path_c, _AxisAlignedBoundingBox_c, _BoundingBox_c).
//
// Class names and the inheritance come from RTTI: WwiseEmitterPositionable_c
// derives from EmitterPositionable_i, which derives from Emitter_i; each shape
// derives from WwiseEmitterPositionable_c (_BoundingBox_c from
// _AxisAlignedBoundingBox_c). WwiseEmitterPositionable_c does not derive from
// WwiseEmitter_c: it embeds one at +4 and forwards Emitter_i's slots to it.
// Method and field names are placeholders named after their vtable or field
// offset.
//

#ifndef R1_SOUNDSCAPE_WWISEEMITTERPOSITIONABLE_H
#define R1_SOUNDSCAPE_WWISEEMITTERPOSITIONABLE_H

#include "R1/Soundscape/Heap.h"
#include "R1/Soundscape/VectorMath.h"
#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

// Slots 0x74 to 0x8C. The getters copy a vector out, the setters keep the
// previous value; both return 0x20130000.
class EmitterPositionable_i : public Emitter_i {
public:
    virtual int vf74(Element_82834F10 *out) = 0;
    virtual int vf78(const Element_82834F10 &v) = 0;
    virtual int vf7C(Element_82834F10 *out) = 0;
    virtual int vf80(const Element_82834F10 &v) = 0;
    virtual int vf84(Element_82834F10 *out) = 0;
    virtual int vf88(const Element_82834F10 &v) = 0;
    virtual int vf8C(const Element_82834F10 &listener, std::vector<Element_82834F10> *points) = 0;
};

class WwiseEmitterPositionable_c : public EmitterPositionable_i {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS

    WwiseEmitterPositionable_c(const AudioVariant_c &variant, unsigned int unk,
                               const Element_82834F10 &position);
    virtual ~WwiseEmitterPositionable_c();
    // Slots 0x00-0x6C forward to the embedded WwiseEmitter_c.
    R1_SOUNDSCAPE_EMITTER_SLOTS
    virtual int vf74(Element_82834F10 *out);     // copies unkB8 out
    virtual int vf78(const Element_82834F10 &v); // sets unkB8 (previous to unkC4)
    virtual int vf7C(Element_82834F10 *out);     // copies the position out
    virtual int vf80(const Element_82834F10 &v); // sets the position (previous to unk9C)
    virtual int vf84(Element_82834F10 *out);     // copies unkD0 out
    virtual int vf88(const Element_82834F10 &v); // sets unkD0 (previous to unkDC)
    // Computes the shape's points (the vector at +0xA8) from the listener
    // position; overridden by every shape.
    virtual int vf8C(const Element_82834F10 &listener, std::vector<Element_82834F10> *points);

    WwiseEmitter_c emitter;
    Element_82834F10 unk90; // position
    Element_82834F10 unk9C; // previous position
    std::vector<Element_82834F10> unkA8; // points (see vf8C)
    Element_82834F10 unkB8;
    Element_82834F10 unkC4; // previous unkB8
    Element_82834F10 unkD0;
    Element_82834F10 unkDC; // previous unkD0
    Element_82834F10 unkE8;
};

// The shapes override slots 0x3C, 0x40, the destructor and vf8C (the Point
// also vf78). Their constructors take the WwiseEmitterPositionable_c
// arguments first.
#define R1_SOUNDSCAPE_WWISEEMITTER_SHAPE_SLOTS(Name)                           \
    virtual ~Name() {}                                                         \
    virtual int evf3C();                                                       \
    virtual int evf40();                                                       \
    virtual int vf8C(const Element_82834F10 &listener, std::vector<Element_82834F10> *points);

class WwiseEmitter_Point_c : public WwiseEmitterPositionable_c {
public:
    // Inlined into WwiseEmitterFactory_c::vf10 (func_828721E0).
    // WwiseEmitterPositionable_c::vf78 is called non-virtually.
    __forceinline WwiseEmitter_Point_c(const AudioVariant_c &variant, unsigned int unk,
                                       const Element_82834F10 &position, const Element_82834F10 &v)
        : WwiseEmitterPositionable_c(variant, unk, position)
    {
        WwiseEmitterPositionable_c::vf78(v);
    }
    R1_SOUNDSCAPE_WWISEEMITTER_SHAPE_SLOTS(WwiseEmitter_Point_c)
    virtual int vf78(const Element_82834F10 &v);
};

class WwiseEmitter_Sphere_c : public WwiseEmitterPositionable_c {
public:
    // Inlined into WwiseEmitterFactory_c::vf14 (func_82872290).
    __forceinline WwiseEmitter_Sphere_c(const AudioVariant_c &variant, unsigned int unk,
                                        const Element_82834F10 &position, float radius)
        : WwiseEmitterPositionable_c(variant, unk, position), unkF4(radius)
    {
    }
    R1_SOUNDSCAPE_WWISEEMITTER_SHAPE_SLOTS(WwiseEmitter_Sphere_c)

    float unkF4; // radius
};

class WwiseEmitter_Plane_c : public WwiseEmitterPositionable_c {
public:
    WwiseEmitter_Plane_c(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                         const Element_82834F10 &normal);
    R1_SOUNDSCAPE_WWISEEMITTER_SHAPE_SLOTS(WwiseEmitter_Plane_c)

    Element_82834F10 unkF4; // normal
};

class WwiseEmitter_InfiniteLine_c : public WwiseEmitterPositionable_c {
public:
    WwiseEmitter_InfiniteLine_c(const AudioVariant_c &variant, unsigned int unk,
                                const Element_82834F10 &position, const Element_82834F10 &direction);
    R1_SOUNDSCAPE_WWISEEMITTER_SHAPE_SLOTS(WwiseEmitter_InfiniteLine_c)

    Element_82834F10 unkF4; // direction
};

class WwiseEmitter_Line_c : public WwiseEmitterPositionable_c {
public:
    WwiseEmitter_Line_c(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                        const Element_82834F10 &direction, float length);
    R1_SOUNDSCAPE_WWISEEMITTER_SHAPE_SLOTS(WwiseEmitter_Line_c)

    Element_82834F10 unkF4; // direction
    float unk100;           // length
};

class WwiseEmitter_AxisAlignedBoundingBox_c : public WwiseEmitterPositionable_c {
public:
    WwiseEmitter_AxisAlignedBoundingBox_c(const AudioVariant_c &variant, unsigned int unk,
                                          const Element_82834F10 &position, const Element_82834F10 &a,
                                          const Element_82834F10 &b);
    R1_SOUNDSCAPE_WWISEEMITTER_SHAPE_SLOTS(WwiseEmitter_AxisAlignedBoundingBox_c)

    Element_82834F10 unkF4;
    Element_82834F10 unk100;
};

class WwiseEmitter_BoundingBox_c : public WwiseEmitter_AxisAlignedBoundingBox_c {
public:
    // Inlined into WwiseEmitterFactory_c::vf1C (func_828723E8); the angle is
    // given in degrees. The constant is a literal (lbl_8201DFF0 renamed to
    // __real@3c8efa35): read through an extern const float, it is loaded after
    // the vtable store instead of before it.
    __forceinline WwiseEmitter_BoundingBox_c(const AudioVariant_c &variant, unsigned int unk,
                                             const Element_82834F10 &position, const Element_82834F10 &a,
                                             const Element_82834F10 &b, float angle)
        : WwiseEmitter_AxisAlignedBoundingBox_c(variant, unk, position, a, b)
    {
        unk10C = angle * 0.017453292f;
    }
    R1_SOUNDSCAPE_WWISEEMITTER_SHAPE_SLOTS(WwiseEmitter_BoundingBox_c)

    float unk10C; // angle in radians
};

class WwiseEmitter_Path_c : public WwiseEmitterPositionable_c {
public:
    WwiseEmitter_Path_c(const AudioVariant_c &variant, unsigned int unk,
                        const std::vector<Element_828729F8> &points, bool closed, bool unk105);
    R1_SOUNDSCAPE_WWISEEMITTER_SHAPE_SLOTS(WwiseEmitter_Path_c)

    std::vector<Element_828729F8> unkF4; // points
    bool unk104;                         // closed: the first point is appended again
    bool unk105;
    Element_82834F10 unk108;
    Element_82834F10 unk114;
};

#undef R1_SOUNDSCAPE_WWISEEMITTER_SHAPE_SLOTS

} // namespace Soundscape
} // namespace R1

#endif
