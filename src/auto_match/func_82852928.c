typedef struct Entry_82852928 {
    int f0;
    int f4;
    int pad8[2];
} Entry_82852928;

typedef struct Array_82852928 {
    unsigned char *indices;
    Entry_82852928 *entries;
    unsigned short count;
} Array_82852928;

typedef struct List_82852928 {
    int f0;
    Array_82852928 arr;
} List_82852928;

typedef struct Obj_82852928 {
    int f0;
    int f4;
} Obj_82852928;

extern void fn_82639F78(int a, int index, int b, int c, int d, unsigned __int64 mask);

void fn_82852928(Obj_82852928 *self, List_82852928 *list)
{
    Array_82852928 *arr = &list->arr;
    int i;
    for (i = 0; i < arr->count; i++) {
        Entry_82852928 *e = &arr->entries[arr->indices[i]];
        fn_82639F78(self->f4, i, e->f4, 0, e->f0,
                    0x8000000000000000ULL >> ((((unsigned)((0x5f - i) * 0x5556)) >> 16) + 32));
    }
}
