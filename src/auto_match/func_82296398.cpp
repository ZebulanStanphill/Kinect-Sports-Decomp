// std::numpunct<wchar_t>::~numpunct() from Visual C++ 2010's <xlocnum>: frees the
// grouping and the two name strings, then the inline ~facet stores the facet
// vtable. The library frees them through its _DELETE_CRT_VEC macro (delete[]);
// here it calls operator delete[] by the name C units use, fn_8265CAA0.
#include <xdebug>

extern "C" void fn_8265CAA0(void *ptr);

#undef _DELETE_CRT_VEC
#define _DELETE_CRT_VEC(ptr) fn_8265CAA0(ptr)
#include <locale>

template std::numpunct<wchar_t>::~numpunct();
