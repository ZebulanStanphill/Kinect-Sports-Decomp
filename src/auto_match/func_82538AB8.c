typedef struct Id_82538AB8 {
    unsigned char bytes[8];
} Id_82538AB8;

typedef struct Entry_82538AB8 {
    unsigned __int64 value; /* 0x00 */
    char name[0x1c];        /* 0x08 */
    int flags;              /* 0x24 */
    Id_82538AB8 id;         /* 0x28 */
    int extra;              /* 0x30 */
} Entry_82538AB8;

typedef struct TempBuffer_82538AB8 {
    Entry_82538AB8 *first;   /* 0x00 */
    Entry_82538AB8 *current; /* 0x04 */
    Entry_82538AB8 *end;     /* 0x08 */
    int capacity;            /* 0x0c */
} TempBuffer_82538AB8;

typedef struct TempIterator_82538AB8 {
    int pad0[4];
    TempBuffer_82538AB8 *buffer; /* 0x10 */
} TempIterator_82538AB8;

extern unsigned char fn_828EDC38(const Id_82538AB8 *id);
extern Entry_82538AB8 *fn_82268638(Entry_82538AB8 *dst, Entry_82538AB8 *src);
extern int fn_82538E40(TempIterator_82538AB8 *temp);
extern void fn_82538DC0(TempIterator_82538AB8 *temp, Entry_82538AB8 *entry);
extern Entry_82538AB8 *fn_82539150(Entry_82538AB8 *first, Entry_82538AB8 *mid, Entry_82538AB8 *last,
                                   int count1, int count2, TempIterator_82538AB8 *temp);

Entry_82538AB8 *fn_82538AB8(Entry_82538AB8 *first, Entry_82538AB8 *last, int predicate, int count,
                            TempIterator_82538AB8 *temp)
{
    if (count == 0) {
        return first;
    } else if (count == 1) {
        return fn_828EDC38(&first->id) ? last : first;
    } else if (count <= fn_82538E40(temp)) {
        Entry_82538AB8 *next = first;
        Entry_82538AB8 *src;
        Entry_82538AB8 *srcEnd;
        Entry_82538AB8 *dst;

        temp->buffer->current = temp->buffer->first;
        for (; first != last; ++first) {
            if (fn_828EDC38(&first->id)) {
                Entry_82538AB8 *out = next++;

                fn_82268638(out, first);
            } else {
                fn_82538DC0(temp, first);
            }
        }
        srcEnd = temp->buffer->current;
        src = temp->buffer->first;
        for (dst = next; src != srcEnd; ++src, ++dst) {
            fn_82268638(dst, src);
        }
        return next;
    } else {
        int half = count / 2;
        Entry_82538AB8 *mid = first + half;
        Entry_82538AB8 *left = fn_82538AB8(first, mid, predicate, half, temp);
        Entry_82538AB8 *right = fn_82538AB8(mid, last, predicate, count - half, temp);

        return fn_82539150(left, mid, right, mid - left, right - mid, temp);
    }
}
