// Removes expired entries from the front of a deque.
//
// Entries are stored in time order, so the loop stops at the first entry whose
// timestamp is not older than the current system time (virtual function 0xC of
// the system object). Element_828B4D60 stands in for the unidentified entry
// type. The deque's single-iterator erase stays out of line; the rest of the
// VC10 deque code is inlined with /O2 /d2inlS1000.
#include <deque>
#include "game/Allocator_825089A0.h"

struct System_828B4D60 {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual unsigned __int64 vf0C();
};

struct Element_828B4D60 {
    int pad0[4];
    unsigned __int64 time;
};

typedef std::deque<Element_828B4D60, Allocator_825089A0<Element_828B4D60, 0> > Deque;
template <> Deque::iterator Deque::erase(const_iterator);

static __forceinline bool Expired(unsigned __int64 now, const Element_828B4D60 &entry)
{
    return now > entry.time;
}

struct Object_828B4D60 {
    int pad0[2];
    Deque entries;
};

extern "C" void fn_828B4D60(Object_828B4D60 *self)
{
    unsigned __int64 now = reinterpret_cast<System_828B4D60 *>(fn_825089A0())->vf0C();
    for (Deque::iterator it = self->entries.begin(); it != self->entries.end();) {
        if ((unsigned char)Expired(now, *it))
            it = self->entries.erase(it);
        else
            break;
    }
}
