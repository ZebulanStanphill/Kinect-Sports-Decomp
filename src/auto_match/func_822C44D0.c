/* Fades the two lights towards their targets: 0.3 for the highlighted ones while the player's
   motion is one of the highlighted kinds, 1.0 otherwise; the fade runs only when the cooldown
   has run out and moves instantly when fading is off. */
typedef struct Name_822C44D0 {
    char pad0[0x4];
    char text[1]; /* 0x4 */
} Name_822C44D0;

typedef struct Motion_822C44D0 {
    char pad00[0x20];
    Name_822C44D0 *name; /* 0x20 */
} Motion_822C44D0;

typedef struct Move_822C44D0 {
    char pad00[0x18];
    unsigned int type; /* 0x18 */
} Move_822C44D0;

typedef struct Lights_822C44D0 {
    char pad000[0x24];
    void *player; /* 0x024 */
    char pad028[0xe8];
    Move_822C44D0 *move;     /* 0x110 */
    Motion_822C44D0 *motion; /* 0x114 */
    char pad118[0x14];
    int instant;     /* 0x12C */
    float levels[2]; /* 0x130 */
    char pad138[0xc8];
    int enabled;    /* 0x200 */
    float cooldown; /* 0x204 */
} Lights_822C44D0;

extern int fn_824CD030(void *player);
extern unsigned char fn_822BD338(void *s, const char *text);
extern int fn_82560690(int type);
extern int fn_824CCD80(void *player);
extern void fn_822B70F0(Lights_822C44D0 *self, float level, int index);

void fn_822C44D0(Lights_822C44D0 *self, float delta)
{
    void *player = self->player;
    int highlighted = -1;
    unsigned char highlight = 0;
    float target = 1.0f;
    float level;
    float left;
    unsigned char fade;
    int i;

    if (self->enabled != 0 && player != 0 && fn_824CD030(player) != 0 &&
        (fn_822BD338(self->motion->name->text, "msmd") ||
         fn_822BD338(self->motion->name->text, "msmd_norotation") || self->move->type == 0x12 ||
         self->move->type == 0x14 || self->move->type == 0x10)) {
        target = 0.3f;
        highlight = 1;
        if (fn_82560690(2) > 1) {
            highlighted = fn_824CCD80(player);
        }
    }
    left = self->cooldown - delta;
    self->cooldown = -left >= 0.0f ? 0.0f : left;
    if (self->cooldown > 0.0f) {
        return;
    }
    fade = self->instant == 0;
    for (i = 0; i < 2; i++) {
        float current = self->levels[i];

        if (highlight && (i == highlighted || highlighted == -1)) {
            if (fade) {
                level = (target - current) * delta * 4.0f + current;
            } else {
                level = target;
            }
        } else if (fade) {
            level = (1.0f - current) * delta * 2.0f + current;
            if (level >= 0.99f) {
                level = 1.0f;
            }
        } else {
            level = 1.0f;
        }
        fn_822B70F0(self, level, i);
    }
}
