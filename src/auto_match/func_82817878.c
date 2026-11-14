typedef struct {
    int offset;
    int value;
} Fixup_82817878;

typedef struct {
    int pad[4];
    int count;
    int pad14;
    Fixup_82817878 entries[1];
} FixupTable_82817878;

void fn_82817878(FixupTable_82817878 *table, char *base, int delta)
{
    int i;
    Fixup_82817878 *e = table->entries;
    for (i = 0; i < table->count; i++, e++) {
        *(int *)(base + e->offset) = e->value + delta;
    }
}
