typedef void (*ReleaseFn_82BF79D8)(void *handle);

typedef struct Obj_82BF79D8 {
    void *vtable;
    char pad4[0x8];
    void *handle;
} Obj_82BF79D8;

extern char lbl_820EBC10[];
extern ReleaseFn_82BF79D8 lbl_831751CC;
extern void fn_82BE8CF8(void *self);

void fn_82BF79D8(Obj_82BF79D8 *self)
{
    self->vtable = lbl_820EBC10;
    if (self->handle != 0) {
        lbl_831751CC(self->handle);
        self->handle = 0;
    }
    fn_82BE8CF8(self);
}
