typedef struct Entry_82876858 {
    unsigned int key;       /* 0x00 */
    int data[4];            /* 0x04 */
    unsigned int sub;       /* 0x14 */
} Entry_82876858;

typedef struct Table_82876858 {
    int count;                      /* 0x00 */
    Entry_82876858 entries[1];      /* 0x04 */
} Table_82876858;

typedef struct Owner_82876858 {
    int unk0;
    unsigned short id;      /* 0x04 */
} Owner_82876858;

Entry_82876858 *fn_82876858(Owner_82876858 *owner, unsigned int key, Table_82876858 *table, unsigned char useId)
{
    unsigned short sub;
    int lo, hi, mid;
    Entry_82876858 *e;
    Entry_82876858 *entries = table->entries;

    if (useId) {
        sub = owner->id;
    } else {
        sub = 0;
    }
    lo = 0;
    hi = table->count - 1;
    do {
        mid = (hi - lo) / 2 + lo;
        e = &entries[mid];
        if (e->key > key) {
            hi = mid - 1;
        } else if (e->key < key) {
            lo = mid + 1;
        } else if (e->sub > sub) {
            hi = mid - 1;
        } else if (e->sub < sub) {
            lo = mid + 1;
        } else {
            return e;
        }
    } while (lo <= hi);
    return 0;
}
