extern char lbl_82001D2C[];

typedef struct Obj_82662C98 {
    void *vtable;
} Obj_82662C98;

extern void fn_82662CD0(Obj_82662C98 *self);

void fn_82662C98(Obj_82662C98 *self)
{
    self->vtable = lbl_82001D2C;
    fn_82662CD0(self);
}
