typedef struct { unsigned int d1; unsigned short d2, d3; unsigned char d4[8]; } Guid_82E39F70;
typedef struct Unknown_82E39F70 Unknown_82E39F70;
typedef struct {
    long (*QueryInterface)(Unknown_82E39F70 *self, const Guid_82E39F70 *iid, Unknown_82E39F70 **out);
    unsigned long (*AddRef)(Unknown_82E39F70 *self);
    unsigned long (*Release)(Unknown_82E39F70 *self);
    void *f0c;
    long (*GetItem)(Unknown_82E39F70 *self, const Guid_82E39F70 *key, int index, Unknown_82E39F70 **out);
    long (*GetValue)(Unknown_82E39F70 *self, int index, __int64 *out);
    void *f18, *f1c, *f20, *f24;
    long (*GetChild)(Unknown_82E39F70 *self, Unknown_82E39F70 **out);
} UnknownVtbl_82E39F70;
struct Unknown_82E39F70 { UnknownVtbl_82E39F70 *vt; };
typedef struct { int f0; int f4; char lock[0x64]; int ready; } Obj_82E39F70;
extern const Guid_82E39F70 lbl_8215ED68, lbl_82154C18, lbl_820ED018, lbl_821549B8;
extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);

long fn_82E39F70(Obj_82E39F70 *self, Unknown_82E39F70 *src, __int64 *out)
{
    long hr;
    Unknown_82E39F70 *a, *b, *c, *d, *e;
    __int64 v1, v2;
    fn_82E50CB8(self->lock);
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    if (src == 0) {
        hr = 0x80070057;
    } else if (out == 0) {
        hr = 0x80070057;
    } else {
        *out = 0;
        if (self->ready == 0) {
            hr = 0xC00D36B2;
        } else {
            v1 = 0;
            v2 = 0;
            hr = src->vt->QueryInterface(src, &lbl_8215ED68, &a);
            if (hr >= 0) {
                hr = a->vt->GetChild(a, &b);
                if (hr >= 0) {
                    hr = b->vt->QueryInterface(b, &lbl_82154C18, &c);
                    if (hr >= 0) {
                        hr = c->vt->GetItem(c, &lbl_820ED018, 0, &d);
                        if (hr >= 0) {
                            hr = c->vt->GetItem(c, &lbl_821549B8, 0, &e);
                            if (hr >= 0) {
                                hr = d->vt->GetValue(d, 0, &v1);
                                if (hr >= 0) {
                                    hr = e->vt->GetValue(e, 0, &v2);
                                    if (hr >= 0) {
                                        *out = v2 + v1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (a != 0) { a->vt->Release(a); a = 0; }
            if (b != 0) { b->vt->Release(b); b = 0; }
            if (c != 0) { c->vt->Release(c); c = 0; }
            if (e != 0) { e->vt->Release(e); e = 0; }
            if (d != 0) { d->vt->Release(d); d = 0; }
        }
    }
    fn_82E50F10(self->lock);
    return hr;
}
