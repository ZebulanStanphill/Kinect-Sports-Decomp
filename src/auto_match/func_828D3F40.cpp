// Destroy a range of vectors whose 80-byte elements have an out-of-line
// destruction helper. Both levels use the game's system allocator.
#include <vector>
#include "game/Allocator_825089A0.h"
struct Element_828D3F40 { int data[20]; ~Element_828D3F40(); };
typedef Allocator_825089A0<Element_828D3F40,1> InnerAllocator;
typedef std::vector<Element_828D3F40,InnerAllocator> Vector;
extern "C" void fn_828D3860(Element_828D3F40 *, Element_828D3F40 *, InnerAllocator *, std::_Nonscalar_ptr_iterator_tag);
template <> __forceinline void std::_Destroy_range<InnerAllocator>(Element_828D3F40 *first, Element_828D3F40 *last, InnerAllocator &al, std::_Nonscalar_ptr_iterator_tag tag) { fn_828D3860(first,last,&al,tag); }
struct Entry_828D3F40 { int key; Vector values; };
extern "C" void fn_828D3F40(Entry_828D3F40 *first, Entry_828D3F40 *last) {
 for (;first != last; ++first) first->~Entry_828D3F40();
}
