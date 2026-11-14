typedef struct Inner_82E70F80 Inner_82E70F80;

typedef struct InnerVt_82E70F80 {
    void *slots[21];
    long (*start)(Inner_82E70F80 *self);
} InnerVt_82E70F80;

struct Inner_82E70F80 {
    InnerVt_82E70F80 *vt;
};

typedef struct Obj_82E70F80 {
    char pad0[0xc];
    unsigned char guid[0x10];
    char pad1c[0x2c];
    unsigned __int64 f48;
    char pad50[8];
    Inner_82E70F80 *inner;
} Obj_82E70F80;

extern int memcmp(const void *, const void *, unsigned int);
extern char lbl_8214C030[];
extern long fn_82E6FE08(Obj_82E70F80 *self);

long fn_82E70F80(Obj_82E70F80 *self, unsigned int force)
{
    long hr;

    if (memcmp(lbl_8214C030, self->guid, 16) != 0 && force == 0)
        return 0x80070057;
    if (self->f48 > 0)
        return 0xc00d4650;
    if (self->inner == 0)
        return 0xc00d36bb;
    hr = self->inner->vt->start(self->inner);
    if (hr >= 0)
        hr = fn_82E6FE08(self);
    return hr;
}
