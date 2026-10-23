typedef struct {
    char pad0[0x14];
    int count;
    unsigned char valid;
    char pad19[3];
    unsigned char *flags;
    char **names;
    void **items;
} Table;

extern int stricmp(const char *a, const char *b);
extern unsigned char fn_82E1D068(Table *t, const char *name, void *item);

int fn_82E1D478(Table *t, const char *name, unsigned char value)
{
    int i;

    if (!t->valid)
        return 0x80004005;
    if (name == 0) {
        for (i = 0; i < t->count; i++)
            t->flags[i] = value;
    } else {
        for (i = 0; i < t->count; i++) {
            if (stricmp(name, t->names[i]) == 0)
                t->flags[i] = value;
            else if (fn_82E1D068(t, name, t->items[i]))
                t->flags[i] = value;
        }
    }
    return 0;
}
