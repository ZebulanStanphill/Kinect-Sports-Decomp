// Updates a list of shared entries, removing those that have expired.
//
// An entry is expired when the list holds its only reference and it is either
// inactive or was last touched at least 600000 clock ticks ago (the clock is
// virtual function 0xC of the system object). Expired entries are erased from
// the vector; the others are refreshed, with an extra step for entries whose
// state is 1 or less. The vector's out-of-line move and destroy helpers keep
// their fn_ names through inline specializations.
#include <vector>
#include <memory>
#include "game/Allocator_825089A0.h"

typedef unsigned __int64 U64;

struct Clock_828D0788 {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual U64 vf0C();
};

struct Entry_828D0788 {
    char pad0[8];
    bool active;
    char pad9[0x73];
    int state;
    char pad80[0x10];
    U64 time;
};

typedef std::tr1::shared_ptr<Entry_828D0788> Ptr;
typedef Allocator_825089A0<Ptr, 0> PtrAllocator;
typedef std::vector<Ptr, PtrAllocator> Vec;

struct Owner_828D0788 {
    char pad0[0x14];
    Vec entries;
};

extern "C" {
Ptr *fn_828B6DD0(Ptr *, Ptr *, Ptr *, std::_Nonscalar_ptr_iterator_tag);
void fn_82231540(Ptr *, Ptr *, PtrAllocator *, std::_Nonscalar_ptr_iterator_tag);
void fn_828CFB00(Entry_828D0788 *);
void fn_828D0188(Entry_828D0788 *);
}

namespace std {
template <>
__forceinline Ptr *_Move(Ptr *first, Ptr *last, Ptr *dest, _Nonscalar_ptr_iterator_tag tag)
{
    return fn_828B6DD0(first, last, dest, tag);
}
template <>
__forceinline void _Destroy_range(Ptr *first, Ptr *last, PtrAllocator &al,
                                  _Nonscalar_ptr_iterator_tag tag)
{
    fn_82231540(first, last, &al, tag);
}
}

extern "C" void fn_828D0788(Owner_828D0788 *self)
{
    Vec &entries = self->entries;
    for (Vec::iterator it = self->entries.begin(); it != self->entries.end();) {
        bool expired = false;
        if (it->unique()) {
            Entry_828D0788 *entry = it->get();
            expired = true;
            if (entry->active
                && ((Clock_828D0788 *)fn_825089A0())->vf0C() - entry->time < 600000)
                expired = false;
        }
        if (expired)
            it = entries.erase(it);
        else {
            if ((*it)->state <= 1)
                fn_828CFB00(it->get());
            fn_828D0188(it->get());
            ++it;
        }
    }
}
