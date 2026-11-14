struct Obj_82BD6B68;
typedef struct ObjVt_82BD6B68 {
    void *slot0;
    void *slot4;
    void (*apply)(struct Obj_82BD6B68 *self);
} ObjVt_82BD6B68;
typedef struct Obj_82BD6B68 {
    ObjVt_82BD6B68 *vt;
} Obj_82BD6B68;

typedef struct Self_82BD6B68 {
    char pad0[0x24];
    int applied[1];
} Self_82BD6B68;

extern Obj_82BD6B68 *fn_82BD6300(Self_82BD6B68 *self, unsigned int key);

void fn_82BD6B68(Self_82BD6B68 *self, unsigned int *keys, int *enable, unsigned int count)
{
    unsigned int i;
    for (i = 0; i < count; i++) {
        Obj_82BD6B68 *obj = fn_82BD6300(self, keys[i]);
        if (obj != 0 && enable[i] != 0) {
            obj->vt->apply(obj);
            self->applied[i] = 1;
        } else {
            self->applied[i] = 0;
        }
    }
}
