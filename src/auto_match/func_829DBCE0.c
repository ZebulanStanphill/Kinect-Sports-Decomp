extern void *memset(void *, int, unsigned int);
extern int fn_82A2B130(int, unsigned int, const char *, unsigned int, void *, unsigned int *);
extern int fn_82F67FE8(const char *, const char *, ...);

typedef struct Settings_829DBCE0 {
    float distance[4]; /* 0x00 */
    float pose[4];     /* 0x10 */
    int clip[2];       /* 0x20 */
} Settings_829DBCE0;

void fn_829DBCE0(Settings_829DBCE0 *settings)
{
    Settings_829DBCE0 *settingsCopy = settings;
    unsigned int size;
    char text[0x78];
    size = 0x78;
    memset(text, 0, sizeof(text));
    fn_82A2B130(2, 0x101, "NuiV1QualDist", 14, text, &size);
    if (fn_82F67FE8(text, "%f,%f,%f,%f", &settingsCopy->distance[0], &settingsCopy->distance[2],
                    &settingsCopy->distance[3], &settingsCopy->distance[1]) != 4) {
        fn_82F67FE8("0.5,1.0,3.5,5.0", "%f,%f,%f,%f", &settingsCopy->distance[0], &settingsCopy->distance[2],
                    &settingsCopy->distance[3], &settingsCopy->distance[1]);
    }
    fn_82A2B130(2, 0x101, "NuiV1QualPose", 14, text, &size);
    if (fn_82F67FE8(text, "%f,%f,%f,%f", &settingsCopy->pose[0], &settingsCopy->pose[1],
                    &settingsCopy->pose[2], &settingsCopy->pose[3]) != 4) {
        fn_82F67FE8("0.7071,0.7071,0.9,0.5", "%f,%f,%f,%f", &settingsCopy->pose[0], &settingsCopy->pose[1],
                    &settingsCopy->pose[2], &settingsCopy->pose[3]);
    }
    fn_82A2B130(2, 0x101, "NuiV1QualClip", 14, text, &size);
    if (fn_82F67FE8(text, "%d,%d", &settingsCopy->clip[0], &settingsCopy->clip[1]) != 2) {
        fn_82F67FE8("40,20", "%d,%d", &settingsCopy->clip[0], &settingsCopy->clip[1]);
    }
}
