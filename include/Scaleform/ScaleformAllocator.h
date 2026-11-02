// ScaleformAllocator, the game's system allocator for Scaleform, and the minimal
// declaration of Scaleform's GSysAlloc that it derives from.
//
// ScaleformAllocator's name and base come from RTTI. GSysAlloc is Scaleform's
// own class; only its vtable is known: slots 0x00 to 0x08 are pure virtual,
// 0x0C to 0x24 return 0 by default, 0x28, 0x2C and 0x34 do nothing and 0x30 is
// the destructor. Method names are placeholders named after their vtable
// offset; parameters and return types are inferred from the code.

#ifndef SCALEFORM_SCALEFORMALLOCATOR_H
#define SCALEFORM_SCALEFORMALLOCATOR_H

class GSysAlloc {
public:
    struct Info {
        unsigned int unk00;
        unsigned int unk04;
        unsigned int unk08; // Granularity
        unsigned int unk0C;
        unsigned int unk10;
        bool unk14;
    };

    virtual void vf00(Info *info) = 0;
    virtual void *vf04(unsigned int size, unsigned int align) = 0;
    virtual bool vf08(void *block, unsigned int size, unsigned int align) = 0;
    virtual unsigned int vf0C();
    virtual unsigned int vf10();
    virtual unsigned int vf14();
    virtual unsigned int vf18();
    virtual unsigned int vf1C();
    virtual unsigned int vf20();
    virtual unsigned int vf24();
    virtual void vf28();
    virtual void vf2C();
    virtual ~GSysAlloc();
    virtual void vf34();
};

class ScaleformAllocator : public GSysAlloc {
public:
    ScaleformAllocator();
    // Fills in the allocator's limits.
    virtual void vf00(Info *info);
    // Allocates from the game's heap.
    virtual void *vf04(unsigned int size, unsigned int align);
    // Frees to the game's heap; always succeeds.
    virtual bool vf08(void *block, unsigned int size, unsigned int align);
};

#endif
