#include <string>
#include <algorithm>
#include <new>

extern "C" std::wstring *fn_822974F0(std::wstring *, unsigned int, unsigned int);
extern "C" std::wstring *fn_82865AF0(std::wstring *, unsigned int, wchar_t);

template <>
__forceinline std::wstring &std::wstring::erase(std::wstring::size_type offset, std::wstring::size_type count)
{
    return *fn_822974F0(this, offset, count);
}

template <> __forceinline std::wstring &std::wstring::append(std::wstring::size_type count, wchar_t character)
{
    return *fn_82865AF0(this, count, character);
}

class Wide_8287C878 : public std::wstring
{
  public:
    Wide_8287C878(const std::string &source);
};

Wide_8287C878::Wide_8287C878(const std::string &source)
{
    resize(source.size());
    std::copy(source.begin(), source.end(), begin());
}
