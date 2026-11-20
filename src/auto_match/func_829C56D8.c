typedef struct Camera_829C56D8 {
    char pad00[0x60];
    unsigned int tiltStatus; /* 0x60 */
    char pad64[0x8];
    float tiltTime;               /* 0x6c */
    unsigned int elevationStatus; /* 0x70 */
    char pad74[0xc];
    float elevationTime; /* 0x80 */
    char pad84[0x108];
    float ticks; /* 0x18c */
    char pad190[0x10];
    unsigned int mode; /* 0x1a0 */
    char pad1a4[0x5c];
} Camera_829C56D8;

extern Camera_829C56D8 lbl_83214DB0;
extern const float lbl_82006848;

extern void XamNuiCameraElevationStopMovement(void);
extern void XamNuiCameraTiltReportStatus(unsigned int message, unsigned int *status);

void fn_829C56D8(unsigned int code)
{
    unsigned int status;

    switch (code) {
    case 0:
        status = 0;
        break;
    case 5:
        status = 8;
        break;
    case 0x15:
        status = 2;
        break;
    case 0x19:
        status = 4;
        break;
    case 0x1f:
        status = 5;
        break;
    case 0x3e3:
        status = 7;
        break;
    default:
        status = code;
        break;
    }
    if (status == 4) {
        XamNuiCameraElevationStopMovement();
    }
    switch (lbl_83214DB0.mode) {
    case 1:
        lbl_83214DB0.elevationStatus = status;
        lbl_83214DB0.elevationTime = lbl_82006848 * lbl_83214DB0.ticks;
        XamNuiCameraTiltReportStatus(0x2b00c, &lbl_83214DB0.elevationStatus);
        break;
    case 0:
        if (status != 3) {
            break;
        }
        /* fall through */
    case 2:
    case 3:
        lbl_83214DB0.tiltStatus = status;
        lbl_83214DB0.tiltTime = lbl_82006848 * lbl_83214DB0.ticks;
        XamNuiCameraTiltReportStatus(0x2b006, &lbl_83214DB0.tiltStatus);
        break;
    }
}
