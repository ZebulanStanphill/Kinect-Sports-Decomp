typedef struct Unk_82E24948 Unk_82E24948;
typedef struct UnkVtbl_82E24948 {
    int (*QueryInterface)(Unk_82E24948 *self, void *iid, void **out);
    unsigned int (*AddRef)(Unk_82E24948 *self);
    unsigned int (*Release)(Unk_82E24948 *self);
    int (*m0C)(Unk_82E24948 *self, void *arg);
    int (*m10)(Unk_82E24948 *self);
    int (*m14)(Unk_82E24948 *self, void *arg);
    int (*m18)(Unk_82E24948 *self);
    int (*m1C)(Unk_82E24948 *self, void *arg);
} UnkVtbl_82E24948;
struct Unk_82E24948 { UnkVtbl_82E24948 *vt; };

typedef struct Obj_82E24948 {
    unsigned char pad0[0x100];
    Unk_82E24948 *p100;
    int f104;
    Unk_82E24948 *p108;
    Unk_82E24948 *p10c;
} Obj_82E24948;

extern int fn_82E46180(Unk_82E24948 **out);
extern int fn_82E23F08(Obj_82E24948 *self, Unk_82E24948 **out, void *a, void *b, void *c, void *d);
extern int fn_82E43358(Unk_82E24948 **out);
extern int fn_82E40F90(Unk_82E24948 **out);
int fn_82E24948(Obj_82E24948 *self, void *a, void *b, void *c, void *d)
{
    Unk_82E24948 *out = 0;
    int hr;

    if (self->p108 != 0 || self->p10c != 0 || self->p100 != 0) {
        hr = 0x8000ffff;
        goto done;
    }
    hr = fn_82E46180(&self->p108);
    if (hr < 0) goto exit;
    hr = fn_82E23F08(self, &out, a, b, c, d);
    if (hr < 0) goto done;
    hr = self->p108->vt->m1C(self->p108, out);
    if (hr < 0) goto done;
    hr = fn_82E43358(&self->p10c);
    if (hr < 0) goto done;
    hr = self->p10c->vt->m0C(self->p10c, self->p108);
    if (hr < 0) goto done;
    hr = fn_82E40F90(&self->p100);
    if (hr < 0) goto done;
    hr = self->p100->vt->m0C(self->p100, (void *)1);
    if (hr < 0) goto done;
    hr = self->p100->vt->m14(self->p100, self->p108);
done:
    if (out != 0) {
        out->vt->Release(out);
    }
exit:
    return hr;
}
