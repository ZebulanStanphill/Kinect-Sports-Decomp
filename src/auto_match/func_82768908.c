typedef struct Obj_82768908 {
    char pad0[0x28];
    char timer[0x2c];
    unsigned int count;
} Obj_82768908;

extern float fn_82767090(void *timer);
extern float lbl_82014C4C;

float fn_82768908(Obj_82768908 *self)
{
    return fn_82767090(self->timer) * lbl_82014C4C / (float)self->count;
}
