typedef struct Obj_8229E458 Obj_8229E458;

typedef struct Vtbl_8229E458 {
    void *slot0;
    void (*slot4)(Obj_8229E458 *self);
} Vtbl_8229E458;

struct Obj_8229E458 {
    Vtbl_8229E458 *vt;
};

typedef struct Self_8229E458 {
    Obj_8229E458 *obj;          /* 0x000 */
    char pad004[0x410 - 4];
    int flag410;                /* 0x410 */
} Self_8229E458;

extern void fn_8229E260(Self_8229E458 *self);

int fn_8229E458(Self_8229E458 *self)
{
    Obj_8229E458 *obj;

    if (self->flag410 != 0) {
        fn_8229E260(self);
        return 1;
    }
    obj = self->obj;
    if (obj != 0) {
        obj->vt->slot4(obj);
    }
    return 0;
}
