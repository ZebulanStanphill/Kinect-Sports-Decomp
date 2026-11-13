typedef struct Var_82E48B38 { unsigned short vt; unsigned short r1; int r2; void *data; } Var_82E48B38;
struct Store_82E48B38;
typedef struct StoreVtbl_82E48B38 {
    void *slots[19];
    void (*Remove)(struct Store_82E48B38 *self, void *key);
} StoreVtbl_82E48B38;
typedef struct Store_82E48B38 { StoreVtbl_82E48B38 *vt; int lock; } Store_82E48B38;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Var_82E48B38 *fn_82E47918(Store_82E48B38 *self, void *key);
extern void *fn_82E4FE08(unsigned int size);
extern unsigned int fn_82F64CE0(const unsigned short *s);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82E48B38(Store_82E48B38 *self, void *key, const unsigned short *str)
{
    Var_82E48B38 *v;
    int hr;
    void *p;
    unsigned int size;

    RtlEnterCriticalSection(&self->lock);
    v = fn_82E47918(self, key);
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
