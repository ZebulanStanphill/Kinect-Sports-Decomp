typedef struct Obj_82FC9278 Obj_82FC9278;

typedef struct ObjVtbl_82FC9278 {
    void *pad0[5];
    int (*get)(Obj_82FC9278 *self, void *data, unsigned int size); /* 0x14 */
} ObjVtbl_82FC9278;

struct Obj_82FC9278 {
    ObjVtbl_82FC9278 *vt;
    float a, b, c, d, e, f, g, h, i;
    unsigned char enabled;
};

int fn_82FC9278(Obj_82FC9278 *self, unsigned int unused, void *data, unsigned int size)
{
    if (size == 0) {
        self->enabled = 1;
        self->a = 50.0f;
        self->b = 0.707945764f;
        self->c = 0.251188636f;
        self->d = 0.01f;
        self->e = 0.04f;
        self->f = 2.0f;
        self->g = 7000.0f;
        self->h = 0.0f;
        self->i = 1.0f;
        return 1;
    }
    return self->vt->get(self, data, size);
}
