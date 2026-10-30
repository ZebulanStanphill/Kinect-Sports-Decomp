// R1::Soundscape::WwiseErrorDecoder_c default constructor: vtable, empty std::string at +4,
// a tree container at +0x20 (its constructor takes the empty comparator and allocator
// temporaries), and a flag byte at +0x30.
#include <xstring>

extern "C" {
void fn_82230300(void *self, bool built, unsigned int newsize);
void fn_8286DC10(void *self, const void *comp, const void *alloc);
}
#include <string>

template <>
__forceinline void std::basic_string<char, std::char_traits<char>, std::allocator<char> >::_Tidy(bool built,
                                                                                              size_t newsize)
{
    fn_82230300(this, built, newsize);
}

struct Empty_8286DBB0 {
};

struct Tree_8286DBB0 {
    char data[0x10];
    __forceinline Tree_8286DBB0()
    {
        Empty_8286DBB0 e;
        fn_8286DC10(this, &e, &e);
    }
};

namespace R1 {
namespace Soundscape {
class WwiseErrorDecoder_c {
public:
    WwiseErrorDecoder_c();
    virtual ~WwiseErrorDecoder_c();
    std::string m_name;
    Tree_8286DBB0 m_tree;
    unsigned char m_flag;
};

WwiseErrorDecoder_c::WwiseErrorDecoder_c()
    : m_flag(0)
{
}
}
}
