extern void fn_824B4288(void *p, unsigned int size);
extern char lbl_82165C70[];

typedef struct {
    void *vtable;
    int pad04[5];
    int field18;
    int pad1C[5];
    char block30[1];
} Obj_82F53CA0;

Obj_82F53CA0 *fn_82F53CA0(Obj_82F53CA0 *self)
{
    self->field18 = 0;
    self->vtable = lbl_82165C70;
    fn_824B4288(self->block30, 0xab0);
    return self;
}
