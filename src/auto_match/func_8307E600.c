extern unsigned int MmGetPhysicalAddress(void *address);

typedef struct Entry_8307E600 {
    unsigned int words[24]; /* 0x00 */
} Entry_8307E600;

typedef struct Table_8307E600 {
    int pad[2];              /* 0x00 */
    Entry_8307E600 *entries; /* 0x08 */
} Table_8307E600;

int fn_8307E600(Table_8307E600 *self, int index, unsigned int *buffer, unsigned int size)
{
    unsigned int pages = size >> 11;
    Entry_8307E600 *entries = self->entries;
    Entry_8307E600 *entry = &entries[index];
    unsigned int state = (entry->words[0] >> 20) & 3;
    unsigned int offset;
    if (!(state & 1)) {
        entry->words[5] = MmGetPhysicalAddress(buffer);
        pages = (pages & 0xfff) | (entry->words[0] & 0xfffff000);
        entry->words[0] = pages | 0x100000;
        {
            unsigned int *pWordsElem = &entry->words[21];
            *pWordsElem = (unsigned int)buffer;
        }
    } else if (!(state & 2)) {
        entry->words[6] = MmGetPhysicalAddress(buffer);
        pages = (pages & 0xfff) | (entry->words[1] & 0xfffff000);
        entry->words[1] = pages;
        entry->words[0] |= 0x200000;
        {
            unsigned int *pWordsElem2 = &entry->words[22];
            *pWordsElem2 = (unsigned int)buffer;
        }
    } else {
        goto failed;
    }
    if (state == 0 && *buffer != 0x7fff) {
        offset = ((*buffer >> 11) & 0x7fff) + 32;
        if (offset != 0) {
            entry->words[2] = (entry->words[2] & 0xfc000000) | (offset & 0x3ffffff);
        }
    }
    return 0;
failed:
    return 0x80070005;
}
