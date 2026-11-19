extern double lbl_82057810;
extern double lbl_8214C330;
extern double lbl_8214C338;

typedef struct Settings_82E23C70 {
    char pad00[0x8];
    double first;  /* 0x08 */
    double second; /* 0x10 */
    double third;  /* 0x18 */
    int timeout;   /* 0x20 */
    int angle;     /* 0x24 */
    int interval;  /* 0x28 */
} Settings_82E23C70;

void fn_82E23C70(void *self, Settings_82E23C70 *settings)
{
    if (settings->first == 0.0) {
        settings->first = lbl_82057810;
    }
    if (settings->second == 0.0) {
        settings->second = lbl_8214C338;
    }
    if (settings->third == 0.0) {
        settings->third = lbl_8214C330;
    }
    if (settings->timeout == 0) {
        settings->timeout = 10000;
    }
    if (settings->angle == 0) {
        settings->angle = 90;
    }
    if (settings->interval == 0) {
        settings->interval = 500;
    }
}
