typedef struct Entry_83060830 {
    int value;         /* 0x00 */
    int reserved04[5]; /* 0x04 */
} Entry_83060830;

typedef struct Table_83060830 {
    char reserved00[0x2c];   /* 0x00 */
    Entry_83060830 *entries; /* 0x2c */
} Table_83060830;

unsigned char fn_83060830(Table_83060830 *self, const int *indices, int count)
{
    unsigned char found = 0;
    int index;
    for (index = 0; index < count; ++index) {
        Entry_83060830 *entry = &self->entries[indices[index]];
        if (entry->value < 0) {
            found = 1;
            break;
        }
        entry->value = -1 - entry->value;
    }
    for (index = 0; index < count; ++index) {
        Entry_83060830 *entry = &self->entries[indices[index]];
        if (entry->value < 0) {
            entry->value = -1 - entry->value;
        }
    }
    return !found;
}
