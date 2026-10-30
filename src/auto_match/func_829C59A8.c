extern int lbl_83214DB0[];
extern int fn_82A1F2F8();
extern int XamNuiCameraElevationSetAngle(int);

int fn_829C59A8(int angle)
{
    if (angle <= 0x1b && angle >= -0x1b) {
        lbl_83214DB0[0x69] = fn_82A1F2F8();
        return XamNuiCameraElevationSetAngle(angle);
    }
    return 0x80070057;
}
