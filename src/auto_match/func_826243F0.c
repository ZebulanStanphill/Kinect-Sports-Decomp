typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct {
    unsigned int flags;
    float position[3];
    float velocity[3];
    char pad1c[0x2c];
} SoundParams_826243F0;

typedef struct {
    char pad[0x20];
    unsigned int flags;
} Voice_826243F0;

typedef struct {
    char pad[4];
    Voice_826243F0 **voices;
} Bank_826243F0;

typedef struct {
    Bank_826243F0 *banks[6];
    int pendingHandle;
} Player_826243F0;

typedef struct {
    char pad[0x7fc];
    Player_826243F0 player;
} Owner_826243F0;

extern unsigned int lbl_83297A40;
extern SoundParams_826243F0 lbl_832978C8;
extern int fn_82599B18(Player_826243F0 *player, int id, SoundParams_826243F0 *params);

static __forceinline void StoreFloat3(float *p, __vector4 v)
{
    __vector4 x = __vspltw(v, 0);
    __vector4 y = __vspltw(v, 1);
    __vector4 z = __vspltw(v, 2);
    __stvewx(x, p, 0);
    __stvewx(y, p, 4);
    __stvewx(z, p, 8);
}

void fn_826243F0(Owner_826243F0 *self, int id, const __vector4 *position)
{
    Player_826243F0 *player = &self->player;
    int handle;

    if ((lbl_83297A40 & 1) == 0) {
        lbl_83297A40 |= 1;
    }
    lbl_832978C8.flags = 0;
    StoreFloat3(lbl_832978C8.position, *position);
    lbl_832978C8.flags |= 1;
    lbl_832978C8.velocity[0] = 0.0f;
    lbl_832978C8.velocity[1] = 0.0f;
    lbl_832978C8.velocity[2] = 0.0f;
    lbl_832978C8.flags |= 4;
    fn_82599B18(player, id, &lbl_832978C8);

    handle = player->pendingHandle;
    player->pendingHandle = -1;
    if (handle != -1) {
        player->banks[(handle >> 8) & 0xff]->voices[handle & 0xff]->flags |= 8;
    }
}
