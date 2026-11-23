typedef struct Config_824A14F0 {
    void *data; /* 0x00 */
    unsigned char padding[0x0c];
    unsigned char names[0x10];  /* 0x10 */
    unsigned char values[0x30]; /* 0x20 */
} Config_824A14F0;

extern Config_824A14F0 *fn_82579B78(Config_824A14F0 *);
extern int fn_8257A140(Config_824A14F0 *);
extern int fn_82579EF0(Config_824A14F0 *, const char *, int);
extern float fn_8257A028(Config_824A14F0 *, const char *, float);
extern int fn_829C90F0(int, int, int);
extern int fn_829C9100(int, int, float);
extern void fn_8245CCF8(void *);
extern void fn_822DB5D0(void *);
extern void fn_8265CA20(void *);

void fn_824A14F0(void)
{
    Config_824A14F0 config;

    fn_82579B78(&config);
    if (fn_8257A140(&config) == 0) {
        fn_829C90F0(0, 0, fn_82579EF0(&config, "WhiteBalanceMode", 1));
        fn_829C9100(0, 0, fn_8257A028(&config, "ExposureTime", 30.0f));
        fn_829C9100(0, 5, fn_8257A028(&config, "AutoExposureTargetStopAdjust", 0.0f));
        fn_829C9100(0, 6, fn_8257A028(&config, "ColorGainRed", 2.0f));
        fn_829C9100(0, 7, fn_8257A028(&config, "ColorGainGreen", 2.0f));
        fn_829C9100(0, 8, fn_8257A028(&config, "ColorGainBlue", 2.0f));
    }
    fn_8245CCF8(config.values);
    fn_822DB5D0(config.names);
    if (config.data != 0) {
        fn_8265CA20(config.data);
    }
}
