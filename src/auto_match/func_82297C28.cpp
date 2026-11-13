// std::basic_streambuf<wchar_t>::~basic_streambuf(), still under its fn_ name
// (its vtable is lbl_821AA92C): deletes the locale through std::locale's
// deleting destructor, fn_8223DA98, then destroys the _Mutex member.
#include <locale>

extern "C" {
extern char lbl_821AA92C[];
void *fn_8223DA98(std::locale *locale, unsigned int flags);
}

struct WideStreambuf_82297C28 {
    void *vtbl;
    std::_Mutex lock;
    char pad8[0x30];
    std::locale *locale;
};

extern "C" void fn_82297C28(WideStreambuf_82297C28 *self)
{
    self->vtbl = lbl_821AA92C;
    if (self->locale != 0) {
        fn_8223DA98(self->locale, 1);
    }
    self->lock.~_Mutex();
}
