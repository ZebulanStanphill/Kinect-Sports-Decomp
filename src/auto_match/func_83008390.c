typedef struct Obj Obj;
typedef struct ObjVt {
    void *f0;
    int (*Start)(Obj *self, int a, int b, int c);
    void *f8;
    int (*Init)(Obj *self, const void *iid, int a, int b);
} ObjVt;
struct Obj { ObjVt *vt; };
typedef struct Self_83008390 {
    char pad[0x18];
    Obj *obj;
    unsigned int id;
} Self_83008390;

extern const char lbl_831BC7F4[];
extern int fn_83013880(const void *iid, unsigned int id, Obj **out);
extern int fn_82FF2AA0(Obj *obj, int a, int b, int c);

int fn_83008390(Self_83008390 *self, unsigned int id, int a, int b, int c)
{
    int hr = 1;
    Obj *obj;

    if (self->id != id)
        return 2;
    if (self->obj == 0) {
        Obj *created = 0;
        hr = fn_83013880(lbl_831BC7F4, self->id, &created);
        if (hr != 1)
            return hr;
        if (created != 0) {
            self->obj = created;
            hr = created->vt->Init(created, lbl_831BC7F4, 0, 0);
            if (hr != 1)
                return hr;
        }
    }
    obj = self->obj;
    if (obj != 0) {
        hr = obj->vt->Start(obj, a, b, c);
        if (hr == 1)
            hr = fn_82FF2AA0(obj, a, b, c);
    }
    return hr;
}
