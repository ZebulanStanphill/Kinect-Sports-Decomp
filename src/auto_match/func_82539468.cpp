// std::_Rotate for random-access iterators over a 0x38-byte element holding a string, from
// Visual C++ 2010's <xutility>. Link-time code generation dropped the unused iterator-tag
// argument, so the function takes the three pointers only. The element's copy constructor
// and assignment stay calls; its destructor inlines to the string's _Tidy(true, 0).

#include <xutility>

extern "C" void fn_82230300(void *string, int built, unsigned int newSize);

struct String_82539468 {
    char raw[0x1c];

    ~String_82539468()
    {
        fn_82230300(this, 1, 0);
    }
};

struct Bytes_82539468 {
    unsigned char v[8];
};

struct Element_82539468 {
    unsigned __int64 key; /* 0x00 */
    String_82539468 name; /* 0x08 */
    int value;            /* 0x24 */
    Bytes_82539468 bytes; /* 0x28 */
    int extra;            /* 0x30 */
    Element_82539468(const Element_82539468 &other);
    Element_82539468 &operator=(const Element_82539468 &other);
};

typedef Element_82539468 T;

extern "C" void fn_82539468(T *first, T *mid, T *last)
{
    std::_Rotate(first, mid, last, std::random_access_iterator_tag());
}
