typedef struct Unk_82C01E28 Unk_82C01E28;
typedef struct UnkVtbl_82C01E28 {
    void *QueryInterface;
    void *AddRef;
    unsigned long (*Release)(Unk_82C01E28 *self);
} UnkVtbl_82C01E28;
struct Unk_82C01E28 { UnkVtbl_82C01E28 *vt; };

typedef struct Obj_82C01E28 {
    char pad0[0x34];
    Unk_82C01E28 *unk;          /* 0x034 */
    char pad38[0x208 - 0x38];
    void *handle;               /* 0x208 */
} Obj_82C01E28;

extern void fn_82C07AA8(void **handle);

int fn_82C01E28(Obj_82C01E28 *self)
{
    if (self->handle != 0) {
        __try {
            fn_82C07AA8(&self->handle);
        } __except (1) {
        }
        self->handle = 0;
    }
    if (self->unk != 0) {
        self->unk->vt->Release(self->unk);
        self->unk = 0;
    }
    return 0;
}
