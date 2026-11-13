typedef struct Obj_82F3E240 { int pad[2]; void *inner; } Obj_82F3E240;
extern int fn_82F3E1E0(Obj_82F3E240 *self);

int fn_82F3E240(Obj_82F3E240 *self)
{
    if (self->inner == 0) {
        return 0xC00D36B6;
    }
    return fn_82F3E1E0(self);
}
