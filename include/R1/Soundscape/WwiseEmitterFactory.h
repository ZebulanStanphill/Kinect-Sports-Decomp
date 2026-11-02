// R1::Soundscape::WwiseEmitterFactory_c, which creates and tracks the Wwise
// emitters (a singleton).
//
// Class names and the inheritance come from RTTI: WwiseEmitterFactory_c
// derives from EmitterFactory_i and Singleton_c of itself (at +4). Method and
// field names are placeholders named after their vtable or field offset.
//
// Slots 0x00 to 0x20 create an emitter of each kind; each calls
// its slot 0x40 and registers it (RegisterEmitter), returning 0 if that
// fails.

#ifndef R1_SOUNDSCAPE_WWISEEMITTERFACTORY_H
#define R1_SOUNDSCAPE_WWISEEMITTERFACTORY_H

#include <vector>

#include "R1/Soundscape/Heap.h"
#include "game/String_82230110.h"
#include "R1/Soundscape/Singleton.h"
#include "R1/Soundscape/WwiseEmitterPositionable.h"

// The elements of the factory's vector are 0x18 bytes (the folded vector destructor
// loops with that stride); the contents are unknown.
struct Element_82872CE8 {
    int data[6];
};

namespace R1 {
namespace Soundscape {
class WwiseEmitterFactory_c;
}
}

// A one-word container iterator, passed by value.
struct Iterator_82834D68 {
    void *node;
};

extern "C" {
// Out-of-line library code for the containers below (the linker folded identical instantiations).
void fn_82828AE8(void *tree, const void *comp, const void *alloc); // tree constructor, 5 callers
void fn_82834D68(void *ret, void *tree, Iterator_82834D68 first, Iterator_82834D68 last);  // tree erase(first, last), 3 callers
void fn_8265CA20(void *ptr);                                       // operator delete
void fn_82872C80(void *vec);                                       // vector destructor, folded
void *fn_82834458(void *tree);                                     // allocates a node
void *fn_82872B68(void *result, void *tree, void *node, int where); // inserts the node
void fn_82865170(void);
char *fn_82866400(void);
}

namespace R1 {
namespace Soundscape {

// A std::set/std::map with Visual C++ 2010's layout (0x10 bytes: comparator/allocator, head, size);
// its constructor and the erase in its destructor are out-of-line library code.
struct Tree_82828AE8 {
    struct Empty {};
    __forceinline Tree_82828AE8()
    {
        Empty empty;
        fn_82828AE8(this, &empty, &empty);
    }
    __forceinline ~Tree_82828AE8()
    {
        unsigned int result[4];
        Iterator_82834D68 last = { head };
        Iterator_82834D68 first = { *(void **)head };
        fn_82834D68(result, this, first, last);
        fn_8265CA20(head);
    }

    unsigned int unk00;
    void *head;
    unsigned int size;
    unsigned int unk0C;
};

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
    // Slots 0x24 to 0x3C: the parameter names and types are guesses from the units that were seen.
    virtual int vf24(unsigned int a) = 0;
    virtual int vf28() = 0;
    virtual int vf2C(Emitter_i **emitter) = 0;
    virtual String_82230110 vf30() = 0;
    virtual int vf34() = 0;
    virtual bool vf38(unsigned int key) = 0;
    virtual int vf3C(unsigned int a) = 0;
    virtual ~EmitterFactory_i() {}
};

class WwiseEmitterFactory_c : public EmitterFactory_i, public Singleton_c<WwiseEmitterFactory_c> {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS

    WwiseEmitterFactory_c();
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
    virtual int vf24(unsigned int a);
    virtual int vf28();
    virtual int vf2C(Emitter_i **emitter);
    virtual String_82230110 vf30();
    virtual int vf34();
    virtual bool vf38(unsigned int key);
    virtual int vf3C(unsigned int a);

    // Registers a new emitter and returns it, or 0 when registering fails.
    template <class T> __forceinline Emitter_i *Register(T *emitter)
    {
        emitter->evf40();
        return RegisterEmitter(emitter) < 0 ? 0 : emitter;
    }

    // Registers an emitter in the tree at +4 and counts it; returns a success code.
    int RegisterEmitter(Emitter_i *emitter);

    Tree_82828AE8 unk04; // the registered emitters (a std::set<unsigned int>, see vf38)
    Tree_82828AE8 unk14;
    Tree_82828AE8 unk24;
    std::vector<Element_82872CE8> unk34; // reserves 30 in the constructor
};

} // namespace Soundscape
} // namespace R1

#endif
