/* std::_Adjust_heap over 0x5c-byte entries (VC10 <algorithm>), _Push_heap inlined. */
typedef struct Entry_824406C0 {
    int id;
    int pad[16];
    unsigned int key;
    int valid;
    int rest[4];
} Entry_824406C0;

static __forceinline unsigned char Less(const Entry_824406C0 *a, const Entry_824406C0 *b)
{
    return a->key > b->key || (a->key == b->key && a->id < b->id);
}

static __forceinline void Push_heap(Entry_824406C0 *first, int hole, int top, Entry_824406C0 *val)
{
    int idx;
    for (idx = (hole - 1) / 2; top < hole && Less(&first[idx], val); idx = (hole - 1) / 2) {
        first[hole] = first[idx];
        hole = idx;
    }
    first[hole] = *val;
}

void fn_824406C0(Entry_824406C0 *first, int hole, int bottom, Entry_824406C0 *val)
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
