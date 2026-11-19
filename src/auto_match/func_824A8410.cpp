// std::list<T>::merge(list &) from Visual C++ 2010's <list>: it moves the nodes of
// another sorted list into this one, ordered by T's operator< (a float key at +4).
// Element_824A8410 is a placeholder for the game's 8-byte element type.

// <list> calls std::_Xlength_error directly, so its name is replaced here.
namespace std
{
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}

#define _Xlength_error fn_82F622A8
#include <list>
#undef _Xlength_error

struct Element_824A8410 {
    int value; // 0x0
    float key; // 0x4

    bool operator<(const Element_824A8410 &other) const
    {
        return key < other.key;
    }
};

typedef std::list<Element_824A8410> List;

template void List::merge(List &);
