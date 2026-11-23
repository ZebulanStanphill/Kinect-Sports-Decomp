typedef struct Ramp_82647E90 {
    unsigned short red[256];
    unsigned short green[256];
    unsigned short blue[256];
} Ramp_82647E90;

extern void fn_8264DA70(unsigned short *destination, const unsigned short *source, unsigned int mode);
extern void fn_8264DB08(Ramp_82647E90 *destination, const Ramp_82647E90 *source, unsigned int mode);
extern void fn_8264DC48(void *device, const Ramp_82647E90 *ramp);
extern void fn_8264DD40(void *device, const Ramp_82647E90 *ramp);

void fn_82647E90(void *device, int format, const Ramp_82647E90 *ramp)
{
    Ramp_82647E90 defaults;
    int rampFormat = 0x28280136;

    if (ramp == 0) {
        unsigned int value;
        unsigned int i;
        if (format == rampFormat) {
            value = 0;
            for (i = 0; i < 128; ++i) {
                unsigned short base = (unsigned short)((i * 65535u) / 127);
                unsigned short step;
                defaults.red[i * 2] = base;
                defaults.green[i * 2] = base;
                defaults.blue[i * 2] = base;
                step = (unsigned short)(((i + 1) * 65535u) / 127 - base);
                defaults.red[i * 2 + 1] = step;
                defaults.green[i * 2 + 1] = step;
                defaults.blue[i * 2 + 1] = step;
            }
            fn_8264DB08(&defaults, &defaults, 0);
            ramp = &defaults;
            goto applyExpanded;
        } else {
            value = 0;
            for (i = 0; i < 256; ++i) {
                unsigned short entry = (unsigned short)(value / 255 << 6);
                value += 1023;
                defaults.red[i] = entry;
                defaults.green[i] = entry;
                defaults.blue[i] = entry;
            }
            fn_8264DA70(defaults.red, defaults.red, 0);
        }
        ramp = &defaults;
    }

    if (format == rampFormat) {
    applyExpanded:
        fn_8264DD40(device, ramp);
    } else {
        fn_8264DC48(device, ramp);
    }
}
