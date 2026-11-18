typedef struct Entity_82DC8EC8 {
    char padding[0xd4];
    unsigned int m_uid; /* 0xd4, hkpEntity::m_uid */
} Entity_82DC8EC8;

typedef struct Pair_82DC8EC8 {
    char padding[0x58];
    Entity_82DC8EC8 *first;
    Entity_82DC8EC8 *second;
} Pair_82DC8EC8;

typedef struct Entry_82DC8EC8 {
    Pair_82DC8EC8 *pair;
    int unused4;
    int unused8;
    int order;
} Entry_82DC8EC8;

static __forceinline unsigned __int64 Key_82DC8EC8(const Entry_82DC8EC8 *entry)
{
    return ((unsigned __int64)entry->pair->first->m_uid << 32) | entry->pair->second->m_uid;
}

/* The comparison is narrowed to hkBool's char and widened again where it is tested. */
static __forceinline int Less_82DC8EC8(const Entry_82DC8EC8 *first, const Entry_82DC8EC8 *second)
{
    unsigned __int64 a = Key_82DC8EC8(first);
    unsigned __int64 b = Key_82DC8EC8(second);
    return (signed char)(a < b || (a == b && first->order < second->order));
}

void fn_82DC8EC8(Entry_82DC8EC8 *base, int first, int last, int predicate)
{
    int i;
    do {
        Entry_82DC8EC8 pivot = base[(first + last) >> 1];
        int j = last;
        i = first;
        do {
            while (Less_82DC8EC8(&base[i], &pivot)) {
                i++;
            }
            while (Less_82DC8EC8(&pivot, &base[j])) {
                j--;
            }
            if (j < i) {
                break;
            }
            if (j != i) {
                Entry_82DC8EC8 temporary = base[j];
                base[j] = base[i];
                base[i] = temporary;
            }
            j--;
            i++;
        } while (i <= j);
        if (first < j) {
            fn_82DC8EC8(base, first, j, predicate);
        }
        if (i >= last) {
            return;
        }
        first = i;
    } while (1);
}
