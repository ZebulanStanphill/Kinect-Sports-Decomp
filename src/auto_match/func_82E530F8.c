typedef struct Var_82E530F8 { unsigned short vt; unsigned short r1; int r2; void *data; } Var_82E530F8;
struct Store_82E530F8;
typedef struct StoreVtbl_82E530F8 {
    void *slots[19];
    void (*Remove)(struct Store_82E530F8 *self, void *key);
} StoreVtbl_82E530F8;
typedef struct Store_82E530F8 { StoreVtbl_82E530F8 *vt; int lock; } Store_82E530F8;
extern void fn_82E50F00(int *lock, int n);
extern void fn_82E51028(int *lock, int n);
extern Var_82E530F8 *fn_82E63500(Store_82E530F8 *self, void *key);
extern void *fn_82E4FE08(unsigned int size);
extern unsigned int fn_82F64CE0(const unsigned short *s);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82E530F8(Store_82E530F8 *self, void *key, const unsigned short *str)
{
    Var_82E530F8 *v;
    int hr;
    void *p;
    unsigned int size;

    fn_82E50F00(&self->lock, 1);
    v = fn_82E63500(self, key);
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
    fn_82E51028(&self->lock, 1);
    return hr;
}
