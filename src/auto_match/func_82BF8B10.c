typedef void (*ReleaseFn_82BF8B10)(void *handle);

typedef struct Obj_82BF8B10 {
    void *vtable;
    char pad4[0x4c];
    void *handle;
} Obj_82BF8B10;

extern char lbl_820EBDC8[];
extern ReleaseFn_82BF8B10 lbl_831751CC;
extern void fn_82BE5998(void *self);

void fn_82BF8B10(Obj_82BF8B10 *self)
{
    self->vtable = lbl_820EBDC8;
    if (self->handle != 0) {
        lbl_831751CC(self->handle);
        self->handle = 0;
    }
    fn_82BE5998(self);
}
