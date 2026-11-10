#include <string>

/* std::wstring::assign(size_type _Count, wchar_t _Ch) (VC10 xstring). */

/* _Grow, reached by its configured (folded) name */
extern "C" bool fn_822977A8(std::wstring *self, unsigned int newsize, bool trim);
/* _Xlength_error (does not return) */
extern "C" __declspec(noreturn) void fn_82F622A8(const char *msg);

struct WStrAccess_82865290 : std::wstring {
    using std::wstring::_Chassign;
    using std::wstring::_Eos;
};

extern "C" std::wstring *fn_82865290(std::wstring *s, unsigned int count, wchar_t ch)
{
    WStrAccess_82865290 *self = static_cast<WStrAccess_82865290 *>(s);

    if (count == std::wstring::npos)
        fn_82F622A8("string too long");
    if (fn_822977A8(s, count, false)) {
        self->_Chassign(0, count, ch);
        self->_Eos(count);
    }
    return s;
}
