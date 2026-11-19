typedef struct Name_82292828 {
    int words[9];
} Name_82292828;

typedef struct Array_82292828 {
    void *first; /* 0x0 */
    void *last;  /* 0x4 */
    void *end;   /* 0x8 */
    int pad;
} Array_82292828;

typedef struct Entry_82292828 {
    Name_82292828 name;    /* 0x0 */
    Array_82292828 first;  /* 0x24 */
    Array_82292828 second; /* 0x34 */
    Array_82292828 third;  /* 0x44 */
    int pad54;
    int refs;           /* 0x58 */
    unsigned char flag; /* 0x5c */
} Entry_82292828;

typedef struct EntryList_82292828 {
    Entry_82292828 **begin; /* 0x0 */
    Entry_82292828 **end;   /* 0x4 */
} EntryList_82292828;

extern unsigned int fn_828647D8(const Name_82292828 *name);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_82292780(Name_82292828 *self, const Name_82292828 *other);
extern void fn_8239DD40(Array_82292828 *self, unsigned int count);
extern void fn_822932E8(Array_82292828 *self, unsigned int count);
extern void fn_82536690(EntryList_82292828 *list, Entry_82292828 **entry);

static __forceinline Entry_82292828 *Construct(Entry_82292828 *entry, const Name_82292828 *name)
{
    fn_82292780(&entry->name, name);
    entry->first.first = 0;
    entry->first.last = 0;
    entry->first.end = 0;
    entry->second.first = 0;
    entry->second.last = 0;
    entry->second.end = 0;
    entry->third.first = 0;
    entry->third.last = 0;
    entry->third.end = 0;
    entry->refs = 1;
    entry->flag = 0;
    fn_8239DD40(&entry->first, 100);
    fn_8239DD40(&entry->second, 100);
    fn_822932E8(&entry->third, 0xf);
    return entry;
}

int fn_82292828(EntryList_82292828 *list, const Name_82292828 *name)
{
    Entry_82292828 **it;
    Entry_82292828 *existing;
    Entry_82292828 *entry;
    Entry_82292828 *memory;

    for (it = list->begin; it != list->end; it++) {
        existing = *it;
        if (fn_828647D8(&existing->name) == fn_828647D8(name)) {
            existing->refs++;
            return 0;
        }
    }
    memory = (Entry_82292828 *)fn_8265C9E0(0x60);
    entry = memory != 0 ? Construct(memory, name) : 0;
    fn_82536690(list, &entry);
    return 0;
}
