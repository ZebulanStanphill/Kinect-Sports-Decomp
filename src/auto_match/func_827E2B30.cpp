// std::vector<Element>::erase(const_iterator, const_iterator) from <vector>, for an
// 8-byte shared_ptr-like element. The element's move assignment and the vector's
// _Destroy_range are the original's out-of-line helpers.
#include <vector>

struct Element_827E2B30 {
    void *ptr;
    void *rep;
    Element_827E2B30 &operator=(Element_827E2B30 &&other);
    ~Element_827E2B30();
};

typedef std::vector<Element_827E2B30> Vector_827E2B30;
template class std::_Vector_iterator<Vector_827E2B30::_Mybase>;
template class std::_Vector_const_iterator<Vector_827E2B30::_Mybase>;

extern "C" {
Element_827E2B30 *fn_823F2E20(Element_827E2B30 *self, Element_827E2B30 *other);
void fn_82231540(Element_827E2B30 *first, Element_827E2B30 *last, std::allocator<Element_827E2B30> *al,
                 std::_Nonscalar_ptr_iterator_tag tag);
}

__forceinline Element_827E2B30 &Element_827E2B30::operator=(Element_827E2B30 &&other)
{
    return *fn_823F2E20(this, &other);
}

namespace std {
template <>
__forceinline void _Destroy_range(Element_827E2B30 *first, Element_827E2B30 *last, allocator<Element_827E2B30> &al,
                                  _Nonscalar_ptr_iterator_tag tag)
{
    fn_82231540(first, last, &al, tag);
}
}

extern "C" Vector_827E2B30::iterator fn_827E2B30(Vector_827E2B30 *self, Vector_827E2B30::const_iterator first,
                                                Vector_827E2B30::const_iterator last)
{
    return self->erase(first, last);
}
