extern const char lbl_821C5500[];
extern void *memset(void *, int, unsigned int);
extern int fn_82A2B130(int, unsigned int, const char *, unsigned int, void *, unsigned int *);
extern int fn_82F67FE8(const char *, const char *, ...);

typedef struct Settings_829D3D08 {
    float scale;     /* 0x00 */
    int count;       /* 0x04 */
    float ranges[3]; /* 0x08 */
    int time;        /* 0x14 */
    int version;     /* 0x18 */
    float limits[2]; /* 0x1c */
} Settings_829D3D08;

void fn_829D3D08(Settings_829D3D08 *settings)
{
    Settings_829D3D08 *settingsCopy = settings;
    unsigned int size;
    char text[0x78];
    size = 0x78;
    memset(text, 0, sizeof(text));
    fn_82A2B130(2, 0x101, "NuiV1Ctrl", 10, text, &size);
    if (fn_82F67FE8(text, "%f,%d,%f,%f,%f,%d,%f,%f", &settingsCopy->scale, &settingsCopy->count,
                    &settingsCopy->ranges[0], &settingsCopy->ranges[1], &settingsCopy->ranges[2],
                    &settingsCopy->time, &settingsCopy->limits[0], &settingsCopy->limits[1]) != 8) {
        fn_82F67FE8("1.5,3,53.0,0.19,0.43,50,0.5,0.5", "%f,%d,%f,%f,%f,%d,%f,%f", &settingsCopy->scale,
                    &settingsCopy->count, &settingsCopy->ranges[0], &settingsCopy->ranges[1],
                    &settingsCopy->ranges[2], &settingsCopy->time, &settingsCopy->limits[0],
                    &settingsCopy->limits[1]);
    }
    settingsCopy->time *= 100;
    fn_82A2B130(2, 0x101, "NuiIdCfgVer", 12, text, &size);
    if (fn_82F67FE8(text, "%d", &settingsCopy->version) != 1) {
        fn_82F67FE8(lbl_821C5500, "%d", &settingsCopy->version);
    }
}
