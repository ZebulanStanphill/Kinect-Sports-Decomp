/* Widens the 32-bit unsigned value that vtable slot 15 of the object returns to 64 bits. */
typedef struct Obj_828C4318 Obj_828C4318;

typedef struct ObjVt_828C4318 {
    void *slots[15];
    unsigned int (*get)(Obj_828C4318 *self);
} ObjVt_828C4318;

struct Obj_828C4318 {
    ObjVt_828C4318 *vt;
};

unsigned __int64 fn_828C4318(Obj_828C4318 *self)
{
    return self->vt->get(self);
}
