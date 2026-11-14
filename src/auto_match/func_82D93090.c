/* hkpMotion vtable slot 3 (also hkpSphereMotion): stores the inverse of the mass. */
typedef struct Obj_82D93090 Obj_82D93090;

typedef struct ObjVtbl_82D93090 {
    void *pad0[4];
    void (*setInverse)(Obj_82D93090 *self, float inverse);
} ObjVtbl_82D93090;

struct Obj_82D93090 {
    ObjVtbl_82D93090 *vt;
};

void fn_82D93090(Obj_82D93090 *self, float value)
{
    float inverse;

    if (value == 0.0f) {
        inverse = 0.0f;
    } else {
        inverse = 1.0f / value;
    }
    self->vt->setInverse(self, inverse);
}
