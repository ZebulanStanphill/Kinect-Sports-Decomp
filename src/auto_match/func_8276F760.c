typedef struct Value_8276F760 {
    int width;
    int height;
    int depth;
    int flags;
} Value_8276F760;

typedef struct Source_8276F760 {
    char padding[8];
    Value_8276F760 value;
} Source_8276F760;

typedef struct Object_8276F760 {
    char padding[0x10];
    int source;
} Object_8276F760;

extern float lbl_820151C0;

float fn_8276F760(Object_8276F760 *self)
{
    Value_8276F760 value;
    value.width = 48;
    if (self->source != 0) {
        value = ((Source_8276F760 *)self->source)->value;
    }
    return (float)value.width * lbl_820151C0;
}
