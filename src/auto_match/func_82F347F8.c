typedef struct Unk Unk;
typedef struct {
    int (*QueryInterface)(Unk *self, void *iid, void **out);
    unsigned long (*AddRef)(Unk *self);
    unsigned long (*Release)(Unk *self);
} UnkVtbl;
struct Unk { UnkVtbl *vt; };
typedef struct { void *vt; Unk *obj; } Self;

int fn_82F347F8(Self *self, Unk **out)
{
    int hr = 0;
    if (out == 0) {
        hr = 0x80004003;
    } else if (self->obj == 0) {
        hr = 0xC00D36B6;
    } else {
        *out = self->obj;
        if (*out) (*out)->vt->AddRef(*out);
    }
    return hr;
}
