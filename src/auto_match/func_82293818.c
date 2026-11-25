typedef struct Localizer_82293818 Localizer_82293818;
typedef struct Captions_82293818 Captions_82293818;

typedef struct Hud_82293818 {
    char pad0[0x14];
    Captions_82293818 *captions; /* 0x14 */
    char pad18[0x1c - 0x18];
    Localizer_82293818 *localizer; /* 0x1c */
} Hud_82293818;

extern const char *lbl_821939D8[];

extern unsigned short *fn_82358FD8(Localizer_82293818 *localizer, unsigned short *buffer, int size,
                                   const char *key);
extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern void fn_8229D418(Captions_82293818 *captions, int target, unsigned short *text);
extern void fn_8229D4E8(Captions_82293818 *captions, int target, unsigned short *text,
                        unsigned short *detail);
extern void fn_82293E20(Hud_82293818 *self, float delay, const unsigned short *text,
                        const unsigned short *second, const unsigned short *third, float duration);

void fn_82293818(Hud_82293818 *self, int target, unsigned int variant, int strikes, unsigned int kind,
                 float delay, float duration, int force)
{
    char key[0x80];
    unsigned short text[0x400];
    unsigned short formatted[0x400];
    unsigned short detail[0x400];

    switch (kind) {
    case 0:
        switch (variant) {
        case 0:
            if (force == 0) {
                return;
            }
            fn_82358FD8(self->localizer, text, 0x400, lbl_821939D8[3]);
            fn_82528EE0(formatted, 0x400, text, 0);
            fn_82293E20(self, delay, formatted, 0, 0, duration);
            return;
        case 1:
            fn_82358FD8(self->localizer, text, 0x400, lbl_821939D8[2]);
            fn_82293E20(self, delay, text, 0, 0, duration);
            return;
        default:
            fn_82358FD8(self->localizer, text, 0x400, lbl_821939D8[3]);
            fn_82528EE0(formatted, 0x400, text, variant);
            fn_82293E20(self, delay, formatted, 0, 0, duration);
            return;
        }
    case 1:
        fn_82358FD8(self->localizer, text, 0x400, lbl_821939D8[1]);
        fn_8229D418(self->captions, target, text);
        return;
    case 2:
        fn_82358FD8(self->localizer, text, 0x400, lbl_821939D8[0]);
        if (strikes >= 2 && strikes <= 12) {
            fn_82526C70(key, 0x80, "%s%d", "strikecaption_", strikes);
            fn_82358FD8(self->localizer, detail, 0x400, key);
            fn_8229D4E8(self->captions, target, text, detail);
        } else {
            fn_8229D418(self->captions, target, text);
        }
        return;
    }
}
