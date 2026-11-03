// R1::Soundscape::BankFactory_i and its implementation WwiseBankFactory_c.
//
// The class names and the inheritance come from RTTI. BankFactory_i has 14 pure
// slots (0x00-0x34) and a virtual destructor (0x38); method and field names are
// placeholders. WwiseBankFactory_c holds two pointer vectors (their element
// types are unknown); it is allocated from the Soundscape heap, BankFactory_i's
// own deleting destructor frees through the global operator delete.

#ifndef R1_SOUNDSCAPE_BANKFACTORY_H
#define R1_SOUNDSCAPE_BANKFACTORY_H

#include <vector>

#include "R1/Soundscape/Heap.h"

extern "C" void fn_8265CA20(void *block); // operator delete

namespace R1 {
namespace Soundscape {

class BankFactory_i {
public:
    static void operator delete(void *block) { fn_8265CA20(block); }

    virtual void vf00() = 0;
    virtual void vf04() = 0;
    virtual void vf08() = 0;
    virtual void vf0C() = 0;
    virtual void vf10() = 0;
    virtual void vf14() = 0;
    virtual void vf18() = 0;
    virtual void vf1C() = 0;
    virtual void vf20() = 0;
    virtual void vf24() = 0;
    virtual void vf28() = 0;
    virtual void vf2C() = 0;
    virtual void vf30() = 0;
    virtual void vf34() = 0;
    virtual ~BankFactory_i() {}
};

class WwiseBankFactory_c : public BankFactory_i {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS

    WwiseBankFactory_c();
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
    virtual void vf2C();
    virtual void vf30();
    virtual void vf34();
    virtual ~WwiseBankFactory_c();

    std::vector<void *> unk04;
    std::vector<void *> unk14;
};

} // namespace Soundscape
} // namespace R1

#endif
