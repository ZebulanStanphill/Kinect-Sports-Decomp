extern long XamNuiCameraElevationGetAngle(long *angle, unsigned long *status);
long fn_829C5988(long *angle, unsigned long *status)
{
    if (angle == 0) {
        return 0x80070057;
    }
    if (status == 0) {
        return 0x80070057;
    }
    return XamNuiCameraElevationGetAngle(angle, status);
}
