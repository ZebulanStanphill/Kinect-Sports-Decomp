typedef struct Obj_829E8B70 Obj_829E8B70;
struct Obj_829E8B70 {
    struct {
        void *f0, *f4;
        void (*release)(Obj_829E8B70 *self);
    } *vt;
};

typedef struct {
    char pad0[0x10];
    int unk10;
    int unk14;
    char pad18[0xc];
    int unk24;
    int unk28;
    Obj_829E8B70 *obj;
    int unk30;
} Self_829E8B70;

void fn_829E8B70(Self_829E8B70 *self)
{
    if (self->obj != 0) {
        self->obj->vt->release(self->obj);
        self->obj = 0;
    }
    self->unk28 = 0;
    self->unk10 = 0;
    self->unk14 = 0;
    self->unk24 = 0;
    self->unk30 = 0;
}
