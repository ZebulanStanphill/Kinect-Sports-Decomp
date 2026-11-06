typedef struct Obj_82FB0778 Obj_82FB0778;
typedef struct {
    char pad[0xa0];
    void (*fnA0)(Obj_82FB0778 *self, unsigned char flag);
} ObjVtbl_82FB0778;
struct Obj_82FB0778 { ObjVtbl_82FB0778 *vt; };
typedef struct { int kind; char pad[0x11]; unsigned char enabled; } Arg_82FB0778;

int fn_82FB0778(Obj_82FB0778 *self, Arg_82FB0778 *arg)
{
    if (arg->enabled) {
        unsigned char flag = 0;
        if (arg->kind == 1) flag = 1;
        self->vt->fnA0(self, flag);
    }
    return 1;
}
