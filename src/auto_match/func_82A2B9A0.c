typedef struct Entry_82A2B9A0 {
    unsigned int address; /* 0x00 */
    unsigned char pad4;
    unsigned char next; /* 0x05 */
    unsigned char pad6;
    unsigned char flags; /* 0x07: 0x80 = in use, low two bits = size class */
} Entry_82A2B9A0;

typedef struct Cache_82A2B9A0 {
    unsigned char pad0[0x30];
    Entry_82A2B9A0 *entries; /* 0x30 */
    unsigned char pad34[0x95];
    unsigned char head; /* 0xc9 */
} Cache_82A2B9A0;

extern const unsigned int lbl_82089378[3];

int fn_82A2B9A0(Cache_82A2B9A0 *cache, unsigned int address, unsigned int sizeClass, unsigned int *outIndex,
                Entry_82A2B9A0 **outEntry)
{
    unsigned int head;
    unsigned int index;
    Entry_82A2B9A0 *entries;
    Entry_82A2B9A0 *entry;

    head = cache->head;
    entries = cache->entries;
    index = head;
    if (sizeClass >= 1 && sizeClass <= 3) {
        address -= address % lbl_82089378[sizeClass - 1];
    }
    for (;;) {
        entry = &entries[index];
        if ((entry->flags & 0x80) == 0) {
            return 0;
        }
        if (entry->address == address && (entry->flags & 3) == sizeClass) {
            *outIndex = index;
            *outEntry = entry;
            return 1;
        }
        index = entry->next;
        if (index == head) {
            return 0;
        }
    }
}
