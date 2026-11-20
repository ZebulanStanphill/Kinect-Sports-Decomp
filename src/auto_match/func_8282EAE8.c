typedef struct Item_8282EAE8 {
    unsigned int first;  /* 0x0 */
    unsigned int size;   /* 0x4 */
    unsigned int third;  /* 0x8 */
    unsigned int offset; /* 0xc */
} Item_8282EAE8;

/* The heap's ordering predicate: an item sorts before another when it ends at or before
   the other's offset. */
static __forceinline unsigned char EndsBefore(const Item_8282EAE8 *left, const Item_8282EAE8 *right)
{
    return left->offset + left->size <= right->offset;
}

/* std::_Push_heap over item pointers; the predicate object is empty and passed by value. */
void fn_8282EAE8(Item_8282EAE8 **first, int hole, int top, Item_8282EAE8 **value, unsigned int predicate)
{
    int index;

    for (index = (hole - 1) / 2; top < hole && EndsBefore(first[index], *value); index = (hole - 1) / 2) {
        first[hole] = first[index];
        hole = index;
    }
    first[hole] = *value;
}
