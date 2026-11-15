typedef struct Camera_829C5D98 {
    char pad00[0x28];
    int reset;
    char pad2c[4];
    int active;
    char pad34[8];
    int busy;
    char pad40[0x10];
    int state;
    int duration;
    char pad58[0x124];
    unsigned int flags;
    char pad180[0xc];
    float elevation;
    char pad190[0x14];
    int timestamp;
} Camera_829C5D98;

extern Camera_829C5D98 lbl_83214DB0;
extern int fn_82A1F2F8(void);
extern int XamNuiCameraElevationSetAngle(int angle);

void fn_829C5D98(void)
{
    lbl_83214DB0.state = 2;
    lbl_83214DB0.reset = 0;
    lbl_83214DB0.duration = 60;
    if ((lbl_83214DB0.flags & 0x10) != 0 || (lbl_83214DB0.elevation == 0.0f && lbl_83214DB0.busy == 0)) {
        lbl_83214DB0.timestamp = fn_82A1F2F8();
        XamNuiCameraElevationSetAngle(-25);
        lbl_83214DB0.active = 1;
    }
}
