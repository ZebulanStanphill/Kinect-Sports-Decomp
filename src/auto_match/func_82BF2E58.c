typedef void (*ReleaseFn_82BF2E58)(void *handle);

typedef struct Obj_82BF2E58 {
    void *vtable;
    char pad4[0x10];
    unsigned char active;
    char pad15[3];
    void *handle;
} Obj_82BF2E58;

extern char lbl_820EB6F4[];
extern ReleaseFn_82BF2E58 lbl_831751CC;
extern void fn_82BE5230(void *self);

void fn_82BF2E58(Obj_82BF2E58 *self)
{
    self->vtable = lbl_820EB6F4;
    if (self->handle != 0)
        lbl_831751CC(self->handle);
    self->active = 0;
    fn_82BE5230(self);
}
