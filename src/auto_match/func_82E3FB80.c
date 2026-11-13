typedef struct IUnk_82E3FB80 IUnk_82E3FB80;

typedef struct Vtbl_82E3FB80 {
    int (*QueryInterface)(IUnk_82E3FB80 *self, void *iid, IUnk_82E3FB80 **out);
    unsigned long (*AddRef)(IUnk_82E3FB80 *self);
    unsigned long (*Release)(IUnk_82E3FB80 *self);
    void *slots[7];
    int (*Get)(IUnk_82E3FB80 *self, IUnk_82E3FB80 **out);    /* 0x28 */
} Vtbl_82E3FB80;

struct IUnk_82E3FB80 {
    Vtbl_82E3FB80 *vt;
};

typedef struct Obj_82E3FB80 {
    char pad0[0x44];
    unsigned int flags;      /* 0x44 */
    char pad48[0x6c - 0x48];
    int active;              /* 0x6c */
} Obj_82E3FB80;

extern char lbl_8215ED68[];
extern char lbl_820ED018[];
extern char lbl_82154C58[];
extern char lbl_82154C18[];

extern int fn_82E3F8D0(Obj_82E3FB80 *self);
extern int fn_82E59440(IUnk_82E3FB80 *src, void *a, void *b, IUnk_82E3FB80 **out);
extern int fn_82E3B888(Obj_82E3FB80 *self, IUnk_82E3FB80 *src, IUnk_82E3FB80 *p);
extern int fn_82E3DC18(Obj_82E3FB80 *self, IUnk_82E3FB80 *p);
extern int fn_82E3C118(Obj_82E3FB80 *self, IUnk_82E3FB80 *p);

int fn_82E3FB80(Obj_82E3FB80 *self, IUnk_82E3FB80 *src)
{
    IUnk_82E3FB80 *p0;
    IUnk_82E3FB80 *p1;
    IUnk_82E3FB80 *p2;
    IUnk_82E3FB80 *p3;
    int hr;

    if ((self->flags & 1) == 0) {
        return 0xC00D36B2;
    }
    if (self->active != 0) {
        return 0xC00D36B2;
    }
    p0 = 0;
    p1 = 0;
    p2 = 0;
    p3 = 0;
    hr = fn_82E3F8D0(self);
    if (hr >= 0) {
        self->active = 1;
        hr = src->vt->QueryInterface(src, lbl_8215ED68, &p0);
        if (hr >= 0) {
            hr = p0->vt->Get(p0, &p1);
            if (hr >= 0) {
                hr = fn_82E59440(p1, lbl_820ED018, lbl_82154C58, &p2);
                if (hr >= 0) {
                    hr = p2->vt->QueryInterface(p2, lbl_82154C18, &p3);
                    if (hr >= 0) {
                        hr = fn_82E3B888(self, src, p3);
                        if (hr >= 0) {
                            hr = fn_82E3DC18(self, p3);
                            if (hr >= 0) {
                                hr = fn_82E3C118(self, p3);
                            }
                        }
                    }
                }
            }
        }
    }
    if (hr < 0) {
        self->active = 0;
    }
    if (p0 != 0) {
        p0->vt->Release(p0);
        p0 = 0;
    }
    if (p1 != 0) {
        p1->vt->Release(p1);
        p1 = 0;
    }
    if (p2 != 0) {
        p2->vt->Release(p2);
        p2 = 0;
    }
    if (p3 != 0) {
        p3->vt->Release(p3);
    }
    return hr;
}
