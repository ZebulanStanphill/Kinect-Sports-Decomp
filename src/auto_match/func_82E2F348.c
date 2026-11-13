typedef struct Var_82E2F348 { unsigned short vt; unsigned short r1; int r2; unsigned int size; void *data; } Var_82E2F348;
struct Store_82E2F348;
typedef struct StoreVtbl_82E2F348 {
    void *slots[19];
    void (*Remove)(struct Store_82E2F348 *self, void *key);
} StoreVtbl_82E2F348;
typedef struct Store_82E2F348 { StoreVtbl_82E2F348 *vt; int lock; } Store_82E2F348;
extern void fn_82E50F00(int *lock, int n);
extern void fn_82E51028(int *lock, int n);
extern Var_82E2F348 *fn_82E63500(Store_82E2F348 *self, void *key);
extern void *fn_82E4FE08(unsigned int size);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82E2F348(Store_82E2F348 *self, void *key, const void *src, unsigned int size)
{
    Var_82E2F348 *v;
    int hr;
    void *p;

    fn_82E50F00(&self->lock, 1);
    v = fn_82E63500(self, key);
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
    fn_82E51028(&self->lock, 1);
    return hr;
}
