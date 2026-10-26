// Allocate a tree node and copy its 16-byte value. The placeholder value
// retains the original eight-byte alignment and system allocator category.
#include <set>
#include "game/Allocator_825089A0.h"
struct Element_828C1040 { unsigned __int64 data[2]; };
typedef std::_Tree_val<std::_Tset_traits<Element_828C1040,
    std::less<Element_828C1040>, Allocator_825089A0<Element_828C1040, 2>, false> > TreeVal;
extern "C" TreeVal::_Nodeptr fn_828C1040(TreeVal *self, const Element_828C1040 *value)
{
    return self->_Buynode(*value);
}
