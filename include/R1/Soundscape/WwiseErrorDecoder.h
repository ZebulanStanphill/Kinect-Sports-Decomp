// R1::Soundscape::WwiseErrorDecoder_c: turns Wwise result codes into text. A
// name (std::string at +4), a tree container at +0x20 (a std::map whose key and
// value types are unknown; its constructor fn_8286DC10 and erase fn_8286E160
// are out-of-line library code) and a flag byte. The class name comes from
// RTTI (no base class); member names are placeholders. Allocated from the
// Soundscape heap (its deleting destructor frees there).
//
// Units using this header include <string> (and so are "vc_include").

#ifndef R1_SOUNDSCAPE_WWISEERRORDECODER_H
#define R1_SOUNDSCAPE_WWISEERRORDECODER_H

#include <string>

#include "R1/Soundscape/Heap.h"

extern "C" {
void fn_82230300(void *self, bool built, unsigned int newsize); // std::string::_Tidy
void fn_8265CA20(void *block);                                   // operator delete
// The tree's constructor (comparator, allocator) and erase(result, first, last).
void fn_8286DC10(void *self, const void *comp, const void *alloc);
}

template <>
__forceinline void std::basic_string<char, std::char_traits<char>, std::allocator<char> >::_Tidy(bool built,
                                                                                              size_t newsize)
{
    fn_82230300(this, built, newsize);
}

namespace R1 {
namespace Soundscape {

struct Empty_8286DBB0 {
};

// A VC10 _Tree: allocator byte, head node, size.
struct Tree_8286DBB0 {
    struct Node {
        Node *left;
        Node *parent;
        Node *right;
    };

    // An iterator (one word, passed by value).
    struct Iterator {
        Node *ptr;
        __forceinline Iterator(Node *p) : ptr(p) {}
    };

    char unk00[4];
    Node *head;
    unsigned int size;
    char unk0C[4];

    __forceinline Tree_8286DBB0()
    {
        Empty_8286DBB0 e;
        fn_8286DC10(this, &e, &e);
    }
    // erase(begin(), end()), then free the head node.
    __forceinline ~Tree_8286DBB0();
};

extern "C" void fn_8286E160(void *result, Tree_8286DBB0 *tree,
                            Tree_8286DBB0::Iterator first, Tree_8286DBB0::Iterator last);

__forceinline Tree_8286DBB0::~Tree_8286DBB0()
{
    Node *result;
    fn_8286E160(&result, this, Iterator(head->left), Iterator(head));
    fn_8265CA20(head);
}

class WwiseErrorDecoder_c {
public:
    R1_SOUNDSCAPE_HEAP_OPERATORS

    WwiseErrorDecoder_c();
    virtual ~WwiseErrorDecoder_c();

    std::string m_name;
    Tree_8286DBB0 m_tree;
    unsigned char m_flag;
};

} // namespace Soundscape
} // namespace R1

#endif
