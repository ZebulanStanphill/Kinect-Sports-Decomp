struct Target_8232C768;

typedef struct TargetVt_8232C768 {
    void *slots[7];
    void (*update)(struct Target_8232C768 *self); /* 0x1c */
} TargetVt_8232C768;

typedef struct Target_8232C768 {
    TargetVt_8232C768 *vt;
} Target_8232C768;

typedef struct Camera_8232C768 {
    char pad00[0x64];
    Target_8232C768 *target; /* 0x64 */
    char pad68[0x10];
    float value; /* 0x78 */
    char pad7C[0x14];
    float minimum; /* 0x90 */
    float maximum; /* 0x94 */
    float margin;  /* 0x98 */
} Camera_8232C768;

static __forceinline int ClampsToMinimum(unsigned int mode)
{
    return mode < 3 || mode == 6;
}

void fn_8232C768(Camera_8232C768 *camera, unsigned int mode, int unused, int clamp)
{
    float limit;

    if (clamp != 0) {
        if (ClampsToMinimum(mode)) {
            limit = camera->value - camera->margin;
            camera->value = camera->minimum - limit >= 0.0f ? camera->minimum : limit;
        } else {
            limit = camera->margin + camera->value;
            camera->value = camera->maximum - limit >= 0.0f ? limit : camera->maximum;
        }
    }
    camera->target->vt->update(camera->target);
}
