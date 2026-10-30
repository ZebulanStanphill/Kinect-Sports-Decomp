// std::ctype<wchar_t>::~ctype() from Visual C++ 2010's <xlocale>: frees the classification table
// when _Ctype._Delfl is set, then the inline ~ctype_base/~facet store the facet vtable.
// The explicit specialisation's inline destructor cannot be instantiated from <locale>, so the
// classes are declared here with VC10's layout and the destructor is defined out of line.
// fn_82F641F8 is the CRT free (HeapFree + errno from GetLastError).
extern "C" void fn_82F641F8(void *p);

namespace std {
struct _Ctypevec {
    unsigned long _Hand;
    unsigned int _Page;
    const short *_Table;
    int _Delfl;
};

class locale {
public:
    class facet {
    public:
        virtual ~facet() {}
    protected:
        unsigned int _Refs;
    };
};

struct ctype_base : public locale::facet {
    ~ctype_base() {}
};

template<class _Elem> class ctype;

template<> class ctype<wchar_t> : public ctype_base {
public:
    virtual __forceinline ~ctype();
protected:
    _Ctypevec _Ctype;
};

__forceinline ctype<wchar_t>::~ctype()
{
    if (_Ctype._Delfl)
        fn_82F641F8((void *)_Ctype._Table);
}
}

extern "C" void fn_82296EF8(std::ctype<wchar_t> *self)
{
    self->std::ctype<wchar_t>::~ctype();
}
