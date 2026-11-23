typedef struct Vec_8261BBE0 {
    float x;
    float y;
    float z;
} Vec_8261BBE0;

typedef struct Entry_8261BBE0 {
    unsigned int size;
    unsigned short kind;
    unsigned short id;
    unsigned short flags;
    char padA[0xa];
    Vec_8261BBE0 first;
    Vec_8261BBE0 second;
} Entry_8261BBE0;

typedef struct Entries_8261BBE0 {
    unsigned int count;
    int padding;
    Entry_8261BBE0 first;
} Entries_8261BBE0;

extern struct Table_8261BBE0 {
    unsigned short ids[64];
    int count;
} lbl_83274930;

static __forceinline Entry_8261BBE0 *Find(Entries_8261BBE0 *entries, const unsigned short *id)
{
    Entry_8261BBE0 *entry = &entries->first;
    unsigned int i;
    for (i = 0; i < entries->count; ++i) {
        if (entry->id == *id)
            return entry;
        {
            unsigned int size = entry->size;
            entry = (Entry_8261BBE0 *)(size + (char *)entry);
        }
    }
    return 0;
}

static __forceinline Vec_8261BBE0 LoadVector(const Vec_8261BBE0 *v)
{
    Vec_8261BBE0 result;
    result.x = v->x;
    result.y = v->y;
    result.z = v->z;
    return result;
}

static __forceinline void StoreVector(Vec_8261BBE0 *dst, const Vec_8261BBE0 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

void fn_8261BBE0(Entries_8261BBE0 *entries)
{
    int i = 0;
    int count = lbl_83274930.count;
    unsigned short *id;

    if (lbl_83274930.count > 0) {
        id = lbl_83274930.ids + 1;
        do {
            Entry_8261BBE0 *first = Find(entries, id - 1);
            Entry_8261BBE0 *second = Find(entries, id);
            if (first != 0 && second != 0) {
                Vec_8261BBE0 start = LoadVector(&first->first);
                Vec_8261BBE0 end = LoadVector(&first->second);
                unsigned short flags = first->flags;

                StoreVector(&first->first, &second->first);
                StoreVector(&first->second, &second->second);
                first->flags = second->flags;
                StoreVector(&second->first, &start);
                StoreVector(&second->second, &end);
                second->flags = flags;
                count = lbl_83274930.count;
            }
            ++i;
            id += 2;
        } while (i < count);
    }
}
