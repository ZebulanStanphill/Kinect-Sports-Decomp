typedef struct { unsigned int d1; unsigned short d2, d3; unsigned char d4[8]; } Guid_82E476F8;
typedef struct { int v[4]; } Data_82E476F8;
typedef struct { Guid_82E476F8 id; Data_82E476F8 data; } Entry_82E476F8;
typedef struct { char cs[0x1c]; } Cs_82E476F8;
typedef struct {
    void *vt;
    Cs_82E476F8 cs;
    Entry_82E476F8 *entries;
    int pad24;
    unsigned count;
} Obj_82E476F8;

extern void RtlEnterCriticalSection(Cs_82E476F8 *cs);
extern void RtlLeaveCriticalSection(Cs_82E476F8 *cs);
extern int fn_82E50338(void *dst, Data_82E476F8 *src);

int fn_82E476F8(Obj_82E476F8 *o, unsigned index, Guid_82E476F8 *id, void *data)
{
    int hr = 0;
    RtlEnterCriticalSection(&o->cs);
    if (index >= o->count) {
        hr = 0x80070057;
    } else {
        *id = o->entries[index].id;
        if (data != 0) {
            hr = fn_82E50338(data, &o->entries[index].data);
        }
    }
    RtlLeaveCriticalSection(&o->cs);
    return hr;
}
