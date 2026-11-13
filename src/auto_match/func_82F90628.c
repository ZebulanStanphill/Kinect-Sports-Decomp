typedef struct Obj_82F90628 {
    char *vt;
    int value;
    int f8;
} Obj_82F90628;

extern char lbl_8216BC98[];
extern void fn_82F906D0(Obj_82F90628 *self);

Obj_82F90628 *fn_82F90628(Obj_82F90628 *self, int value)
{
    self->vt = lbl_8216BC98;
    self->value = value;
    self->f8 = 0;
    fn_82F906D0(self);
    return self;
}
