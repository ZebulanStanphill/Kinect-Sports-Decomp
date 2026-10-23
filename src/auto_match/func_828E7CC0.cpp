// std::vector<T> copy constructor (VC10 STL, sizeof(T) == 8), written out with the
// library's helpers; fn_828E6460 is _Buy, fn_828E6C98 is _Uninit_copy taking the
// const_iterators by value.
struct Item { unsigned a, b; };
template <class T> struct allocator { };
struct _Nonscalar_ptr_iterator_tag { };
struct _Container_base0 { };
struct _Iterator_base0 { void _Adopt(const void *) {} };
struct Vec;

struct CIt : _Iterator_base0 {
    CIt(Item *p, const _Container_base0 *v) : _Ptr(p) { this->_Adopt(v); }
    Item *_Ptr;
};

extern "C" unsigned char fn_828E6460(Vec *, unsigned int);
extern "C" Item *fn_828E6C98(CIt, CIt, Item *, allocator<Item> &, _Nonscalar_ptr_iterator_tag);

template <class T1, class T2> inline _Nonscalar_ptr_iterator_tag _Ptr_cat(T1 &, T2 &)
{
    _Nonscalar_ptr_iterator_tag _Cat;
    return _Cat;
}

template <class InIt, class FwdIt, class Alloc> inline
FwdIt _Uninitialized_copy(InIt _First, InIt _Last, FwdIt _Dest, Alloc &_Al)
{
    return fn_828E6C98(_First, _Last, _Dest, _Al, _Ptr_cat(_First, _Dest));
}

struct VecVal : _Container_base0 {
    VecVal(allocator<Item> _Al = allocator<Item>()) : _Alval(_Al) { _Myfirst = 0; _Mylast = 0; _Myend = 0; }
    Item *_Myfirst, *_Mylast, *_Myend;
    allocator<Item> _Alval;
};

struct Vec : VecVal {
    CIt begin() const { return CIt(this->_Myfirst, this); }
    CIt end() const { return CIt(this->_Mylast, this); }
    unsigned int size() const { return this->_Mylast - this->_Myfirst; }
    bool _Buy(unsigned int n) { return fn_828E6460(this, n) != 0; }
    template <class It> Item *_Ucopy(It _First, It _Last, Item *_Ptr) { return _Uninitialized_copy(_First, _Last, _Ptr, this->_Alval); }
    __forceinline Vec(const Vec &_Right) : VecVal(_Right._Alval)
    {
        if (_Buy(_Right.size()))
            this->_Mylast = _Ucopy(_Right.begin(), _Right.end(), this->_Myfirst);
    }
};

extern "C" Vec *fn_828E7CC0(Vec *p, const Vec *s)
{
    p->Vec::Vec(*s);
    return p;
}
