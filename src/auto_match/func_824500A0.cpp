struct Vec3_824500A0 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */

    /* A user constructor makes the result non-POD: the hidden result pointer
       is forwarded to fn_82440B28 instead of copying a temporary. */
    Vec3_824500A0()
    {
    }
};

typedef struct Clip_824500A0 {
    int unk0;
    float speed; /* 0x4 */
} Clip_824500A0;

typedef struct Keys_824500A0 {
    int unk0;
    Clip_824500A0 *clip; /* 0x4 */
} Keys_824500A0;

typedef struct Track_824500A0 {
    char pad[0x174];
    Keys_824500A0 *keys; /* 0x174 */
} Track_824500A0;

typedef struct Player_824500A0 Player_824500A0;

typedef struct PlayerVt_824500A0 {
    void *slots[10];
    int (*IsActive)(Player_824500A0 *self); /* 0x28 */
} PlayerVt_824500A0;

struct Player_824500A0 {
    PlayerVt_824500A0 *vt; /* 0x00 */
    char pad[0x3c];
    Track_824500A0 **track; /* 0x40 */
    float *endTime;         /* 0x44 */
};

extern "C" void *fn_8242E688(Track_824500A0 *track, unsigned char flag);
extern "C" int fn_82337D48(void *entry);
extern "C" Vec3_824500A0 fn_82440B28(Clip_824500A0 **clip, float time, float speed, int inactive);

extern "C" Vec3_824500A0 fn_824500A0(Player_824500A0 *player, float time, int flag)
{
    int active = player->vt->IsActive(player);
    Keys_824500A0 *keys;

    if (time >= *player->endTime) {
        void *entry = fn_8242E688(*player->track, flag);
        if (entry != 0 && fn_82337D48(entry) != 0) {
            active = 1;
        } else {
            active = 0;
        }
    }
    keys = (*player->track)->keys;
    return fn_82440B28(&keys->clip, *player->endTime - time, keys->clip->speed * (float)(unsigned char)flag,
                       active == 0);
}
