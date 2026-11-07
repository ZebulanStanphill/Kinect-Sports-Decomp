typedef struct Desc_82A4B800 {
    unsigned int kind;
    unsigned int flags;
    unsigned short *name;
    unsigned short *description;
    int format[1];
} Desc_82A4B800;

extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern void fn_8265C990(void *p, unsigned int tag);
extern void fn_82A49DF8(void *fmt, int a, int b, int c, int rate, int d, int e, int f, short g);

static __forceinline int copyw_82A4B800(unsigned short *d, unsigned int n, const unsigned short *s)
{
    int r = 0;
    if (n == 0) {
        r = 0x80070057;
    } else {
        while (n != 0 && *s != 0) {
            *d++ = *s++;
            n--;
        }
        if (n == 0) {
            d--;
            r = 0x8007007A;
        }
        *d = 0;
    }
    return r;
}

int fn_82A4B800(int param_1, int param_2, Desc_82A4B800 *desc)
{
    unsigned short *name;
    unsigned short *text;
    int hr;

    desc->kind = 2;
    desc->flags = 0xf;
    fn_82A49DF8(desc->format, 0x28, 3, 6, 48000, 0, 0, -1, (short)0x80);
    name = (unsigned short *)fn_8265C940(0xc, 0x20970000);
    if (name == 0) {
        hr = 0x8007000E;
    } else {
        text = (unsigned short *)fn_8265C940(0x2c, 0x20970000);
        if (text != 0) {
            hr = 0;
            copyw_82A4B800(name, 0xc, (const unsigned short *)L"Audio");
            copyw_82A4B800(text, 0x2c, (const unsigned short *)L"Xbox 360 audio device");
            desc->name = name;
            desc->description = text;
        } else {
            hr = 0x8007000E;
            fn_8265C990(name, 0x20970000);
        }
    }
    return hr;
}
