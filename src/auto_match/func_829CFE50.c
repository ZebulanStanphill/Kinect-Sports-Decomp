typedef struct Options_829CFE50 {
    unsigned int mode; /* 0x00 */
    int offsetX;       /* 0x04 */
    int offsetY;       /* 0x08 */
} Options_829CFE50;

typedef struct Camera_829CFE50 {
    char pad0[0x58];
    int present; /* 0x58 */
    int ready;   /* 0x5c */
    char pad60[0x2178 - 0x60];
    float depthToColorX[10]; /* 0x2178 */
    float depthToColorY[10]; /* 0x21a0 */
    short *depthTable;       /* 0x21c8 */
} Camera_829CFE50;

extern Camera_829CFE50 lbl_83215000;
extern char lbl_8315C3EC[];

extern void RtlEnterCriticalSection(void *section);
extern void RtlLeaveCriticalSection(void *section);
extern float fn_829C9838(float *coefficients, short x, short y);

long fn_829CFE50(int format, Options_829CFE50 *options, int x, int y, unsigned short depth, int *outX,
                 int *outY)
{
    long hr;
    Camera_829CFE50 *camera;
    int column;
    int resultX;
    int resultY;

    if (outX == 0 || outY == 0 || format != 2) {
        return 0x80070057;
    }
    if (options != 0 && options->mode != 0 && options->mode != 1) {
        return 0x80070057;
    }
    hr = 0;
    RtlEnterCriticalSection(lbl_8315C3EC);
    camera = &lbl_83215000;
    if (camera->ready == 0) {
        if (camera->present == 0) {
            hr = 0x80070015;
        } else {
            hr = 0x8007048f;
        }
    } else {
        column = 0x27f - x * 2;
        y *= 2;
        resultX = 0x27f - (camera->depthTable[depth >> 3] >> 4) - column -
                  (int)fn_829C9838(camera->depthToColorX, (short)column, (short)y);
        resultY = (int)fn_829C9838(camera->depthToColorY, (short)column, (short)y) + y;
        if (options != 0 && options->mode == 1) {
            resultX = (resultX - 0xa0) * 2 - options->offsetX;
            resultY = (resultY - 0x78) * 2 - options->offsetY;
        }
        *outX = resultX;
        *outY = resultY;
    }
    RtlLeaveCriticalSection(lbl_8315C3EC);
    return hr;
}
