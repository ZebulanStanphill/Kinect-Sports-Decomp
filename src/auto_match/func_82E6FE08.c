typedef struct Obj_82E6FE08 Obj_82E6FE08;

typedef struct Vtbl_82E6FE08 {
    void *slots[14];
    int (*GetValue)(Obj_82E6FE08 *self, unsigned int *out); /* 0x38 */
} Vtbl_82E6FE08;

struct Obj_82E6FE08 {
    Vtbl_82E6FE08 *vt;
    int pad[0x16];
    unsigned int rate;     /* 0x5c */
    unsigned int interval; /* 0x60 */
};

int fn_82E6FE08(Obj_82E6FE08 *self)
{
    unsigned int v;
    unsigned __int64 q;
    int hr;

    if (self->rate == 0)
        return 0xC00D36B2;
    v = 0;
    hr = self->vt->GetValue(self, &v);
    if (hr >= 0) {
        if (v == 0) {
            self->interval = 500;
        } else {
            q = 4000000000ULL / v;
            if (q > 0xffffffffULL)
                q = 0xffffffffffffffffULL;
            self->interval = (unsigned int)q;
        }
        hr = 0;
    }
    return hr;
}
