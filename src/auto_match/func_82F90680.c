extern unsigned int lbl_8216BC98;

typedef struct Obj_82F90680 {
    void *vtable;
    int unk4;
    int count;
} Obj_82F90680;

extern void fn_82F90760(Obj_82F90680 *self);

void fn_82F90680(Obj_82F90680 *self)
{
    self->vtable = &lbl_8216BC98;
    while (self->count > 0) {
        fn_82F90760(self);
    }
}
