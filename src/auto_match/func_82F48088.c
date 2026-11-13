typedef struct Obj_82F48088 Obj_82F48088;

typedef struct Vtbl_82F48088 {
    void *slots[11];
    int (*GetPosition)(Obj_82F48088 *self, int a, int b, int c, unsigned __int64 *pos);
} Vtbl_82F48088;

struct Obj_82F48088 {
    Vtbl_82F48088 *vt;
    char pad4[0x2c];
    char buffer[0x18];
    unsigned int size;
};

extern int fn_82EE6048(void *buffer, unsigned int offset, unsigned int *out, unsigned int count);

int fn_82F48088(Obj_82F48088 *self, int a, int b, int c, unsigned int *out)
{
    unsigned __int64 pos;
    int hr;

    if (out == 0)
        return 0x80070057;
    *out = 0;
    pos = 0;
    hr = self->vt->GetPosition(self, a, b, c, &pos);
    if (hr < 0)
        return hr;
    if (pos > 0xffffffff)
        return 0xc00d36bb;
    if (self->size < pos + 4)
        return 0xc00d3a9e;
    return fn_82EE6048(self->buffer, (unsigned int)pos, out, 4);
}
