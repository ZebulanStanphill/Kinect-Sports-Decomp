// Matching callers func_828344D0 and func_828346D0 pass pred in r7.
typedef struct Entry_82834388 {
    unsigned int a, key, c;
} Entry_82834388;

extern void fn_828342A8(Entry_82834388 *, int, int, Entry_82834388 *, unsigned int);

void fn_82834388(Entry_82834388 *first, int hole, int bottom, Entry_82834388 *value, unsigned int pred)
{
    int top = hole, child = 2 * (hole + 1);
    while (child < bottom) {
        if (first[child].key < first[child - 1].key)
            child--;
        first[hole] = first[child];
        hole = child;
        child = 2 * (child + 1);
    }
    if (child == bottom) {
        first[hole] = first[bottom - 1];
        hole = bottom - 1;
    }
    fn_828342A8(first, hole, top, value, pred);
}
