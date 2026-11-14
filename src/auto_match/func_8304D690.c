typedef struct Obj_8304D690 {
    char pad0[8];
    unsigned int flags;
} Obj_8304D690;

typedef struct Self_8304D690 {
    char pad0[8];
    Obj_8304D690 *obj;
    int pad0C;
    char target[4];
} Self_8304D690;

extern void fn_8304EE50(void *target, Obj_8304D690 *obj, float weight, int a, int b);

void fn_8304D690(Self_8304D690 *self, int a, int b)
{
    Obj_8304D690 *obj = self->obj;

    if ((obj->flags & 0x10000) == 0) {
        return;
    }
    fn_8304EE50(self->target, obj, 1.0f, a, b);
}
