typedef struct Obj_82E230A8 Obj_82E230A8;
typedef struct {
    void (*f0)(Obj_82E230A8 *self);
    void (*f4)(Obj_82E230A8 *self);
} ObjVtbl_82E230A8;
struct Obj_82E230A8 { ObjVtbl_82E230A8 *v; };

int fn_82E230A8(Obj_82E230A8 **slot)
{
    if (*slot) {
        (*slot)->v->f4(*slot);
        *slot = 0;
        return 0;
    }
    return 0x65b;
}
