typedef unsigned short wchar_t;

typedef struct Entry_8236B6E8 {
    void **begin; /* 0x0 */
    int pad4[3];  /* 0x4 */
    int index;    /* 0x10 */
} Entry_8236B6E8;

typedef struct Owner_8236B6E8 {
    char pad0[8];                   /* 0x0 */
    Entry_8236B6E8 ***entries;      /* 0x8 */
    char padC[0x14];                /* 0xc */
    struct Range_8236B6E8 **ranges; /* 0x20 */
} Owner_8236B6E8;

typedef struct Range_8236B6E8 {
    int *begin; /* 0x0 */
    int *end;   /* 0x4 */
} Range_8236B6E8;

extern unsigned int fn_822ABA88(void *map, unsigned int key);
extern int fn_82528EE0(wchar_t *out, unsigned int size, const wchar_t *format, ...);

int fn_8236B6E8(Owner_8236B6E8 *self, unsigned int index, wchar_t *out)
{
    unsigned int count = self->ranges[index]->end - self->ranges[index]->begin;
    const wchar_t *guest = L"Guest";
    const wchar_t *second = 0;
    const wchar_t *first;
    Entry_8236B6E8 *entry;
    if (count > 1) {
        entry = (*self->entries)[index];
        second = (const wchar_t *)(fn_822ABA88(entry->begin[entry->index], 1) + 0x30);
        if (second == 0) {
            second = guest;
        }
    }
    entry = (*self->entries)[index];
    first = (const wchar_t *)(fn_822ABA88(entry->begin[entry->index], 0) + 0x30);
    if (first == 0) {
        first = guest;
    }
    if (count == 2) {
        fn_82528EE0(out, 0x60, L"%s, %s", first, second);
    } else {
        fn_82528EE0(out, 0x60, L"%s", first);
    }
    return 1;
}
