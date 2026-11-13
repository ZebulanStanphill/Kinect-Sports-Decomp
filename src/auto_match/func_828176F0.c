int strcmp(const char *a, const char *b);

typedef struct Entry_828176F0 {
    unsigned int value;        /* 0x0 */
    const char *name;          /* 0x4 */
} Entry_828176F0;

typedef struct Table_828176F0 {
    Entry_828176F0 *entries;   /* 0x0 */
    unsigned int count;        /* 0x4 */
} Table_828176F0;

unsigned int fn_828176F0(Table_828176F0 *table, const char *name, unsigned int *out)
{
    unsigned int i;

    *out = 0;
    for (i = 0; i < table->count; i++) {
        if (strcmp(table->entries[i].name, name) == 0) {
            *out = table->entries[i].value;
            return i;
        }
    }
    return 0xffffffff;
}
