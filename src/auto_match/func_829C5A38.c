typedef struct State_829C5A38 {
    char pad0[0x1c];
    float f1c;
    char pad20[0x44];
    int f64;
    float f68;
    char pad6c[0x120];
    float f18c;
    char pad190[0x10];
    unsigned int mode;     /* 0x1a0 */
    char pad1a4[0x14];
    float f1b8;
    int f1bc;
} State_829C5A38;

extern State_829C5A38 lbl_83214DB0;
extern float lbl_82022FD0;
extern float lbl_820570A4;
extern float lbl_820570A0;
extern float lbl_8205709C;
extern double lbl_82057090;
extern double lbl_82012408;

extern double fn_82F64F30(double x);
extern double fn_82F68918(double x);
extern double tan(double x);
extern double fn_82F65018(double x, double y);

void fn_829C5A38(void)
{
    int n;
    int base;
    float t;

    if (lbl_83214DB0.f18c != 0.0f) {
        if (lbl_83214DB0.mode != 3) {
            if (lbl_83214DB0.f1b8 < lbl_82022FD0) {
                lbl_83214DB0.f1b8 = lbl_820570A4;
            }
            t = (float)fn_82F64F30((lbl_83214DB0.f1c + lbl_83214DB0.f1b8 - lbl_83214DB0.f18c) * lbl_820570A0);
            n = (int)fn_82F68918(t * 57.2957764f - lbl_8205709C + 0.5);
            if (n >= 27) {
                n = 27;
            } else if (n <= -27) {
                n = -27;
            }
            lbl_83214DB0.f64 = n;
        } else {
            t = (float)tan(((float)lbl_83214DB0.f1bc + lbl_8205709C) * 0.0174532924f);
            lbl_83214DB0.f68 = t * 2200.0f + lbl_83214DB0.f18c;
        }
    } else {
        base = lbl_83214DB0.f1bc;
        t = (float)fn_82F65018(lbl_83214DB0.f1c, lbl_82057090);
        n = (int)fn_82F68918(t * lbl_82012408 + 0.5) + base;
        if (n >= 27) {
            n = 27;
        } else if (n <= -27) {
            n = -27;
        }
        lbl_83214DB0.f64 += n;
    }
}
