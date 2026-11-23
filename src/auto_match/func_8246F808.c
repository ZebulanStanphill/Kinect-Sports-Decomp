extern void *memset(void *, int, unsigned);
extern double __fctid(double);
extern double __fcfid(double);
extern unsigned short lbl_820E975C;

typedef struct Score_8246F808 {
    char pad0[0x424];
    int unit; /* 0x424 */
} Score_8246F808;

extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern void fn_8246F718(Score_8246F808 *self, const char *key, unsigned short *buf, int size);
extern void fn_8246F778(Score_8246F808 *self, const char *key, const char *altKey,
                        const unsigned short *value, unsigned short *out);

static __forceinline float RoundDown(float value)
{
    return (float)__fcfid(__fctid(value - 0.49999999));
}

void fn_8246F808(Score_8246F808 *self, unsigned short *out, float value)
{
    unsigned short text[0x40];
    float minutes;
    float seconds;

    text[0] = lbl_820E975C;
    memset(text + 1, 0, 0x7e);
    switch (self->unit) {
    case 1:
        fn_82528EE0(text, 0x40, L"%.2f", RoundDown(value * 100.0f) * 0.01f);
        fn_8246F778(self, "metersformathead", "metersformattail", text, out);
        break;
    case 2:
        if (value < 0.0f) {
            fn_8246F718(self, "secondsformatdnf", out, 0x400);
            return;
        }
        minutes = RoundDown(value * 0.016666668f);
        seconds = value - minutes * 60.0f;
        if (minutes >= 1.0f) {
            fn_82528EE0(text, 0x40, L"%.0f:%2.1f", minutes, seconds);
        } else {
            fn_82528EE0(text, 0x40, L"%2.1f", seconds);
        }
        fn_8246F778(self, "secondsformathead", "secondsformattail", text, out);
        break;
    default:
        fn_82528EE0(text, 0x40, L"%.0f", value);
        fn_8246F778(self, "pointsformathead", "pointsformattail", text, out);
        break;
    }
}
