typedef struct _GUID { unsigned long Data1; unsigned short Data2; unsigned short Data3; unsigned char Data4[8]; } GUID;

typedef struct Unknown_82E3A938 Unknown_82E3A938;
typedef struct {
    long (*QueryInterface)(Unknown_82E3A938 *self, const GUID *iid, Unknown_82E3A938 **out);
    unsigned long (*AddRef)(Unknown_82E3A938 *self);
    unsigned long (*Release)(Unknown_82E3A938 *self);
    void *f0c, *f10;
    long (*Attach)(Unknown_82E3A938 *self, Unknown_82E3A938 *item, int *out);
    void *f18;
    long (*Create)(Unknown_82E3A938 *self, const GUID *id, Unknown_82E3A938 **out);
    void *f20;
    long (*SetFlags)(Unknown_82E3A938 *self, unsigned int flags);
    long (*GetFlags)(Unknown_82E3A938 *self, unsigned int *flags);
} UnknownVtbl_82E3A938;
struct Unknown_82E3A938 { UnknownVtbl_82E3A938 *vt; };

typedef struct Self_82E3A938 {
    char pad0[0x48];
    Unknown_82E3A938 *factory;   /* 0x48 */
} Self_82E3A938;

extern const GUID lbl_82154C18, lbl_82154C88, lbl_82154C98;

long fn_82E3A938(Self_82E3A938 *self, GUID id, Unknown_82E3A938 **out)
{
    long hr;
    Unknown_82E3A938 *a, *b, *c;
    int cookie;
    unsigned int flags;

    if (out == 0)
        return 0x80004003;
    *out = 0;
    if (self->factory == 0)
        return 0xC00D36B6;
    a = 0;
    b = 0;
    c = 0;
    hr = self->factory->vt->Create(self->factory, &id, out);
    if (hr < 0)
        goto Error;
    if (*out == 0) {
        hr = 0xC00D36BB;
        goto Error;
    }
    hr = self->factory->vt->QueryInterface(self->factory, &lbl_82154C18, &a);
    if (hr < 0)
        goto Error;
    cookie = 0;
    hr = a->vt->Attach(a, *out, &cookie);
    if (hr < 0)
        goto Error;
    flags = 0;
    if ((*out)->vt->QueryInterface(*out, &lbl_82154C88, &b) >= 0) {
        hr = b->vt->GetFlags(b, &flags);
        if (hr < 0)
            goto Error;
        flags &= ~1;
        hr = b->vt->SetFlags(b, flags);
        if (hr < 0)
            goto Error;
    } else if ((*out)->vt->QueryInterface(*out, &lbl_82154C98, &c) >= 0) {
        hr = c->vt->GetFlags(c, &flags);
        if (hr < 0)
            goto Error;
        flags &= ~1;
        hr = c->vt->SetFlags(c, flags);
    }
Error:
    if (hr < 0) {
        if (*out != 0) {
            (*out)->vt->Release(*out);
            *out = 0;
        }
    }
    if (a != 0) {
        a->vt->Release(a);
        a = 0;
    }
    if (b != 0) {
        b->vt->Release(b);
        b = 0;
    }
    if (c != 0) {
        c->vt->Release(c);
    }
    return hr;
}
