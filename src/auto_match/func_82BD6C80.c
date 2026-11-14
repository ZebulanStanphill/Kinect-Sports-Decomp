typedef struct Obj_82BD6C80 Obj_82BD6C80;
typedef struct {
    void *pad0[3];
    void (*release)(Obj_82BD6C80 *self);
    void *pad10[2];
    void *(*get)(Obj_82BD6C80 *self);
} ObjVt_82BD6C80;
struct Obj_82BD6C80 {
    ObjVt_82BD6C80 *vt;
};

typedef struct {
    char pad0[0x10];
    Obj_82BD6C80 *objs[5];
    void *values[2];
    unsigned int count;
} Owner_82BD6C80;

void fn_82BD6C80(Owner_82BD6C80 *self, void **outGot, void **outValues, unsigned int *outCount)
{
    unsigned int i;

    *outCount = self->count;
    for (i = 0; i < *outCount; i++) {
        Obj_82BD6C80 *o = self->objs[i];
        ObjVt_82BD6C80 *vt = self->objs[i]->vt;
        outGot[i] = vt->get(o);
        if (o != 0) {
            outValues[i] = self->values[i];
            o->vt->release(o);
            self->values[i] = 0;
        } else {
            outValues[i] = 0;
        }
    }
}
