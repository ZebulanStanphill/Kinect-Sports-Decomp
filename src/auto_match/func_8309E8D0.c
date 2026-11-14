typedef struct Data_8309E8D0 {
    char pad0[0x10];
    float x;
    char pad14[0x70 - 0x14];
    float y;
    char pad74[0xd0 - 0x74];
    float z;
    char padd4[0x130 - 0xd4];
    float w;
} Data_8309E8D0;

typedef struct Obj_8309E8D0 {
    char pad0[0xc4];
    Data_8309E8D0 *data;
} Obj_8309E8D0;

typedef struct Self_8309E8D0 {
    char pad0[0xc];
    Obj_8309E8D0 *obj;
} Self_8309E8D0;

void fn_8309E8D0(Self_8309E8D0 *self, float *out)
{
    if (self->obj == 0)
        return;
    out[0] = self->obj->data->x;
    out[1] = self->obj->data->y;
    out[2] = self->obj->data->z;
    out[3] = self->obj->data->w;
}
