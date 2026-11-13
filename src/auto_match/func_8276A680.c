typedef struct Obj_8276A680 {
    char pad0[0x28];
    char timer[0x2c];
    unsigned int count;
} Obj_8276A680;

extern float fn_82769828(void *timer, int index);
extern float lbl_82014C4C;

float fn_8276A680(Obj_8276A680 *self, int index)
{
    unsigned int count;

    if (index == -1) {
        return lbl_82014C4C;
    }
    count = self->count;
    return fn_82769828(self->timer, index) * lbl_82014C4C / (float)count;
}
