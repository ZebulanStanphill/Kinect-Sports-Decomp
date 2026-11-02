// R1::IAllocator: the game's allocator interface.
//
// The class name comes from RTTI (no base class). Method names are
// placeholders named after their vtable offset. Slots 0x08 and 0x10 forward to
// the pure slots 0x0C and 0x14.

#ifndef R1_IALLOCATOR_H
#define R1_IALLOCATOR_H

namespace R1 {

class IAllocator {
public:
    // The deleting destructor (fn_82522A00) frees with the global operator
    // delete.
    virtual ~IAllocator() {}
    virtual void vf04();                  // fn_82D7E470
    virtual void vf08();                  // fn_82F54250: calls vf0C
    virtual void vf0C() = 0;
    virtual void vf10();                  // fn_82454BC0: calls vf14
    virtual void vf14() = 0;
    virtual void vf18() = 0;
};

} // namespace R1

#endif
