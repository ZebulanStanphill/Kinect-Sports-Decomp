typedef struct Entry_82631B08 {
    unsigned short id; /* 0x0 */
    unsigned short pad2;
    unsigned int value4; /* 0x4 */
    unsigned int value8; /* 0x8 */
} Entry_82631B08;

typedef struct Used_82631B08 {
    unsigned __int64 low;
    unsigned __int64 high;
} Used_82631B08;

typedef struct Table_82631B08 {
    unsigned int magic;        /* 0x0 */
    unsigned int version;      /* 0x4 */
    unsigned int pad8[3];      /* 0x8 */
    unsigned int marker;       /* 0x14 */
    unsigned int count;        /* 0x18 */
    unsigned int maxId;        /* 0x1c */
    Used_82631B08 used;        /* 0x20 */
    unsigned int reserved;     /* 0x30 */
    Entry_82631B08 entries[1]; /* 0x34 */
} Table_82631B08;

extern void *memset(void *dst, int value, unsigned int size);

void fn_82631B08(Entry_82631B08 *entries, Table_82631B08 *table)
{
    Used_82631B08 used;
    Entry_82631B08 *entry;
    unsigned int count;
    unsigned int maxId;
    unsigned int id;
    unsigned int i;

    used.low = 0;
    used.high = 0;
    count = 0;
    maxId = 0;
    entry = entries;
    for (id = entry->id; id != 0xff; id = entry->id) {
        if (maxId <= id) {
            maxId = id;
        }
        entry++;
        count++;
        ((unsigned char *)&used)[id] = 0xff;
    }
    memset(table, 0, count * 12 + 0x38);
    table->count = count;
    table->maxId = maxId;
    table->version = 1;
    table->magic = 0x100005;
    table->marker = 0xffff0000;
    table->reserved = 0;
    table->used.low = used.low;
    table->used.high = used.high;
    for (i = 0; i < count; i++) {
        table->entries[i] = entries[i];
    }
}
