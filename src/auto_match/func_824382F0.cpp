// std::_Uninit_copy for a 24-byte element (VC10 <memory>): a class with a
// vtable (lbl_821B9328), a std::vector of 92-byte POD items (fn_822A51A0's
// vector) and an int. The vector's _Buy stays out of line as fn_822A53D8.
#include <vector>

struct Item_824382F0 {
    unsigned char b[0x5c];
};
typedef std::vector<Item_824382F0> Items;

extern "C" {
extern char lbl_821B9328[];
bool fn_822A53D8(Items *self, unsigned int count);
}

template <> __forceinline bool Items::_Buy(size_type n) { return fn_822A53D8(this, n); }

struct Element_824382F0 {
    void *vt;
    Items items;
    int value;

    Element_824382F0(const Element_824382F0 &o) : vt(lbl_821B9328), items(o.items), value(o.value) {}
};

typedef Element_824382F0 T;

extern "C" T *fn_824382F0(T *first, T *last, T *dest)
{
    std::allocator<T> al;
    return std::_Uninit_copy(first, last, dest, al, std::_Nonscalar_ptr_iterator_tag());
}
