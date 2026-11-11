typedef struct Inner_82FA97B0 { char pad[0x60]; void *data; } Inner_82FA97B0;
typedef struct Obj_82FA97B0 { char pad[0x40]; int inner; } Obj_82FA97B0;
extern int fn_82FAE168(void *data);

int fn_82FA97B0(Obj_82FA97B0 *self)
{
    if (self->inner != 0) {
        return fn_82FAE168(((Inner_82FA97B0 *)self->inner)->data);
    }
    return 0;
}
