// R1::Soundscape::WwiseEmitterFactory_c, which creates and tracks the Wwise
// emitters (a singleton).
//
// Class names and the inheritance come from RTTI: WwiseEmitterFactory_c
// derives from EmitterFactory_i and Singleton_c of itself (at +4). Method and
// field names are placeholders named after their vtable or field offset.
//
// Slots 0x00 to 0x20 create an emitter of each kind; each calls
// its slot 0x40 and registers it (fn_82871E70, still C), returning 0 if that
// fails.

#ifndef R1_SOUNDSCAPE_WWISEEMITTERFACTORY_H
#define R1_SOUNDSCAPE_WWISEEMITTERFACTORY_H

#include "R1/Soundscape/Heap.h"
#include "R1/Soundscape/Singleton.h"
#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {
class WwiseEmitterFactory_c;
}
}

extern "C" int fn_82871E70(R1::Soundscape::WwiseEmitterFactory_c *self, R1::Soundscape::Emitter_i *emitter);

namespace R1 {
namespace Soundscape {

class EmitterFactory_i {
public:
    virtual Emitter_i *vf00(const AudioVariant_c &variant, unsigned int unk) = 0;
    virtual Emitter_i *vf04(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            const Element_82834F10 &normal) = 0;
    virtual Emitter_i *vf08(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            const Element_82834F10 &direction) = 0;
    virtual Emitter_i *vf0C(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            const Element_82834F10 &direction, float length) = 0;
    virtual Emitter_i *vf10(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            const Element_82834F10 &v) = 0;
    virtual Emitter_i *vf14(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            float radius) = 0;
    virtual Emitter_i *vf18(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            const Element_82834F10 &a, const Element_82834F10 &b) = 0;
    virtual Emitter_i *vf1C(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            const Element_82834F10 &a, const Element_82834F10 &b, float angle) = 0;
    virtual Emitter_i *vf20(const AudioVariant_c &variant, unsigned int unk,
                            const std::vector<Element_828729F8> &points, bool closed, bool unk105) = 0;
    // Slots 0x24 to 0x3C: signatures unknown.
    virtual void vf24() = 0;
    virtual void vf28() = 0;
    virtual void vf2C() = 0;
    virtual void vf30() = 0;
    virtual void vf34() = 0;
    virtual void vf38() = 0;
    virtual void vf3C() = 0;
    virtual ~EmitterFactory_i() {}
};

class WwiseEmitterFactory_c : public EmitterFactory_i, public Singleton_c<WwiseEmitterFactory_c> {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS

    virtual ~WwiseEmitterFactory_c();
    virtual Emitter_i *vf00(const AudioVariant_c &variant, unsigned int unk);
    virtual Emitter_i *vf04(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            const Element_82834F10 &normal);
    virtual Emitter_i *vf08(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            const Element_82834F10 &direction);
    virtual Emitter_i *vf0C(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            const Element_82834F10 &direction, float length);
    virtual Emitter_i *vf10(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            const Element_82834F10 &v);
    virtual Emitter_i *vf14(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            float radius);
    virtual Emitter_i *vf18(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            const Element_82834F10 &a, const Element_82834F10 &b);
    virtual Emitter_i *vf1C(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                            const Element_82834F10 &a, const Element_82834F10 &b, float angle);
    virtual Emitter_i *vf20(const AudioVariant_c &variant, unsigned int unk,
                            const std::vector<Element_828729F8> &points, bool closed, bool unk105);
    virtual void vf24();
    virtual void vf28();
    virtual void vf2C();
    virtual void vf30();
    virtual void vf34();
    virtual void vf38();
    virtual void vf3C();

    // Registers a new emitter and returns it, or 0 when registering fails.
    template <class T> __forceinline Emitter_i *Register(T *emitter)
    {
        emitter->evf40();
        return fn_82871E70(this, emitter) < 0 ? 0 : emitter;
    }

    char unk04[0xC]; // a tree of the emitters (fn_82871E70 inserts)
};

} // namespace Soundscape
} // namespace R1

#endif
