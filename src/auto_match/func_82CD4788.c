typedef struct {
    char pad[0x38d8];
    int f38d8;
    int f38dc;
    int f38e0;
} Obj_82CD4788;

extern void fn_82CD37A8(Obj_82CD4788 *self);

void fn_82CD4788(Obj_82CD4788 *self)
{
    self->f38e0 = 1;
    self->f38dc = 0;
    self->f38d8 = 1;
    fn_82CD37A8(self);
}
