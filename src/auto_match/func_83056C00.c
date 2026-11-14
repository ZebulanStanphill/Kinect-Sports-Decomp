typedef struct Obj_83056C00 Obj_83056C00;
typedef struct ObjVtbl_83056C00 {
    void *pad0[5];
    int (*get)(Obj_83056C00 *self, void *data, unsigned int size);  /* 0x14 */
} ObjVtbl_83056C00;
struct Obj_83056C00 {
    ObjVtbl_83056C00 *vt;
    float x;            /* 0x04 */
    float y;            /* 0x08 */
    float z;            /* 0x0c */
    float w;            /* 0x10 */
    int count;          /* 0x14 */
    unsigned char flag; /* 0x18 */
};

int fn_83056C00(Obj_83056C00 *self, unsigned int unused, void *data, unsigned int size)
{
    if (size == 0) {
        self->x = 0.0f;
        self->y = 0.0f;
        self->z = 0.0f;
        self->w = 10.0f;
        self->count = 0;
        self->flag = 1;
        return 1;
    }
    return self->vt->get(self, data, size);
}
