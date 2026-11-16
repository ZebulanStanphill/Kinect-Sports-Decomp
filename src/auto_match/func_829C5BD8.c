typedef struct Settings_829C5BD8 {
    char padding[0x68];
    float value;
    char padding6c[0x1b4 - 0x6c];

    union {
        unsigned int words[8];

        struct {
            int unused;
            float value;
            int unused08[5];
            unsigned int flags;
        } fields;
    } config;

    char padding1d4[0x200 - 0x1d4];
} Settings_829C5BD8;

extern Settings_829C5BD8 lbl_83214DB0;
extern const float lbl_82022FD0;
extern const float lbl_820570A4;
extern int ExGetXConfigSetting(unsigned short category, unsigned short setting, void *buffer,
                               unsigned int size, unsigned short *written);
extern void fn_829C5A38(void);

void fn_829C5BD8(void)
{
    unsigned short written;
    unsigned int index;
    for (index = 0; index < 7; ++index) {
        lbl_83214DB0.config.words[index] = 0;
    }
    written = 0;
    if (ExGetXConfigSetting(7, 9, &lbl_83214DB0.config, 0x1c, &written) != 0 ||
        (lbl_83214DB0.config.fields.flags & 0x40) != 0 || lbl_83214DB0.config.fields.value < lbl_82022FD0) {
        lbl_83214DB0.config.fields.value = lbl_820570A4;
    }
    lbl_83214DB0.value = lbl_83214DB0.config.fields.value;
    fn_829C5A38();
}
