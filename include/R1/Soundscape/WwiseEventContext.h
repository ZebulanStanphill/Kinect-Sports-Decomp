// R1::Soundscape::WwiseEventContext_c: the context of a Wwise event's state
// machine. It forwards its virtual calls to its current WwiseEventState_c.
//
// The class name comes from RTTI (it has no base class). Method and field names
// are placeholders named after their vtable or field offset.

#ifndef R1_SOUNDSCAPE_WWISEEVENTCONTEXT_H
#define R1_SOUNDSCAPE_WWISEEVENTCONTEXT_H

#include "R1/Soundscape/Heap.h"
#include "R1/Soundscape/WwiseEventState.h"

namespace R1 {
namespace Soundscape {

class WwiseEventContext_c {
public:
    // The deleting destructor frees through the Soundscape heap.
    R1_SOUNDSCAPE_HEAP_OPERATORS

    WwiseEventContext_c();
    WwiseEventContext_c(WwiseEventState_c *state);
    virtual ~WwiseEventContext_c();
    virtual int vf04(unsigned int unk1, unsigned int unk2, unsigned int unk3);
    virtual int vf08(unsigned int unk1, unsigned int unk2);
    virtual int vf0C(unsigned int unk1, unsigned int unk2);
    virtual int vf10(unsigned int unk1, unsigned int unk2);
    virtual int vf14(unsigned int unk1, unsigned int unk2, unsigned int unk3);
    virtual int vf18(unsigned int unk1, unsigned int unk2);
    virtual int vf1C(unsigned int unk1);

    WwiseEventState_c *state;
    unsigned int unk08; // WwiseEmitter_c embeds the context at +0x44 and its next member is at +0x50
};

} // namespace Soundscape
} // namespace R1

#endif
