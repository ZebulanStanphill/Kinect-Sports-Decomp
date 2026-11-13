int strcmp(const char *a, const char *b);

typedef struct Header_8281FCC8 {
    char pad[0x24];
    unsigned int count;      /* 0x24 */
} Header_8281FCC8;

typedef struct Table_8281FCC8 {
    char pad0[0x1c];
    Header_8281FCC8 *header; /* 0x1c */
    char pad20[0x1c];
    int *offsets;            /* 0x3c */
    char *names;             /* 0x40 */
} Table_8281FCC8;

int fn_8281FCC8(Table_8281FCC8 *table, const char *name)
{
    unsigned int i;

    for (i = 0; i < table->header->count; i++) {
        if (strcmp(table->names + table->offsets[i], name) == 0)
            return i + 1;
    }
    return 0;
}
