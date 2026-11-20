typedef struct Entry_82A2B900 {
    char pad0[5];
    unsigned char next; /* 0x5 */
    unsigned char prev; /* 0x6 */
    char pad7;
} Entry_82A2B900;

typedef struct List_82A2B900 {
    char pad0[0x30];
    Entry_82A2B900 *entries; /* 0x30 */
    char pad34[0x95];
    unsigned char head; /* 0xc9 */
} List_82A2B900;

void fn_82A2B900(List_82A2B900 *list, unsigned int index, unsigned int makeHead)
{
    unsigned int head = list->head;
    Entry_82A2B900 *entries = list->entries;
    Entry_82A2B900 *headEntry = &entries[head];

    if (index == head) {
        if (makeHead == 0) {
            list->head = headEntry->next;
        }
    } else {
        if (index != headEntry->prev) {
            Entry_82A2B900 *entry = &entries[index];
            unsigned char prev = entry->prev;
            unsigned char next = entry->next;

            entries[prev].next = next;
            entries[next].prev = prev;
            entry->next = head;
            entry->prev = headEntry->prev;
            entries[headEntry->prev].next = (unsigned char)index;
            headEntry->prev = (unsigned char)index;
        }
        if (makeHead != 0) {
            list->head = index;
        }
    }
}
