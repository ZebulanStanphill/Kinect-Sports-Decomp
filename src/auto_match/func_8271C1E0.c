typedef struct Obj_8271C1E0 Obj_8271C1E0;

typedef struct ObjVtbl_8271C1E0 {
    void *slot0[2];
    int (*getType)(Obj_8271C1E0 *self);
    void *slotC[13];
    unsigned char (*slot40)(Obj_8271C1E0 *self);
} ObjVtbl_8271C1E0;

struct Obj_8271C1E0 {
    ObjVtbl_8271C1E0 *vt;
};

typedef struct Self_8271C1E0 {
    int unk0;
    unsigned char *target;
    Obj_8271C1E0 *obj;
} Self_8271C1E0;

extern void fn_826959C8(unsigned char *target);
extern void fn_82696BC8(unsigned char *target, void *item);

void fn_8271C1E0(Self_8271C1E0 *self)
{
    unsigned char *target;

    if (self->obj != 0 && self->obj->vt->getType(self->obj) == 0x1b
        && self->obj->vt->slot40(self->obj) == 0) {
        fn_82696BC8(self->target, self->obj != 0 ? (char *)self->obj - 0x10 : 0);
    } else {
        target = self->target;
        fn_826959C8(target);
        *target = 1;
    }
}
