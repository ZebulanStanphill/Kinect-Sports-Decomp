extern void *memset(void *, int, unsigned int);
extern int fn_82A2B130(int, unsigned int, const char *, unsigned int, void *, unsigned int *);
extern int fn_82F67FE8(const char *, const char *, ...);

typedef struct Settings_829DC470 {
    float lowResolution[5];  /* 0x00 */
    float highResolution[5]; /* 0x14 */
    float scale;             /* 0x28 */
    int samples[4];          /* 0x2c */
    float estimatedSize[4];  /* 0x3c */
} Settings_829DC470;

void fn_829DC470(Settings_829DC470 *settings)
{
    Settings_829DC470 *settingsCopy = settings;
    unsigned int size;
    char text[0x78];
    size = 0x78;
    memset(text, 0, sizeof(text));
    fn_82A2B130(2, 0x101, "NuiV1FaceHiRes", 15, text, &size);
    if (fn_82F67FE8(text, "%f,%f,%f,%f,%f", &settingsCopy->highResolution[0],
                    &settingsCopy->highResolution[1], &settingsCopy->highResolution[2],
                    &settingsCopy->highResolution[3], &settingsCopy->highResolution[4]) != 5) {
        fn_82F67FE8("0.038,0.0397,0.042,0.038,0.038", "%f,%f,%f,%f,%f", &settingsCopy->highResolution[0],
                    &settingsCopy->highResolution[1], &settingsCopy->highResolution[2],
                    &settingsCopy->highResolution[3], &settingsCopy->highResolution[4]);
    }
    fn_82A2B130(2, 0x101, "NuiV1FaceLoRes", 15, text, &size);
    if (fn_82F67FE8(text, "%f,%f,%f,%f,%f", &settingsCopy->lowResolution[0], &settingsCopy->lowResolution[1],
                    &settingsCopy->lowResolution[2], &settingsCopy->lowResolution[3],
                    &settingsCopy->lowResolution[4]) != 5) {
        fn_82F67FE8("0.0343,0.0397,0.042,0.037,0.037", "%f,%f,%f,%f,%f", &settingsCopy->lowResolution[0],
                    &settingsCopy->lowResolution[1], &settingsCopy->lowResolution[2],
                    &settingsCopy->lowResolution[3], &settingsCopy->lowResolution[4]);
    }
    fn_82A2B130(2, 0x101, "NuiV1FaceSample", 16, text, &size);
    if (fn_82F67FE8(text, "%d,%d,%d,%d,%f", &settingsCopy->samples[0], &settingsCopy->samples[1],
                    &settingsCopy->samples[2], &settingsCopy->samples[3], &settingsCopy->scale) != 5) {
        fn_82F67FE8("70,1,8,20,-1.5", "%d,%d,%d,%d,%f", &settingsCopy->samples[0], &settingsCopy->samples[1],
                    &settingsCopy->samples[2], &settingsCopy->samples[3], &settingsCopy->scale);
    }
    fn_82A2B130(2, 0x101, "NuiV1FaceEstSize", 17, text, &size);
    if (fn_82F67FE8(text, "%f,%f,%f,%f", &settingsCopy->estimatedSize[0], &settingsCopy->estimatedSize[1],
                    &settingsCopy->estimatedSize[2], &settingsCopy->estimatedSize[3]) != 4) {
        fn_82F67FE8("0.1,0.16,0.20,0.20", "%f,%f,%f,%f", &settingsCopy->estimatedSize[0],
                    &settingsCopy->estimatedSize[1], &settingsCopy->estimatedSize[2],
                    &settingsCopy->estimatedSize[3]);
    }
}
