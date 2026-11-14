typedef struct Unk_82E7A6E8 { struct UnkVt_82E7A6E8 *vt; } Unk_82E7A6E8;
typedef struct UnkVt_82E7A6E8 {
    int (*QueryInterface)(Unk_82E7A6E8 *, const void *, void **);
    unsigned int (*AddRef)(Unk_82E7A6E8 *);
    unsigned int (*Release)(Unk_82E7A6E8 *);
} UnkVt_82E7A6E8;
typedef struct Self_82E7A6E8 {
    char pad0[0x146];
    unsigned short streamCount;  /* 0x146 */
    unsigned int ready;          /* 0x148 */
    char pad14c[0x94];
    unsigned int expectedCount;  /* 0x1e0 */
} Self_82E7A6E8;

extern int fn_82E49060(Unk_82E7A6E8 **out);
extern int fn_82E79C08(Self_82E7A6E8 *self, Unk_82E7A6E8 *obj);
extern int fn_82E79F10(Self_82E7A6E8 *self, unsigned int i, Unk_82E7A6E8 *obj);
extern int fn_82E7A3B8(Self_82E7A6E8 *self, unsigned int i, Unk_82E7A6E8 *obj);
extern int fn_82E76EB0(Self_82E7A6E8 *self, Unk_82E7A6E8 *obj);

int fn_82E7A6E8(Self_82E7A6E8 *self, Unk_82E7A6E8 **out)
{
    Unk_82E7A6E8 *obj;
    unsigned short i;
    int hr;
    if (out == 0)
        return 0x80070057;
    *out = 0;
    if (self->ready <= 0)
        return 0xC00D36B6;
    obj = 0;
    hr = fn_82E49060(&obj);
    if (hr < 0) goto done;
    hr = fn_82E79C08(self, obj);
    if (hr < 0) goto done;
    if (self->streamCount != self->expectedCount) {
        hr = 0x8000FFFF;
        goto done;
    }
    for (i = 0; i < self->streamCount; i++) {
        hr = fn_82E79F10(self, i, obj);
        if (hr < 0) goto done;
        hr = fn_82E7A3B8(self, i, obj);
        if (hr < 0) goto done;
    }
    hr = fn_82E76EB0(self, obj);
    if (hr < 0) goto done;
    *out = obj;
done:
    if (hr < 0 && obj != 0)
        obj->vt->Release(obj);
    return hr;
}
