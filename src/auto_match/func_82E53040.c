typedef struct Guid_82E53040 {
    unsigned long data1;
    unsigned short data2;
    unsigned short data3;
    unsigned char data4[8];
} Guid_82E53040;
typedef struct Var_82E53040 { unsigned short vt; unsigned short r1; int r2; Guid_82E53040 *data; } Var_82E53040;
struct Store_82E53040;
typedef struct StoreVtbl_82E53040 {
    void *slots[19];
    void (*Remove)(struct Store_82E53040 *self, void *key);
} StoreVtbl_82E53040;
typedef struct Store_82E53040 { StoreVtbl_82E53040 *vt; int lock; } Store_82E53040;
extern void fn_82E50F00(int *lock, int n);
extern void fn_82E51028(int *lock, int n);
extern Var_82E53040 *fn_82E63500(Store_82E53040 *self, void *key);
extern void *fn_82E4FE08(unsigned int size);

int fn_82E53040(Store_82E53040 *self, void *key, const Guid_82E53040 *guid)
{
    Var_82E53040 *v;
    int hr;
    Guid_82E53040 *p;

    fn_82E50F00(&self->lock, 1);
    v = fn_82E63500(self, key);
    hr = 0;
    if (v == 0) {
        hr = 0x8007000e;
    } else {
        p = (Guid_82E53040 *)fn_82E4FE08(sizeof(Guid_82E53040));
        v->data = p;
        if (p == 0) {
            self->vt->Remove(self, key);
            hr = 0x8007000e;
        } else {
            v->vt = 0x48;
            *p = *guid;
        }
    }
    fn_82E51028(&self->lock, 1);
    return hr;
}
