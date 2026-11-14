typedef struct Obj_82DFBC68 Obj_82DFBC68;
typedef struct ObjVtbl_82DFBC68 {
    void *pad0[8];
    float (*getValue)(Obj_82DFBC68 *self);
} ObjVtbl_82DFBC68;
struct Obj_82DFBC68 {
    ObjVtbl_82DFBC68 *vt;
};
typedef struct Data_82DFBC68 {
    char pad0[0xb4];
    float scale;
} Data_82DFBC68;
typedef struct Status_82DFBC68 {
    char pad0[0xf];
    unsigned char disabled;
} Status_82DFBC68;

float fn_82DFBC68(Obj_82DFBC68 *self, Data_82DFBC68 *data, Status_82DFBC68 *status)
{
    float scale;

    if (status->disabled) {
        return 0.0f;
    }
    scale = data->scale;
    return self->vt->getValue(self) * scale;
}
