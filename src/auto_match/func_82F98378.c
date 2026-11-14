typedef struct Obj_82F98378 Obj_82F98378;
typedef struct ObjVtbl_82F98378 {
    void *pad0[5];
    int (*get)(Obj_82F98378 *self, void *data, unsigned int size);  /* 0x14 */
} ObjVtbl_82F98378;
struct Obj_82F98378 {
    ObjVtbl_82F98378 *vt;
    float a;            /* 0x04 */
    float b;            /* 0x08 */
    float c;            /* 0x0c */
    float d;            /* 0x10 */
    float e;            /* 0x14 */
    unsigned char f18;  /* 0x18 */
    unsigned char f19;  /* 0x19 */
};


int fn_82F98378(Obj_82F98378 *self, unsigned int unused, void *data, unsigned int size)
{
    if (size == 0) {
        self->f18 = 1;
        self->f19 = 1;
        self->a = -12.0f;
        self->b = 4.0f;
        self->c = 0.01f;
        self->d = 0.1f;
        self->e = 1.0f;
        return 1;
    }
    return self->vt->get(self, data, size);
}
