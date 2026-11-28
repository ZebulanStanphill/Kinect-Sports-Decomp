#include <string>

extern "C" const char lbl_821AC4B4[1];
extern "C" double fn_822EC770(const std::string &text);

extern "C" void fn_82230300(std::string *, bool, unsigned int);
extern "C" std::string *fn_82230218(std::string *, const std::string *, unsigned int, unsigned int);

template <> __forceinline void std::string::_Tidy(bool built, std::string::size_type size)
{
    fn_82230300(this, built, size);
}

template <>
__forceinline std::string &std::string::assign(const std::string &source, std::string::size_type offset,
                                               std::string::size_type count)
{
    return *fn_82230218(this, &source, offset, count);
}

extern "C" double fn_822EC378(const std::string &text)
{
    std::string::size_type position = text.find_last_of(lbl_821AC4B4, std::string::npos, 1);
    std::string suffix = text.substr(position + 1);
    return fn_822EC770(suffix);
}
