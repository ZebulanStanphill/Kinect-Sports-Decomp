int strcmp(const char *a, const char *b);

typedef struct Header_8281FDF0 {
    char pad[0x51];
    unsigned char count;     /* 0x51 */
} Header_8281FDF0;

typedef struct Table_8281FDF0 {
    char pad0[0x1c];
    Header_8281FDF0 *header; /* 0x1c */
    char pad20[0x10];
    unsigned char (*entries)[0x21]; /* 0x30: 0x21-byte records, name offset first */
    char *names;             /* 0x34 */
} Table_8281FDF0;

unsigned char fn_8281FDF0(Table_8281FDF0 *table, const char *name)
{
    unsigned char i;

    for (i = 0; i < table->header->count; i++) {
        const char *s = table->names + *(int *)table->entries[i];
        if (*s != 0 && strcmp(s, name) == 0)
            return i + 1;
    }
    return 0;
}
