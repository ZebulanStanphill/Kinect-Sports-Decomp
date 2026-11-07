typedef struct Obj_82E7E558 Obj_82E7E558;

typedef struct VTable_82E7E558 {
    void *slot0;
    void *slot4;
    void (*release)(Obj_82E7E558 *self);
} VTable_82E7E558;

struct Obj_82E7E558 {
    VTable_82E7E558 *vt;
};

typedef struct Self_82E7E558 {
    void *vt;
    int pad4;
    int pad8;
    int padC;
    Obj_82E7E558 *obj;
} Self_82E7E558;

extern void fn_82EF4488(Self_82E7E558 *self);
extern char lbl_8215F108[];

void fn_82E7E558(Self_82E7E558 *self)
{
    Obj_82E7E558 *obj = self->obj;
    self->vt = lbl_8215F108;
    if (obj != 0) {
        obj->vt->release(obj);
        self->obj = 0;
    }
    fn_82EF4488(self);
}
