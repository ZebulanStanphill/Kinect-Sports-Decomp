/* Chooses the commentary line for a bowling throw result; a few results pick one of several
   lines at random, and a strike-like result also tells the HUD how many pins fell. */
typedef struct Value_824264F0 {
    int unused0; /* 0x00 */
    int type;    /* 0x04 */

    union {
        void *pointer;
        double number;
    } u; /* 0x08 */
} Value_824264F0;

typedef struct Hud_824264F0 {
    int unused0;
    int movie; /* 0x04 */
} Hud_824264F0;

typedef struct Game_824264F0 {
    char pad0000[0x2b20];
    void *localTeam; /* 0x2b20 */
    char pad2b24[0x84];
    Hud_824264F0 *hud; /* 0x2ba8 */
} Game_824264F0;

typedef struct Self_824264F0 {
    int unused0;
    void *team;          /* 0x04 */
    Game_824264F0 *game; /* 0x08 */
} Self_824264F0;

typedef struct Throw_824264F0 {
    char pad00[0x14];
    unsigned int frame; /* 0x14 */
} Throw_824264F0;

extern void fn_82273CD8(Value_824264F0 *value, int type);
extern void fn_82273C88(Value_824264F0 *value);
extern void fn_82672C20(int movie, const char *path, Value_824264F0 *args, int count);
extern unsigned int lbl_83265A28;
extern int lbl_831E4884[3];
extern int lbl_831E4890[2];
extern int lbl_831E4898[2];
extern int lbl_831E48A0[3];
extern int lbl_831E48AC[2];
extern int lbl_831E48B4[2];
extern int lbl_831E48BC[3];
extern int lbl_831E48C8[3];

static __forceinline float Random(void)
{
    union {
        unsigned int bits;
        float f;
    } u;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    u.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return u.f - 1.0f;
}

static __forceinline void SetNumber(Value_824264F0 *value, double number)
{
    fn_82273CD8(value, 3);
    value->u.number = number;
}

void fn_824264F0(Self_824264F0 *self, Throw_824264F0 *throw, unsigned char pins, unsigned int result,
                 int *line, int *first)
{
    int value;

    *first = 0;
    *line = 0x1e;
    switch (result) {
    case 2:
    case 3:
    case 5:
        value = lbl_831E4884[(int)(Random() * 3.0f)];
        break;
    case 4:
        value = lbl_831E4890[(int)(Random() * 2.0f)];
        break;
    case 6:
    case 7:
        value = lbl_831E4898[(int)(Random() * 2.0f)];
        break;
    case 8:
    case 11:
    case 13:
        if (self->team == self->game->localTeam) {
            Hud_824264F0 *hud = self->game->hud;

            if (hud->movie != 0) {
                Value_824264F0 args[1];

                args[0].unused0 = 0;
                args[0].type = 0;
                SetNumber(&args[0], pins);
                fn_82672C20(hud->movie, "_root.setHitAnimationPinCount", args, 1);
                fn_82273C88(&args[0]);
            }
        }
        value = 0x1a;
        break;
    case 9:
        switch (throw->frame) {
        default:
            value = lbl_831E48BC[(int)(Random() * 3.0f)];
            break;
        case 12:
            value = 0x16;
            break;
        case 3:
            value = lbl_831E48B4[(int)(Random() * 2.0f)];
            break;
        case 2:
            value = lbl_831E48AC[(int)(Random() * 2.0f)];
            break;
        case 1:
            value = lbl_831E48A0[(int)(Random() * 3.0f)];
            break;
        }
        *line = value;
        *first = 1;
        return;
    case 10:
        value = lbl_831E48C8[(int)(Random() * 3.0f)];
        break;
    default:
        return;
    }
    *line = value;
}
