typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Body_823E1158 {
    char pad0[0x20];
    void *skeleton;             /* 0x20 */
    char pad24[0x24];
    void *aim;                  /* 0x48 */
} Body_823E1158;

typedef struct Player_823E1158 {
    char pad0[0x80];
    __vector4 position;         /* 0x80 */
    char pad90[0x84];
    Body_823E1158 *body;        /* 0x114 */
} Player_823E1158;

typedef struct Self_823E1158 {
    char pad0[0x20];
    Player_823E1158 *player;    /* 0x20 */
    char startAnim[0x40];       /* 0x24 */
    char endAnim[0x4c];         /* 0x64 */
    __vector4 direction;        /* 0xb0 */
} Self_823E1158;

void fn_822C72E0(void *skeleton, const char *name);
void fn_822C8C60(Body_823E1158 *body, int a, int b, __vector4 position, __vector4 direction);
void fn_822C6880(void *aim, __vector4 v);

void fn_823E1158(Self_823E1158 *self, unsigned int phase)
{
    switch (phase) {
    case 1:
        fn_822C72E0(self->player->body->skeleton, self->startAnim);
        fn_822C8C60(self->player->body, 1, 0, self->player->position, self->direction);
        fn_822C6880(self->player->body->aim, __VMXGetReg(77));
        break;
    case 2:
        fn_822C72E0(self->player->body->skeleton, self->endAnim);
        break;
    }
}
