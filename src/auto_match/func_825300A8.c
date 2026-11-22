typedef struct Fade_825300A8 {
    unsigned char active; /* 0x00 */
    float duration;       /* 0x04 */
    float rateY;          /* 0x08 */
    float rateX;          /* 0x0c */
    float y;              /* 0x10 */
    float x;              /* 0x14 */
    float targetY;        /* 0x18 */
    float targetX;        /* 0x1c */
    int mode;             /* 0x20 */
    float unknown24;      /* 0x24 */
    float unknown28;      /* 0x28 */
} Fade_825300A8;

typedef struct Manager_825300A8 {
    char pad00[0x40];
    Fade_825300A8 fades[2]; /* 0x40 */
} Manager_825300A8;

extern Manager_825300A8 *lbl_8327F844;
/* the shortest duration (a double 0.00001f): read from the constant, so __fsel stays a plain fsel */
extern const double lbl_821954B0[];
extern double __fsel(double a, double b, double c);

void fn_825300A8(float duration, int index)
{
    Manager_825300A8 *manager;
    float scale;
    float clamped;

    if (index < 0) {
        return;
    }
    if (index >= 2) {
        return;
    }
    manager = lbl_8327F844;
    if (manager->fades[index].active && manager->fades[index].rateX < 0.0f) {
        return;
    }
    manager->fades[index].targetX = 0.0f;
    clamped = (float)__fsel(duration - 0.00001f, duration, lbl_821954B0[0x22]);
    manager->fades[index].active = 1;
    manager->fades[index].targetY = 0.0f;
    manager->fades[index].duration = clamped;
    scale = 1.0f / manager->fades[index].duration;
    manager->fades[index].rateX = -(manager->fades[index].x * scale);
    manager->fades[index].rateY = -(manager->fades[index].y * scale);
}
