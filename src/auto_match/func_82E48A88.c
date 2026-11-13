typedef struct Guid_82E48A88 { unsigned int d[4]; } Guid_82E48A88;
typedef struct Var_82E48A88 { unsigned short vt; unsigned short r1; int r2; Guid_82E48A88 *puuid; } Var_82E48A88;
struct Store_82E48A88;
typedef struct StoreVtbl_82E48A88 {
    void *slots[19];
    void (*Remove)(struct Store_82E48A88 *self, void *key);
} StoreVtbl_82E48A88;
typedef struct Store_82E48A88 { StoreVtbl_82E48A88 *vt; int lock; } Store_82E48A88;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Var_82E48A88 *fn_82E47918(Store_82E48A88 *self, void *key);
extern void *fn_82E4FE08(unsigned int size);

int fn_82E48A88(Store_82E48A88 *self, void *key, const Guid_82E48A88 *src)
{
    Var_82E48A88 *v;
    int hr;
    Guid_82E48A88 *p;

    RtlEnterCriticalSection(&self->lock);
    v = fn_82E47918(self, key);
    hr = 0;
    if (v == 0) {
        hr = 0x8007000e;
    } else {
        p = (Guid_82E48A88 *)fn_82E4FE08(0x10);
        v->puuid = p;
        if (p == 0) {
            self->vt->Remove(self, key);
            hr = 0x8007000e;
        } else {
            v->vt = 0x48;
            *p = *src;
        }
    }
    RtlLeaveCriticalSection(&self->lock);
    return hr;
}
