typedef long HRESULT;

struct Unknown_82E48E58;

typedef struct UnknownVtbl_82E48E58 {
    HRESULT (*QueryInterface)(struct Unknown_82E48E58 *self, const void *iid, void **out);
    unsigned long (*AddRef)(struct Unknown_82E48E58 *self);
    unsigned long (*Release)(struct Unknown_82E48E58 *self);
} UnknownVtbl_82E48E58;

typedef struct Unknown_82E48E58 {
    UnknownVtbl_82E48E58 *vt;
} Unknown_82E48E58;

struct Self_82E48E58;

typedef struct SelfVtbl_82E48E58 {
    char pad[0xa8];
    HRESULT (*Attach)(struct Self_82E48E58 *self, Unknown_82E48E58 *obj);
    char padac[0xb0 - 0xac];
    HRESULT (*Prepare)(struct Self_82E48E58 *self);
    HRESULT (*GetId)(struct Self_82E48E58 *self, unsigned int *id);
    HRESULT (*Configure)(struct Self_82E48E58 *self, Unknown_82E48E58 *obj);
} SelfVtbl_82E48E58;

typedef struct Self_82E48E58 {
    SelfVtbl_82E48E58 *vt;
    char pad4[0x64 - 4];
    unsigned int mode;
    char pad68[0x74 - 0x68];
    Unknown_82E48E58 **current;
} Self_82E48E58;

extern HRESULT fn_82E47DC0(unsigned int id, int flags, Unknown_82E48E58 **out);

HRESULT fn_82E48E58(Self_82E48E58 *self, Unknown_82E48E58 **out)
{
    HRESULT hr = 0;
    Unknown_82E48E58 *obj = 0;

    if (self->mode > 1) {
        unsigned int id = 0;

        hr = self->vt->GetId(self, &id);
        if (hr < 0)
            goto cleanup;
        hr = fn_82E47DC0(id, 0, &obj);
        if (hr < 0)
            goto cleanup;
        hr = self->vt->Configure(self, obj);
        if (hr < 0)
            goto cleanup;
        hr = self->vt->Prepare(self);
        if (hr < 0)
            goto cleanup;
        hr = self->vt->Attach(self, obj);
        if (hr < 0)
            goto cleanup;
    } else if (self->mode == 1) {
        obj = *self->current;
        if (obj == 0) {
            hr = 0x8000FFFF;
            goto cleanup;
        }
        obj->vt->AddRef(obj);
    }
    if (hr < 0)
        goto cleanup;
    if (out != 0) {
        *out = obj;
        obj = 0;
    }
cleanup:
    if (obj != 0)
        obj->vt->Release(obj);
    return hr;
}
