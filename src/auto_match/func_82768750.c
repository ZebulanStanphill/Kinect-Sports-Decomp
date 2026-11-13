typedef struct Obj_82768750 {
    char pad0[0x2c];
    char timer[0x2c];
    unsigned int count;
} Obj_82768750;

extern float fn_82766EF0(void *timer);
extern float lbl_82014C4C;

float fn_82768750(Obj_82768750 *self)
{
    return fn_82766EF0(self->timer) * lbl_82014C4C / (float)self->count;
}
