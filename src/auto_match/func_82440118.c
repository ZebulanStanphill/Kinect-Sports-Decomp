/* std::_Adjust_heap over 0x5c-byte entries (VC10 <algorithm>), _Push_heap inlined. */
typedef struct Entry_82440118 {
    int id;
    int pad[17];
    int key;
    int valid;
    int rest[3];
} Entry_82440118;

static __forceinline unsigned char Less(const Entry_82440118 *a, const Entry_82440118 *b)
{
    if (a->valid != 1)
        return 0;
    if (b->valid != 1)
        return 1;
    return a->key < b->key || (a->key == b->key && a->id < b->id);
}

static __forceinline void Push_heap(Entry_82440118 *first, int hole, int top, Entry_82440118 *val)
{
    int idx;
    for (idx = (hole - 1) / 2; top < hole && Less(&first[idx], val); idx = (hole - 1) / 2) {
        first[hole] = first[idx];
        hole = idx;
    }
    first[hole] = *val;
}

void fn_82440118(Entry_82440118 *first, int hole, int bottom, Entry_82440118 *val)
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
