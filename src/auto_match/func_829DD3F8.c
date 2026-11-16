extern void *memset(void *, int, unsigned int);
extern int fn_82A2B130(int, unsigned int, const char *, unsigned int, void *, unsigned int *);
extern int fn_82F67FE8(const char *, const char *, ...);

typedef struct Settings_829DD3F8 {
    float threshold[4]; /* 0x00 */
    int samples[3];     /* 0x10 */
} Settings_829DD3F8;

void fn_829DD3F8(Settings_829DD3F8 *settings)
{
    Settings_829DD3F8 *settingsCopy = settings;
    unsigned int size;
    char text[0x78];
    size = 0x78;
    memset(text, 0, sizeof(text));
    fn_82A2B130(2, 0x101, "NuiV1BHThre", 12, text, &size);
    if (fn_82F67FE8(text, "%f,%f,%f,%f", &settingsCopy->threshold[0], &settingsCopy->threshold[1],
                    &settingsCopy->threshold[2], &settingsCopy->threshold[3]) != 4) {
        fn_82F67FE8("0.08,3.0, 0.95,0.05", "%f,%f,%f,%f", &settingsCopy->threshold[0],
                    &settingsCopy->threshold[1], &settingsCopy->threshold[2], &settingsCopy->threshold[3]);
    }
    fn_82A2B130(2, 0x101, "NuiV1BHSample", 14, text, &size);
    if (fn_82F67FE8(text, "%d,%d,%d", &settingsCopy->samples[0], &settingsCopy->samples[1],
                    &settingsCopy->samples[2]) != 3) {
        fn_82F67FE8("0,0,0", "%d,%d,%d", &settingsCopy->samples[0], &settingsCopy->samples[1],
                    &settingsCopy->samples[2]);
    }
}
