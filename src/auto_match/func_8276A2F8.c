typedef struct Obj_8276A2F8 {
    char pad0[0x2c];
    char timer[0xc];
    unsigned int size;
    char pad3c[0x1c];
    unsigned int count;
} Obj_8276A2F8;

extern float fn_82769420(void *timer, unsigned int index);
extern float lbl_82014C4C;
extern float lbl_82014C4C;

float fn_8276A2F8(Obj_8276A2F8 *self, unsigned int index)
{
    unsigned int count;

    if (index != 0xffffffff && index < self->size) {
        count = self->count;
        return fn_82769420(self->timer, index) * lbl_82014C4C / (float)count;
    }
    return lbl_82014C4C;
}
