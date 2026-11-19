/* Orders two register-table entries: first by which of the four swizzle slots are used, then by
 * the 64-bit keys of the used slots. The key comparisons are member operators. */
struct Key_82BAF900 {
    unsigned int high; /* 0x0 */
    unsigned int low;  /* 0x4 */

    bool operator!=(const Key_82BAF900 &other) const
    {
        return high != other.high || low != other.low;
    }

    bool operator<(const Key_82BAF900 &other) const
    {
        if (high != other.high) {
            return high < other.high;
        }
        return low < other.low;
    }
};

struct Entry_82BAF900 {
    char pad0[0x380];
    Key_82BAF900 keys[4]; /* 0x380 */
    void *slots[4];       /* 0x3a0 */
};

extern "C" int fn_82BAF900(const Entry_82BAF900 *a, const Entry_82BAF900 *b)
{
    int used = 0;
    int i;

    for (i = 3; i >= 0; i--) {
        if (a->slots[i] != 0) {
            if (b->slots[i] == 0) {
                return -1;
            }
            used++;
        } else if (b->slots[i] != 0) {
            return 1;
        }
    }
    for (i = 0; i < used; i++) {
        if (a->keys[i] != b->keys[i]) {
            return a->keys[i] < b->keys[i] ? -1 : 1;
        }
    }
    return 0;
}
