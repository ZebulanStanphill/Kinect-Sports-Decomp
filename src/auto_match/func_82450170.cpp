struct Vec3_82450170 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */

    /* A user constructor makes the result non-POD: the hidden result pointer
       is forwarded to fn_82440D08 instead of copying a temporary. */
    Vec3_82450170()
    {
    }
};

typedef struct Track_82450170 {
    char pad[0x174];
    char *keys; /* 0x174 */
} Track_82450170;

typedef struct Player_82450170 Player_82450170;

typedef struct PlayerVt_82450170 {
    void *slots[10];
    int (*IsActive)(Player_82450170 *self); /* 0x28 */
} PlayerVt_82450170;

struct Player_82450170 {
    PlayerVt_82450170 *vt; /* 0x00 */
    char pad[0x3c];
    Track_82450170 **track; /* 0x40 */
    float *endTime;         /* 0x44 */
};

extern "C" void *fn_8242E688(Track_82450170 *track, unsigned char flag);
extern "C" int fn_82337D48(void *entry);
extern "C" Vec3_82450170 fn_82440D08(char *keys, float time, int flag, int inactive);

extern "C" Vec3_82450170 fn_82450170(Player_82450170 *player, float time, int flag)
{
    int active = player->vt->IsActive(player);
    if (time >= *player->endTime) {
        void *entry = fn_8242E688(*player->track, flag);
        if (entry == 0 || fn_82337D48(entry) == 0) {
            return fn_82440D08((*player->track)->keys + 4, 0.0f, flag, active == 0);
        }
        active = 1;
    }
    return fn_82440D08((*player->track)->keys + 4, *player->endTime - time, flag, active == 0);
}
