typedef struct Obj_82E70050 Obj_82E70050;

typedef struct Vtbl_82E70050 {
    void *slot0;
    void *slot1;
    int (*GetValue)(Obj_82E70050 *self, unsigned int *out);
} Vtbl_82E70050;

struct Obj_82E70050 {
    Vtbl_82E70050 *vt;
    int pad[0x16];
    unsigned int rate; /* 0x5c */
};

int fn_82E70050(Obj_82E70050 *self, unsigned int *out)
{
    unsigned int v;
    int hr;

    if (out == 0) {
        return 0x80004003;
    }
    *out = 0;
    v = 0;
    hr = self->vt->GetValue(self, &v);
    if (hr < 0) {
        return hr;
    }
    *out = (unsigned int)(((unsigned __int64)self->rate * (unsigned __int64)v) / 8000);
    return 0;
}
