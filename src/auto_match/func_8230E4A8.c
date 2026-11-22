typedef struct Model_8230E4A8 {
    char pad0[0x20];
    void *animator; /* 0x20 */
} Model_8230E4A8;

typedef struct Actor_8230E4A8 {
    char pad0[0x114];
    Model_8230E4A8 *model; /* 0x114 */
} Actor_8230E4A8;

typedef struct Player_8230E4A8 {
    char pad0[0xc];
    Actor_8230E4A8 *actor; /* 0x0C */
    char pad10[0x4d0 - 0x10];
    float delay; /* 0x4D0 */
} Player_8230E4A8;

extern unsigned int lbl_83265A28;
extern int lbl_831CC3C8[];
extern int fn_822C72E0(void *animator, int animation);

static __forceinline float RandomFloat_8230E4A8(unsigned int *seed)
{
    union {
        unsigned int u;
        float f;
    } random;

    *seed = *seed * 0x19660d + 0x3c6ef35f;
    random.u = (*seed & 0x7fffff) | 0x3f800000;
    return random.f - 1.0f;
}

unsigned char fn_8230E4A8(Player_8230E4A8 *self)
{
    int index = -(int)(RandomFloat_8230E4A8(&lbl_83265A28) * -2.0f);

    if (fn_822C72E0(self->actor->model->animator, lbl_831CC3C8[index]) != 0) {
        self->delay = 3.0f;
        return 1;
    }
    return 0;
}
