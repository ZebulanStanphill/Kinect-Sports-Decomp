typedef struct Obj_82FE5E68 Obj_82FE5E68;
typedef struct ObjVtbl_82FE5E68 {
    void *pad0[5];
    int (*get)(Obj_82FE5E68 *self, void *data, unsigned int size);  /* 0x14 */
} ObjVtbl_82FE5E68;
struct Obj_82FE5E68 {
    ObjVtbl_82FE5E68 *vt;
    float x;    /* 0x04 */
    float y;    /* 0x08 */
    float z;    /* 0x0c */
};

int fn_82FE5E68(Obj_82FE5E68 *self, unsigned int unused, void *data, unsigned int size)
{
    if (size == 0) {
        self->x = 1.0f;
        self->y = 0.0f;
        self->z = 0.0f;
        return 1;
    }
    return self->vt->get(self, data, size);
}
