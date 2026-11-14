typedef struct Entry_8300E510 {
    unsigned int key;
    int value0;
    int value1;
} Entry_8300E510;

Entry_8300E510 *fn_8300E510(void *self, Entry_8300E510 *table, int count, unsigned int key)
{
    int lo = 0;
    int hi = count - 1;
    do {
        int mid = (hi - lo) / 2 + lo;
        Entry_8300E510 *e = &table[mid];
        if (e->key > key) {
            hi = mid - 1;
        } else if (e->key < key) {
            lo = mid + 1;
        } else {
            return e;
        }
    } while (lo <= hi);
    return 0;
}
