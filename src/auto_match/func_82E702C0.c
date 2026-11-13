typedef struct Obj_82E702C0 Obj_82E702C0;

typedef struct Vtbl_82E702C0 {
    void *slot0;
    void *slot1;
    int (*GetValue)(Obj_82E702C0 *self, unsigned int *out);
} Vtbl_82E702C0;

struct Obj_82E702C0 {
    Vtbl_82E702C0 *vt;
    int pad[0x16];
    unsigned int rate; /* 0x5c */
    int pad60[5];
    unsigned int blockAlign; /* 0x74 */
};

int fn_82E702C0(Obj_82E702C0 *self, unsigned int *out)
{
    unsigned int v;
    int hr;

    if (out == 0) {
        return 0x80004003;
    }
    hr = 0;
    *out = 0;
    if (self->blockAlign != 0) {
        v = 0;
        hr = self->vt->GetValue(self, &v);
        if (hr >= 0) {
            if (v == 0) {
                hr = 0xC00D36BB;
            } else {
                *out = (unsigned int)(((unsigned __int64)self->rate * (unsigned __int64)v) / ((unsigned __int64)self->blockAlign * 8));
            }
        }
    }
    return hr;
}
