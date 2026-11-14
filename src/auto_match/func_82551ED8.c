/* std::_Adjust_heap over 0x5c-byte entries (VC10 <algorithm>), _Push_heap inlined. */
typedef struct Entry_82551ED8 {
    int pad[4];
    int key, second;
} Entry_82551ED8;

static __forceinline unsigned char Less(const Entry_82551ED8 *a, const Entry_82551ED8 *b)
{
    if (a->key == b->key)
        return a->second < b->second;
    return a->key < b->key;
}

static __forceinline void Push_heap(Entry_82551ED8 *first, int hole, int top, Entry_82551ED8 *val)
{
    int idx;
    for (idx = (hole - 1) / 2; top < hole && Less(&first[idx], val); idx = (hole - 1) / 2) {
        first[hole] = first[idx];
        hole = idx;
    }
    first[hole] = *val;
}

void fn_82551ED8(Entry_82551ED8 *first, int hole, int bottom, Entry_82551ED8 *val)
{
    int top = hole;
    int idx;
    for (idx = 2 * hole + 2; idx < bottom; idx = 2 * idx + 2) {
        if (Less(&first[idx], &first[idx - 1]))
            --idx;
        first[hole] = first[idx], hole = idx;
    }
    if (idx == bottom) {
        first[hole] = first[bottom - 1];
        hole = bottom - 1;
    }
    Push_heap(first, hole, top, val);
}
