#include <string>

/* std::wstring::append(size_type _Count, wchar_t _Ch) (VC10 xstring). */

/* _Grow, reached by its configured (folded) name */
extern "C" bool fn_822977A8(std::wstring *self, unsigned int newsize, bool trim);
/* _Xlength_error (does not return) */
extern "C" __declspec(noreturn) void fn_82F622A8(const char *msg);

struct WStrAccess_82865AF0 : std::wstring {
    using std::wstring::_Chassign;
    using std::wstring::_Eos;
};

extern "C" std::wstring *fn_82865AF0(std::wstring *s, unsigned int count, wchar_t ch)
{
    WStrAccess_82865AF0 *self = static_cast<WStrAccess_82865AF0 *>(s);
    unsigned int num;

    if (std::wstring::npos - self->_Mysize <= count)
        fn_82F622A8("string too long");
    if (0 < count && fn_822977A8(s, num = self->_Mysize + count, false)) {
        self->_Chassign(self->_Mysize, count, ch);
        self->_Eos(num);
    }
    return s;
}
