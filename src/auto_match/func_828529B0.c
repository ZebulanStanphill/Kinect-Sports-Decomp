typedef struct Entry_828529B0 {
    char pad0[0x20];
    int f20;
    char pad24[0x8];
    int f2c;
} Entry_828529B0;

typedef struct Array_828529B0 {
    int *items;
    unsigned short count;
} Array_828529B0;

typedef struct List_828529B0 {
    int f0;
    Array_828529B0 arr;
} List_828529B0;

typedef struct Table_828529B0 {
    char pad[0x34];
    Entry_828529B0 **entries;
} Table_828529B0;

typedef struct Obj_828529B0 {
    int f0;
    int f4;
} Obj_828529B0;

extern void fn_82639F78(int a, int index, int b, int c, int d, unsigned __int64 mask);

void fn_828529B0(Obj_828529B0 *self, List_828529B0 *list, Table_828529B0 *table)
{
    Array_828529B0 *arr = &list->arr;
    int i;
    for (i = 0; i < arr->count; i++) {
        Entry_828529B0 *e = table->entries[arr->items[i]];
        if (e != 0) {
            fn_82639F78(self->f4, i, e->f20, 0, e->f2c,
                        0x8000000000000000ULL >> ((((unsigned)((0x5f - i) * 0x5556)) >> 16) + 32));
        }
    }
}
