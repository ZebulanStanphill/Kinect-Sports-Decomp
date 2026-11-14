typedef struct Obj_827F93C0 {
    char pad0[0x1c];
    void *primary;
    void *secondary;
} Obj_827F93C0;

extern void fn_827F9090(Obj_827F93C0 *self, int mode);
extern void fn_827F8B30(Obj_827F93C0 *self, int mode);
extern void fn_827F87A0(Obj_827F93C0 *self, int mode);

void fn_827F93C0(Obj_827F93C0 *self)
{
    if (self->primary != 0) {
        fn_827F9090(self, 2);
        return;
    }
    if (self->secondary != 0) {
        fn_827F8B30(self, 2);
        return;
    }
    fn_827F87A0(self, 2);
}
