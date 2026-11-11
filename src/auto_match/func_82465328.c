typedef struct Obj_82465328 Obj_82465328;
typedef struct {
    void *slot0;
    unsigned char (*Check)(Obj_82465328 *self);
} ObjVtbl_82465328;
struct Obj_82465328 {
    ObjVtbl_82465328 *vt;
};
typedef struct {
    char pad0[0x24];
    Obj_82465328 *obj;
    char pad28[0x14];
    float value;
} Owner_82465328;
extern float lbl_821922C0[];
unsigned char fn_82465328(Owner_82465328 *o)
{
    if (o->value <= lbl_821922C0[5] && o->obj != 0 && !o->obj->vt->Check(o->obj)) {
        return 1;
    }
    return 0;
}
