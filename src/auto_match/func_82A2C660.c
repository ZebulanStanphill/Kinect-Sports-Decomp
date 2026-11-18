typedef struct ListEntry_82A2C660 {
    struct ListEntry_82A2C660 *next;
    struct ListEntry_82A2C660 *prev;
} ListEntry_82A2C660;

typedef struct Name_82A2C660 {
    unsigned short length;
    unsigned short maxLength;
    const char *buffer;
} Name_82A2C660;

typedef struct Entry_82A2C660 {
    char pad0[0x34];
    unsigned char nameLength;
    char pad35[0x48 - 0x35];
    ListEntry_82A2C660 link;
    char name[1];
} Entry_82A2C660;

typedef struct Dir_82A2C660 {
    ListEntry_82A2C660 entries;
    int unk8;
    ListEntry_82A2C660 *parent;
    char pad10[0x35 - 0x10];
    unsigned char flags;
    char pad36[0x40 - 0x36];
    ListEntry_82A2C660 aliases;
} Dir_82A2C660;

extern int RtlCompareStringN(const char *, unsigned, const char *, unsigned, int);

Entry_82A2C660 *fn_82A2C660(Dir_82A2C660 *dir, Name_82A2C660 *name)
{
    unsigned int second = 0;
    ListEntry_82A2C660 *head = &dir->entries;
    ListEntry_82A2C660 *link;
    Entry_82A2C660 *entry;

    for (;;) {
        for (link = head->next; link != head; link = entry->link.next) {
            entry = (Entry_82A2C660 *)((char *)link - 0x48);
            if (RtlCompareStringN(name->buffer, name->length, entry->name, entry->nameLength, 1) == 0) {
                return entry;
            }
        }
        if (second) {
            return 0;
        }
        if (dir->flags & 4) {
            head = &dir->aliases;
        } else {
            if (dir->parent == 0) {
                return 0;
            }
            head = dir->parent;
        }
        second = 1;
    }
}
