// Set the mapped flag for keys 0 through 26. The map uses the system
// allocator with category 0 and retains its out-of-line hinted insertion.
#include <map>
#include "game/Allocator_825089A0.h"
typedef std::pair<const unsigned int, bool> Value_8288B060;
typedef std::map<unsigned int, bool, std::less<unsigned int>,
    Allocator_825089A0<Value_8288B060, 0> > Map;
typedef Map::_Mybase Tree;
extern "C" Tree::iterator *fn_8288A9B8(Tree::iterator *, Tree *,
                                       Tree::const_iterator, Tree::_Nodeptr);
template <> __forceinline Tree::iterator Tree::_Insert(const_iterator where, _Nodeptr node) {
    _Nodeptr raw;
    fn_8288A9B8(reinterpret_cast<iterator *>(&raw), this, where, node);
    return iterator(raw, this);
}
struct Object_8288B060 { char pad[0x124]; Map flags; };
extern "C" void fn_8288B060(Object_8288B060 *self, bool value) {
    for (unsigned int i = 0; i < 27; ++i) self->flags[i] = value;
}
