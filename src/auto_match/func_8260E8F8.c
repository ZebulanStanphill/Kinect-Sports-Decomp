typedef struct Fade_8260E8F8 {
    char pad00[0x8];
    float current;  /* 0x08 */
    float target;   /* 0x0c */
    float rate;     /* 0x10 */
    float duration; /* 0x14 */
    int active;     /* 0x18 */
    int state;      /* 0x1c */
} Fade_8260E8F8;

typedef struct Range_8260E8F8 {
    int pad0;
    float inMin; /* 0x04 */
    float inMax; /* 0x08 */
    int padC;
    float outMin; /* 0x10 */
    float outMax; /* 0x14 */
    int reset;    /* 0x18 */
} Range_8260E8F8;

typedef struct Player_8260E8F8 {
    char pad0[0x88];
    float position; /* 0x88 */
} Player_8260E8F8;

extern Fade_8260E8F8 lbl_831D44F0;
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

void fn_8260E8F8(Player_8260E8F8 *self, int unused, Range_8260E8F8 *range, int unused2, int phase)
{
    float level;

    if (phase == 2) {
        level = 1.0f - fn_82539560(self->position, range->inMin, range->inMax, range->outMin, range->outMax);
        lbl_831D44F0.state = 0xff;
        lbl_831D44F0.active = 0;
        level = level >= 0.0f ? level : 0.0f;
        level = level - 1.0f >= 0.0f ? 1.0f : level;
        lbl_831D44F0.current = level;
    } else if ((phase == 1 || phase == 3) && range->reset != 0) {
        lbl_831D44F0.state = 0xff;
        lbl_831D44F0.active = 0;
        lbl_831D44F0.current = 0.0f;
    }
}
