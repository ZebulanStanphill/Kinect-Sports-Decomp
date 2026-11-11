typedef struct {
    char pad0[0x40];
    int x40;
    int x44;
} Inner_82349F60;
typedef struct {
    char pad0[0x10];
    Inner_82349F60 *inner;
} Obj_82349F60;

extern void fn_823412E8(Obj_82349F60 *o);

void fn_82349F60(Obj_82349F60 *o)
{
    o->inner->x40 = 0;
    o->inner->x44 = 0;
    fn_823412E8(o);
}
