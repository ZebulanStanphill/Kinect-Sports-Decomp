extern void *memset(void *, int, unsigned int);
extern int fn_82A2B130(int, unsigned int, const char *, unsigned int, void *, unsigned int *);
extern int fn_82F67FE8(const char *, const char *, ...);

typedef struct Settings_829DDDB8 {
    float threshold[6]; /* 0x00 */
    int samples[3];     /* 0x18 */
} Settings_829DDDB8;

void fn_829DDDB8(Settings_829DDDB8 *settings)
{
    Settings_829DDDB8 *settingsCopy = settings;
    unsigned int size;
    char text[0x78];
    size = 0x78;
    memset(text, 0, sizeof(text));
    fn_82A2B130(2, 0x101, "NuiV1ColorThre", 15, text, &size);
    if (fn_82F67FE8(text, "%f,%f,%f,%f,%f,%f", &settingsCopy->threshold[0], &settingsCopy->threshold[1],
                    &settingsCopy->threshold[2], &settingsCopy->threshold[3], &settingsCopy->threshold[4],
                    &settingsCopy->threshold[5]) != 6) {
        fn_82F67FE8("0.45,0.80,0.4,0.80,0.75,1.65", "%f,%f,%f,%f,%f,%f", &settingsCopy->threshold[0],
                    &settingsCopy->threshold[1], &settingsCopy->threshold[2], &settingsCopy->threshold[3],
                    &settingsCopy->threshold[4], &settingsCopy->threshold[5]);
    }
    fn_82A2B130(2, 0x101, "NuiV1ColorSample", 17, text, &size);
    if (fn_82F67FE8(text, "%d,%d,%d", &settingsCopy->samples[0], &settingsCopy->samples[1],
                    &settingsCopy->samples[2]) != 3) {
        fn_82F67FE8("0,1,1", "%d,%d,%d", &settingsCopy->samples[0], &settingsCopy->samples[1],
                    &settingsCopy->samples[2]);
    }
}
