typedef struct Obj_8232DAB0 {
    char pad[0xc];
    void *target;
    float value;
} Obj_8232DAB0;

extern void fn_8232C5F0(void *target, float value);

void fn_8232DAB0(Obj_8232DAB0 *self)
{
    fn_8232C5F0(self->target, self->value);
}
