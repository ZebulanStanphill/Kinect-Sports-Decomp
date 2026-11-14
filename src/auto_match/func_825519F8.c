/* std::_Insertion_sort1 over 24-byte entries ordered by (major, minor) (VC10 <algorithm>). */
typedef struct Entry_825519F8 { int v[4]; int major; int minor; } Entry_825519F8;

static __forceinline unsigned char Less(const Entry_825519F8 *a, const Entry_825519F8 *b)
{
    if (a->major == b->major)
        return a->minor < b->minor;
    return a->major < b->major;
}

void fn_825519F8(Entry_825519F8 *first, Entry_825519F8 *last)
{
    Entry_825519F8 *next;
    if (first != last) {
        for (next = first; ++next != last; ) {
            Entry_825519F8 *next1 = next;
            Entry_825519F8 val = *next;
            if (Less(&val, first)) {
                Entry_825519F8 *dest = ++next1;
                Entry_825519F8 *src = next;
                while (first != src) {
                    *--dest = *--src;
                }
                *first = val;
            } else {
                Entry_825519F8 *first1;
                for (first1 = next1; Less(&val, --first1); next1 = first1) {
                    *next1 = *first1;
                }
                *next1 = val;
            }
        }
    }
}
