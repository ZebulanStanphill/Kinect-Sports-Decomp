typedef struct Entry_82EE68C0 {
    unsigned short key;
    int value;
} Entry_82EE68C0;

typedef struct Map_82EE68C0 {
    char pad0[0x48];
    char list[0xbc];
    unsigned int count;
} Map_82EE68C0;

extern int fn_82EE6350(void *list, unsigned int index, Entry_82EE68C0 **out);
extern int fn_82EE62E8(void *list, Entry_82EE68C0 entry, int flags);

int fn_82EE68C0(Map_82EE68C0 *self, unsigned short key, int value)
{
    unsigned short i;

    if (self->count >= 0xffff)
        return 0xC00D3A9A;
    for (i = 0; i < self->count; i++) {
        Entry_82EE68C0 *e;
        fn_82EE6350(self->list, i, &e);
        if (e->key == key) {
            Entry_82EE68C0 *found;
            found = fn_82EE6350(self->list, i, &e) >= 0 ? e : 0;
            if (found == 0)
                return 0x8000FFFF;
            found->value = value;
            return 0;
        }
    }
    {
        Entry_82EE68C0 entry;
        entry.key = key;
        entry.value = value;
        return fn_82EE62E8(self->list, entry, 0) == 0 ? 0x8007000e : 0;
    }
}
