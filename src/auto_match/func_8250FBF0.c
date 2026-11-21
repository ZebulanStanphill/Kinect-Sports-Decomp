typedef struct Element_8250FBF0 {
    unsigned __int64 first;  /* 0x00 */
    unsigned __int64 second; /* 0x08 */
    float key;               /* 0x10 */
    unsigned int pad14;
    unsigned __int64 fourth; /* 0x18 */
} Element_8250FBF0;

static __forceinline int KeyLess(const Element_8250FBF0 *left, const Element_8250FBF0 *right)
{
    return left->key < right->key;
}

/* Insertion sort of [first, last) by ascending key (std::_Insertion_sort1). */
void fn_8250FBF0(Element_8250FBF0 *first, Element_8250FBF0 *last)
{
    Element_8250FBF0 *next;

    if (first == last)
        return;
    for (next = first; ++next != last;) {
        Element_8250FBF0 *next1 = next;
        Element_8250FBF0 value = *next;

        if (KeyLess(&value, first)) {
            Element_8250FBF0 *src = next;
            Element_8250FBF0 *dest = ++next1;

            while (first != src)
                *--dest = *--src;
            *first = value;
        } else {
            Element_8250FBF0 *first1;

            for (first1 = next1; KeyLess(&value, --first1); next1 = first1)
                *next1 = *first1;
            *next1 = value;
        }
    }
}
