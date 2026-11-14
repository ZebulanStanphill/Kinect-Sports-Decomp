typedef struct Object_83035298 {
    char pad[0x28];
    float value;
} Object_83035298;

extern void fn_83034FA0(Object_83035298 *self);

void fn_83035298(Object_83035298 *self, float value)
{
    if (self->value != value) {
        self->value = value;
        fn_83034FA0(self);
    }
}
