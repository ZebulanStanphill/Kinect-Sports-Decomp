typedef struct {
    int offset;
    int value;
} Fixup_828178B8;

typedef struct {
    int pad[4];
    int count;
    int pad14;
    Fixup_828178B8 entries[1];
} FixupTable_828178B8;

void fn_828178B8(FixupTable_828178B8 *table, char *base)
{
    int i;
    Fixup_828178B8 *e = table->entries;
    for (i = 0; i < table->count; i++, e++) {
        *(int *)(base + e->offset) = e->value + (int)base;
    }
}
