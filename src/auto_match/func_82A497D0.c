typedef struct Format_82A497D0 {
    unsigned short tag;      /* 0x00 */
    unsigned short channels; /* 0x02 */
    unsigned int rate;       /* 0x04 */
    unsigned int pad08[3];
    unsigned int mask; /* 0x14 */
} Format_82A497D0;

typedef struct Voice_82A497D0 {
    char pad0[0x1C0];
    int f1c0; /* 0x1C0 */
    int f1c4; /* 0x1C4 */
    char pad1[0x1D8 - 0x1C8];
    int f1d8; /* 0x1D8 */
    char pad2[0x1EC - 0x1DC];
    int engine; /* 0x1EC */
} Voice_82A497D0;

typedef struct Extensible_82A497D0 {
    unsigned int words[10];
} Extensible_82A497D0;

extern int fn_82A48BD8(void *self, void *arg);
extern void fn_82A49DF8(void *obj, unsigned int a, unsigned short b, unsigned short c, unsigned int d,
                        unsigned short e, unsigned short f, unsigned int g, unsigned short h);
extern int fn_82A447A0(Voice_82A497D0 *self, int source, float ratio, Extensible_82A497D0 *format, int a,
                       int b);
extern int fn_82A47EB8(Voice_82A497D0 *self, unsigned int rate);
extern int fn_82A495D8(Voice_82A497D0 *self, unsigned int rate, int *a, int *b, int *c);

extern const float lbl_82089AA8;
extern const float lbl_82089AAC;

int fn_82A497D0(Voice_82A497D0 *self, int source, float ratio, Format_82A497D0 *desc, int a, int b)
{
    unsigned int rate = desc->rate;
    Extensible_82A497D0 format;
    int hr;

    if ((desc->channels == 1 && (float)rate * ratio > lbl_82089AAC) ||
        (desc->channels != 1 && (float)rate * ratio > lbl_82089AA8)) {
        return 0x88960001;
    }
    hr = fn_82A48BD8(&self->engine, (void *)8);
    if (hr < 0) {
        return hr;
    }
    fn_82A49DF8(&format, 0x28, 1, desc->channels, rate, 0x10, 0x10, desc->mask, 0x80);
    hr = fn_82A447A0(self, source, ratio, &format, a, b);
    if (hr < 0) {
        return hr;
    }
    hr = fn_82A47EB8(self, desc->rate);
    if (hr < 0) {
        return hr;
    }
    return fn_82A495D8(self, rate, &self->f1c0, &self->f1c4, &self->f1d8);
}
