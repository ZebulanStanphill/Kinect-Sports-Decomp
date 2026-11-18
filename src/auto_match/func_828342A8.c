/* std::_Push_heap over 12-byte entries ordered by their unsigned key (operator<). */
typedef struct Entry_828342A8 {
    int value;        /* 0x0 */
    unsigned int key; /* 0x4 */
    int extra;        /* 0x8 */
} Entry_828342A8;

void fn_828342A8(Entry_828342A8 *first, int hole, int top, Entry_828342A8 *value)
{
    int index;

    for (index = (hole - 1) / 2; top < hole && first[index].key < value->key; index = (hole - 1) / 2) {
        first[hole] = first[index];
        hole = index;
    }
    first[hole] = *value;
}
