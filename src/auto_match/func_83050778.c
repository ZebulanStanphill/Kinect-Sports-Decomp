typedef struct Inner_83050778 { char pad[0x8c]; void *obj; } Inner_83050778;
typedef struct Obj_83050778 { char pad[0x60]; Inner_83050778 *inner; } Obj_83050778;
extern int fn_82FA52E8(void *obj);

int fn_83050778(Obj_83050778 *self)
{
    return fn_82FA52E8(self->inner->obj);
}
