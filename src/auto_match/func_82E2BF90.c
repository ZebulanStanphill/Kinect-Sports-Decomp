typedef struct Var_82E2BF90 { unsigned short vt; unsigned short r1; int r2; void *data; } Var_82E2BF90;
struct Store_82E2BF90;
typedef struct StoreVtbl_82E2BF90 {
    void *slots[19];
    void (*Remove)(struct Store_82E2BF90 *self, void *key);
} StoreVtbl_82E2BF90;
typedef struct Store_82E2BF90 { StoreVtbl_82E2BF90 *vt; int pad4; int lock; } Store_82E2BF90;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Var_82E2BF90 *fn_82E2BBA0(Store_82E2BF90 *self, void *key);
extern unsigned int fn_82F64CE0(const unsigned short *s);
extern void *fn_82E4FE08(unsigned int size);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82E2BF90(Store_82E2BF90 *self, void *key, const unsigned short *str)
{
    Var_82E2BF90 *v;
    int hr;
    unsigned int size;
    void *p;

    RtlEnterCriticalSection(&self->lock);
    v = fn_82E2BBA0(self, key);
    hr = 0;
    if (v == 0) {
        hr = 0x8007000e;
    } else {
        size = (fn_82F64CE0(str) + 1) * 2;
        if (size >= 0xffffffff) {
            hr = 0x80070057;
        } else {
            p = fn_82E4FE08(size);
            v->data = p;
            if (p == 0) {
                self->vt->Remove(self, key);
                hr = 0x8007000e;
            } else {
                memcpy(p, str, size);
                v->vt = 0x1f;
            }
        }
    }
    RtlLeaveCriticalSection(&self->lock);
    return hr;
}
