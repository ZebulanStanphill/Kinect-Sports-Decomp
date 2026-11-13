typedef struct Guid_82E2BEE0 { unsigned int d[4]; } Guid_82E2BEE0;
typedef struct Var_82E2BEE0 { unsigned short vt; unsigned short r1; int r2; Guid_82E2BEE0 *puuid; } Var_82E2BEE0;
struct Store_82E2BEE0;
typedef struct StoreVtbl_82E2BEE0 {
    void *slots[19];
    void (*Remove)(struct Store_82E2BEE0 *self, void *key);
} StoreVtbl_82E2BEE0;
typedef struct Store_82E2BEE0 { StoreVtbl_82E2BEE0 *vt; int pad4; int lock; } Store_82E2BEE0;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Var_82E2BEE0 *fn_82E2BBA0(Store_82E2BEE0 *self, void *key);
extern void *fn_82E4FE08(unsigned int size);

int fn_82E2BEE0(Store_82E2BEE0 *self, void *key, const Guid_82E2BEE0 *src)
{
    Var_82E2BEE0 *v;
    int hr;
    Guid_82E2BEE0 *p;

    RtlEnterCriticalSection(&self->lock);
    v = fn_82E2BBA0(self, key);
    hr = 0;
    if (v == 0) {
        hr = 0x8007000e;
    } else {
        p = (Guid_82E2BEE0 *)fn_82E4FE08(0x10);
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
