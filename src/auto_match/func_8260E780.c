typedef struct Owner_8260E780 {
    char pad0[0x88];
    float value; /* 0x88 */
} Owner_8260E780;

typedef struct Fade_8260E780 {
    int pad0;
    float start; /* 0x04 */
    float end;   /* 0x08 */
    char padc[0x8];
    int target;   /* 0x14 */
    float amount; /* 0x18 */
    int active;   /* 0x1c */
    int previous; /* 0x20 */
    int current;  /* 0x24 */
} Fade_8260E780;

extern const float lbl_821CA45C[2];

void fn_8260E780(Owner_8260E780 *owner, int unused1, Fade_8260E780 *fade, int unused2, int keep)
{
    if (keep == 0) {
        fade->active = 1;
    }
    if (fade->active == 0) {
        return;
    }
    if (fade->current != fade->target) {
        fade->previous = fade->current;
        fade->amount = lbl_821CA45C[1];
    } else {
        if (fade->amount > 0.0f) {
            fade->amount -= (owner->value - fade->start) / (fade->end - fade->start);
        }
        if (fade->amount < 0.0f) {
            fade->amount = 0.0f;
            fade->active = 0;
        }
    }
    fade->current = fade->target;
}
