extern int memcmp(const void *, const void *, unsigned);
extern char lbl_8214C590[], lbl_8214C5A0[], lbl_8202F1FC[], lbl_8214C700[], lbl_8214C6F0[];
extern char lbl_821537A8[], lbl_821537B8[];
typedef struct Guid_82E2C980 { unsigned char b[16]; } Guid_82E2C980;
typedef struct Object_82E2C980 Object_82E2C980;
typedef struct Vtable_82E2C980 {
    void *f0;
    void (*AddRef)(Object_82E2C980 *);
    void *f8[31];
    int (*GetId)(Object_82E2C980 *, Guid_82E2C980 *);
} Vtable_82E2C980;
struct Object_82E2C980 { Vtable_82E2C980 *vt; };
typedef struct Self_82E2C980 {
    Vtable_82E2C980 *vt;
    Object_82E2C980 iface4;
} Self_82E2C980;

int fn_82E2C980(Self_82E2C980 *self, const char *iid, Object_82E2C980 **out)
{
    int hr;
    Guid_82E2C980 a;
    Guid_82E2C980 b;

    if (out == 0) return 0x80070057;
    hr = 0;
    *out = 0;
    if (memcmp(iid, lbl_8214C590, 16) == 0 || memcmp(iid, lbl_8214C5A0, 16) == 0 || memcmp(iid, lbl_8202F1FC, 16) == 0) {
        *out = (Object_82E2C980 *)self;
    } else if (memcmp(iid, lbl_8214C700, 16) == 0) {
        hr = self->vt->GetId((Object_82E2C980 *)self, &a);
        if (hr >= 0 && memcmp(&a, lbl_821537A8, 16) == 0) {
            *out = (Object_82E2C980 *)self;
        } else {
            hr = 0x80004002;
            goto done;
        }
    } else if (memcmp(iid, lbl_8214C6F0, 16) == 0) {
        hr = self->vt->GetId((Object_82E2C980 *)self, &b);
        if (hr >= 0 && memcmp(&b, lbl_821537B8, 16) == 0) {
            *out = &self->iface4;
        } else {
            hr = 0x80004002;
            goto done;
        }
    } else {
        hr = 0x80004002;
        goto done;
    }
    (*out)->vt->AddRef(*out);
done:
    return hr;
}
