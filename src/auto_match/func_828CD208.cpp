// std::vector<T>::resize(size_type) from Visual C++ 2010's <vector>, for the vector of
// pointers to Element_8288C1B8 (placeholder). _Reserve is the out-of-line member;
// erase and the zero fill are inlined.
#include <vector>

struct Element_8288C1B8;

typedef Element_8288C1B8 *T;
typedef std::vector<T> V;

template <> void V::_Reserve(size_type count);

extern "C" void fn_828CD208(V *self, V::size_type count)
{
    self->resize(count);
}
