// std::wstring::_Replace(first, last, first2, last2, input_iterator_tag) from
// Visual C++ 2010's <xstring>, for a std::string's iterators: builds a wstring
// from the source range (the constructor of func_82865C08.cpp) and replaces
// with it.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <string>
#undef _Xlength_error
#undef _Xout_of_range

typedef std::string::const_iterator NarrowIt;

extern "C" void fn_82297DB0(std::wstring *self, bool built, unsigned int newsize);
template <> __forceinline void std::wstring::_Tidy(bool built, std::wstring::size_type newsize)
{
    fn_82297DB0(this, built, newsize);
}

template <> template <> std::basic_string<wchar_t>::basic_string(NarrowIt first, NarrowIt last);
template std::wstring &std::wstring::_Replace<NarrowIt>(std::wstring::const_iterator, std::wstring::const_iterator, NarrowIt, NarrowIt, std::input_iterator_tag);
