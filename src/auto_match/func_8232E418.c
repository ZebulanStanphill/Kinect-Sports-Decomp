typedef struct Owner_8232E418 {
    char pad0[0x114];
    struct Actor_8232E418 *actor; /* 0x114 */
} Owner_8232E418;

typedef struct Actor_8232E418 {
    char pad0[0x20];
    void *anim; /* 0x20 */
} Actor_8232E418;

typedef struct Fighter_8232E418 {
    char pad0[0x8];
    Actor_8232E418 *actor; /* 0x8 */
    Owner_8232E418 *owner; /* 0xc */
    unsigned int state;    /* 0x10 */
    int pendingReset;      /* 0x14 */
    char pad18[0x8];
    int failPlayed; /* 0x20 */
    char pad24[0x8];
    int conscious;  /* 0x2c */
    int quick;      /* 0x30 */
    float downTime; /* 0x34 */
} Fighter_8232E418;

extern void fn_822C72E0(void *anim, const char *name);
extern void fn_8232E628(Fighter_8232E418 *self, int flag);

void fn_8232E418(Fighter_8232E418 *self, float dt)
{
    const char *name;
    float t;

    switch (self->state) {
    case 0:
        if (self->pendingReset != 0) {
            fn_8232E628(self, 1);
        }
        break;
    case 1:
        if (self->conscious != 0) {
            if (*(unsigned int *)&self->downTime == 0) {
                return;
            }
            t = self->downTime - dt;
            t = -t >= 0.0f ? 0.0f : t;
            self->downTime = t;
            if (t != 0.0f) {
                return;
            }
            if (self->quick != 0) {
                name = "getupquick";
            } else {
                name = "getup";
            }
            fn_822C72E0(self->actor->anim, name);
        } else {
            fn_822C72E0(self->actor->anim, "knockedout");
        }
        break;
    case 2:
        if (self->failPlayed == 0) {
            fn_822C72E0(self->owner->actor->anim, "fail");
            self->failPlayed = 1;
        }
        break;
    }
}
