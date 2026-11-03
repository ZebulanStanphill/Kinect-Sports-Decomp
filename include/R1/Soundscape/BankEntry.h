// R1::Soundscape::BankEntry_c: a Wwise sound bank named by an AudioVariant_c,
// with three flag bytes. The class name comes from RTTI (no base class); field
// names are placeholders. Allocated from the Soundscape heap (its deleting
// destructor frees there).
//
// The constructor (func_8287A7D8, ??0BankEntry_c@Soundscape@R1@@QAA@XZ) is
// still declared on a local class: it copies an AudioVariant_c that its caller
// passes in r4, so its real signature probably takes one, but its current name
// says it takes nothing.

#ifndef R1_SOUNDSCAPE_BANKENTRY_H
#define R1_SOUNDSCAPE_BANKENTRY_H

#include "R1/Soundscape/AudioVariant.h"
#include "R1/Soundscape/Heap.h"

namespace R1 {
namespace Soundscape {

class BankEntry_c {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS

    virtual ~BankEntry_c();

    AudioVariant_c variant;
    unsigned char unk28;
    unsigned char unk29;
    unsigned char pad2A[2];
    unsigned char unk2C;
};

} // namespace Soundscape
} // namespace R1

#endif
