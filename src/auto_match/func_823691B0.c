typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int reg);

typedef struct Pose_823691B0 {
    __vector4 position;        /* 0x00 */
    __vector4 rotation;        /* 0x10 */
    int bone;                  /* 0x20 */
    unsigned char hasPosition; /* 0x24 */
    unsigned char hasRotation; /* 0x25 */
    char pad26[0xA];
} Pose_823691B0;

typedef struct Model_823691B0 {
    char pad0[0x48];
    void *skeleton; /* 0x48 */
} Model_823691B0;

typedef struct Player_823691B0 {
    Model_823691B0 **models; /* 0x00 */
    int pad4[3];
    int current; /* 0x10 */
} Player_823691B0;

typedef struct Players_823691B0 {
    Player_823691B0 **players; /* 0x00 */
} Players_823691B0;

typedef struct Self_823691B0 {
    char pad0[0x8];
    Players_823691B0 *players; /* 0x0008 */
    char pad0C[0x1090 - 0xC];
    Pose_823691B0 poses[2][7]; /* 0x1090 */
} Self_823691B0;

typedef struct Key_823691B0 {
    char pad0[0x28];
    int slot;   /* 0x28 */
    int player; /* 0x2C */
} Key_823691B0;

extern const __vector4 lbl_82196750;
extern int fn_822AC918(void *skeleton, int bone, __vector4 *position, __vector4 *rotation);

int fn_823691B0(Self_823691B0 *self, Key_823691B0 *key, __vector4 *position, __vector4 *rotation)
{
    int result = 0;
    int playerIndex;
    int slot;

    if (position != 0) {
        *position = __VMXGetReg(77);
    }
    if (rotation != 0) {
        *rotation = lbl_82196750;
    }
    playerIndex = key->player;
    slot = key->slot;
    if (playerIndex < 2 && slot < 7) {
        Pose_823691B0 *pose = &self->poses[playerIndex][slot];

        if (pose->bone != -1) {
            Player_823691B0 *player = self->players->players[playerIndex];

            result = fn_822AC918(player->models[player->current]->skeleton, pose->bone, position, rotation);
            if (pose->hasPosition) {
                result = 1;
                if (position != 0) {
                    *position = pose->position;
                }
            }
            if (pose->hasRotation && rotation != 0) {
                *rotation = pose->rotation;
            }
        }
    }
    return result;
}
