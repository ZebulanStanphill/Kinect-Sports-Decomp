typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern int fn_82E50338(void *dst, void *src);

typedef struct {
    int v[4];
} Info_82E2AB98;

typedef struct {
    Info_82E2AB98 info;
    char extra[0x10];
} Entry_82E2AB98;

typedef struct {
    int unk0;
    int unk4;
    char cs[0x1c];
    Entry_82E2AB98 *entries;
    int unk28;
    unsigned int count;
} Table_82E2AB98;

int fn_82E2AB98(Table_82E2AB98 *t, unsigned int index, Info_82E2AB98 *info, void *extra)
{
    int hr = 0;
    RtlEnterCriticalSection((RTL_CRITICAL_SECTION *)t->cs);
    if (index >= t->count) {
        hr = 0x80070057;
    } else {
        *info = t->entries[index].info;
        if (extra != 0) {
            hr = fn_82E50338(extra, t->entries[index].extra);
        }
    }
    RtlLeaveCriticalSection((RTL_CRITICAL_SECTION *)t->cs);
    return hr;
}
