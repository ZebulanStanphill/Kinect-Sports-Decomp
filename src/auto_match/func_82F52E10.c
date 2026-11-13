typedef struct Obj_82F52E10 Obj_82F52E10;

typedef struct Vtbl_82F52E10 {
    void *pad[2];
    void (*play)(Obj_82F52E10 *self, int a, void *key, unsigned int ms, int b, int c);
    void *pad2[2];
    void (*f14)(Obj_82F52E10 *self, int a);
} Vtbl_82F52E10;

struct Obj_82F52E10 {
    Vtbl_82F52E10 *vt;
};

typedef struct Self_82F52E10 {
    int pad0;
    int index;
    Obj_82F52E10 *obj;
} Self_82F52E10;

extern void fn_82F52A70(Self_82F52E10 *self, void *key);

void fn_82F52E10(Self_82F52E10 *self, void *key, float t)
{
    if (self->obj != 0) {
        fn_82F52A70(self, key);
        self->obj->vt->play(self->obj, 1, key, (unsigned int)(t * 1000.0f + 0.5f), 0, 0);
        self->obj->vt->f14(self->obj, 0);
    }
}
