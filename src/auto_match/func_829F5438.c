typedef struct {
    char pad0[0x78];
    unsigned int ids[6];
    char pad90[0xc];
    void *players;
} Obj_829F5438;

extern float fn_829FCF20(void *players, int index);
extern float lbl_82079FD0;

float fn_829F5438(Obj_829F5438 *o, unsigned int id)
{
    int i;
    for (i = 0; i < 6; i++) {
        if (o->ids[i] == id) {
            return fn_829FCF20(o->players, i);
        }
    }
    return lbl_82079FD0;
}
