typedef struct Obj_82E6F5D8 Obj_82E6F5D8;

typedef struct Vtbl_82E6F5D8 {
    void *slot0;
    void *slot1;
    void (*release)(Obj_82E6F5D8 *self);
} Vtbl_82E6F5D8;

struct Obj_82E6F5D8 {
    Vtbl_82E6F5D8 *vt;
};

typedef struct Self_82E6F5D8 {
    void *vt;
    int pad[0x15];
    Obj_82E6F5D8 *obj;
} Self_82E6F5D8;

extern void fn_82E6EE68(Self_82E6F5D8 *self);
extern char lbl_8215EDBC[];

void fn_82E6F5D8(Self_82E6F5D8 *self)
{
    self->vt = lbl_8215EDBC;
    if (self->obj != 0) {
        self->obj->vt->release(self->obj);
        self->obj = 0;
    }
    fn_82E6EE68(self);
}
