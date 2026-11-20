// std::_Copy_impl from Visual C++ 2010's <xutility> (the loop of std::copy for
// iterators that are not pointers to scalars), for the unchecked iterators of
// a std::deque whose 0x34-byte element has its own assignment: the value at +4
// and the 42 bytes at +8, the bytes through an inline helper that takes both
// elements (written straight into operator= the compiler moves the store of
// the destination offset out of the loop; the original keeps it inside).
// Elem_828D5268 stands for the element until its real name is known.
#include <deque>
#include <xutility>

struct Elem_828D5268 {
    int pad0;
    int value;                /* 0x4 */
    unsigned char data[0x2a]; /* 0x8 */

    static void CopyData(Elem_828D5268 *to, const Elem_828D5268 *from)
    {
        for (int i = 0; i < 0x2a; i++) {
            to->data[i] = from->data[i];
        }
    }

    Elem_828D5268 &operator=(const Elem_828D5268 &right)
    {
        value = right.value;
        CopyData(this, &right);
        return *this;
    }
};

typedef std::deque<Elem_828D5268> Deque_828D5268;
typedef Deque_828D5268::iterator::_Unchecked_type Iterator_828D5268;

template Iterator_828D5268 std::_Copy_impl(Iterator_828D5268, Iterator_828D5268, Iterator_828D5268,
                                           std::_Nonscalar_ptr_iterator_tag);
