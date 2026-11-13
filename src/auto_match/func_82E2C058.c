typedef struct Var_82E2C058 { unsigned short vt; unsigned short r1; int r2; unsigned int size; void *data; } Var_82E2C058;
struct Store_82E2C058;
typedef struct StoreVtbl_82E2C058 {
    void *slots[19];
    void (*Remove)(struct Store_82E2C058 *self, void *key);
} StoreVtbl_82E2C058;
typedef struct Store_82E2C058 { StoreVtbl_82E2C058 *vt; int pad4; int lock; } Store_82E2C058;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Var_82E2C058 *fn_82E2BBA0(Store_82E2C058 *self, void *key);
extern void *fn_82E4FE08(unsigned int size);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82E2C058(Store_82E2C058 *self, void *key, const void *src, unsigned int size)
{
    Var_82E2C058 *v;
    int hr;
    void *p;

    RtlEnterCriticalSection(&self->lock);
    v = fn_82E2BBA0(self, key);
    hr = 0;
    if (v == 0) {
        hr = 0x8007000e;
    } else {
        p = fn_82E4FE08(size);
        v->data = p;
        if (p == 0) {
            self->vt->Remove(self, key);
            hr = 0x8007000e;
        } else {
            memcpy(p, src, size);
            v->size = size;
            v->vt = 0x1011;
        }
    }
    RtlLeaveCriticalSection(&self->lock);
    return hr;
}
