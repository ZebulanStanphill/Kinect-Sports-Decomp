typedef struct { char data[400]; } Entry;
typedef struct { char pad[0x10]; Entry entries[0x48]; } Table;

Entry *fn_83079018(Table *t, int i)
{
    if (i >= 0 && (unsigned int)i < 0x48) {
        return &t->entries[i];
    }
    return 0;
}
