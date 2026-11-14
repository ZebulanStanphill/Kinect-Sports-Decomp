// std::vector<char>::resize(size_type) from Visual C++ 2010's <vector>.
// _Reserve stays the out-of-line member; erase(first, last) inlines.
// The function keeps its fn_ name because Matching callers use it.
#include <vector>

typedef std::vector<char> V;

template <> void V::_Reserve(size_type count);

extern "C" void fn_8223C3D0(V *self, V::size_type count)
{
    self->resize(count);
}
