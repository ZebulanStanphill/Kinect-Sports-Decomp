typedef struct Unk_82C032C0 Unk_82C032C0;
typedef struct UnkVtbl_82C032C0 {
    void *QueryInterface;
    void *AddRef;
    unsigned long (*Release)(Unk_82C032C0 *self);
} UnkVtbl_82C032C0;
struct Unk_82C032C0 { UnkVtbl_82C032C0 *vt; };

typedef struct Obj_82C032C0 {
    char pad0[0x34];
    Unk_82C032C0 *unk;          /* 0x034 */
    char pad38[0x298 - 0x38];
    int a;                      /* 0x298 */
    int b;                      /* 0x29c */
    void *handle;               /* 0x2a0 */
    int c;                      /* 0x2a4 */
} Obj_82C032C0;

extern void fn_82C09F08(void **handle);

int fn_82C032C0(Obj_82C032C0 *self)
{
    if (self->handle != 0) {
        __try {
            fn_82C09F08(&self->handle);
        } __except (1) {
        }
        self->handle = 0;
    }
    if (self->unk != 0) {
        self->unk->vt->Release(self->unk);
        self->unk = 0;
    }
    self->c = 0;
    self->b = 0;
    self->a = 0;
    return 0;
}
