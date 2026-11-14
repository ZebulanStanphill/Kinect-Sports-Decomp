// std::vector<T>::resize(size_type, T) from Visual C++ 2010's <vector>, for the
// same T as func_8288D230.cpp (a pointer to the placeholder Element_8288D230).
// _Insert_n is defined there; declaring the specialization keeps it a call.

#include <vector>

struct Element_8288D230;

typedef Element_8288D230 *T;

template <> void std::vector<T>::_Insert_n(const_iterator, size_type, const T &);

template void std::vector<T>::resize(size_type, T);
