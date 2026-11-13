typedef struct Obj_8276A618 {
    char pad0[0x28];
    char timer[0x2c];
    unsigned int count;
} Obj_8276A618;

extern float fn_82769728(void *timer, int index);
extern float lbl_82014C48;
extern float lbl_82014C4C;

float fn_8276A618(Obj_8276A618 *self, int index)
{
    unsigned int count;
    if (index == -1)
        return lbl_82014C48;
    count = self->count;
    return fn_82769728(self->timer, index) * lbl_82014C4C / (float)count;
}
