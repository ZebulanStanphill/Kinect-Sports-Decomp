#include <string>

/* std::wstring::assign<std::string::const_iterator>(first, last): replace(begin(), end(), first, last) inlined. */
template <> template <> std::wstring &std::wstring::_Replace<std::string::const_iterator>(std::wstring::const_iterator, std::wstring::const_iterator, std::string::const_iterator, std::string::const_iterator, std::input_iterator_tag);

extern "C" std::wstring *fn_82865DF8(std::wstring *self, std::string::const_iterator first, std::string::const_iterator last)
{
    return &self->replace(self->begin(), self->end(), first, last);
}
