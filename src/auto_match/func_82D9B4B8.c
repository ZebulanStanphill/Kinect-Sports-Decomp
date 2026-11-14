typedef struct Obj_82D9B4B8 Obj_82D9B4B8;
typedef struct ObjVtbl_82D9B4B8 {
    void *slot0[4];
    void (*SetValue)(Obj_82D9B4B8 *self, float value);
} ObjVtbl_82D9B4B8;
struct Obj_82D9B4B8 {
    ObjVtbl_82D9B4B8 *vt;
};

void fn_82D9B4B8(Obj_82D9B4B8 *self, float value)
{
    self->vt->SetValue(self, 1.0f / value);
}
