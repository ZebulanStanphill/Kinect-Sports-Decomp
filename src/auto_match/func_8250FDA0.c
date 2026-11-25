typedef struct Element_8250FDA0 {
    unsigned __int64 first;
    unsigned __int64 second;
    float key;
    unsigned int pad14;
    unsigned __int64 fourth;
} Element_8250FDA0;

static __forceinline void SwapIfLess(Element_8250FDA0 *left, Element_8250FDA0 *right)
{
    if (right->key < left->key) {
        Element_8250FDA0 value = *right;
        *right = *left;
        *left = value;
    }
}

void fn_8250FDA0(Element_8250FDA0 *first, Element_8250FDA0 *middle, Element_8250FDA0 *last)
{
    SwapIfLess(first, middle);
    SwapIfLess(middle, last);
    SwapIfLess(first, middle);
}
