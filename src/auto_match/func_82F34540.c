typedef struct Unk Unk;
typedef struct {
    int (*QueryInterface)(Unk *self, void *iid, void **out);
    unsigned long (*AddRef)(Unk *self);
    unsigned long (*Release)(Unk *self);
} UnkVtbl;
struct Unk { UnkVtbl *vt; };
typedef struct { void *vt; int pad; unsigned int count; Unk **items; } Self_82F34540;
int fn_82F34540(Self_82F34540 *self, unsigned int idx, Unk **out)
{
    int hr = 0;
    if (out == 0) {
        hr = 0x80004003;
    } else if (idx >= self->count) {
        hr = 0xC00D36B9;
    } else if (self->items != 0 && self->items[idx] != 0) {
        *out = self->items[idx];
        (*out)->vt->AddRef(*out);
    } else {
        hr = 0x80004005;
    }
    return hr;
}
