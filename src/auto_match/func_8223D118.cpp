// std::basic_stringbuf<char> scalar deleting destructor
extern "C" {
void fn_8223DB60(void *self);
void fn_8223DB10(void *self);
void fn_8265CA20(void *p);
}

namespace std {
template <class T> struct char_traits;
template <class T> class allocator;
template <class E, class T, class A> class __declspec(novtable) basic_streambuf_8223D118 {
public:
    virtual __forceinline ~basic_streambuf_8223D118() { fn_8223DB10(this); }
    char pad[0x40];
};
template <class E, class T, class A> class basic_stringbuf : public basic_streambuf_8223D118<E, T, A> {
public:
    virtual __forceinline ~basic_stringbuf() { fn_8223DB60(this); }
};
}

typedef std::basic_stringbuf<char, std::char_traits<char>, std::allocator<char> > Stringbuf;

extern "C" Stringbuf *fn_8223D118(Stringbuf *self, unsigned int flags)
{
    self->Stringbuf::~Stringbuf();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
