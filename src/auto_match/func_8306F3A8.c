typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

/* Laid out like NUI_SKELETON_DATA: joint positions at 0x20, quality (clipping) flags at 0x1b0. */
typedef struct Skeleton_8306F3A8 {
    int trackingState;            /* 0x00 */
    unsigned int trackingId;      /* 0x04 */
    unsigned int enrollmentIndex; /* 0x08 */
    unsigned int userIndex;       /* 0x0c */
    __vector4 position;           /* 0x10 */
    __vector4 joints[20];         /* 0x20 */
    int jointStates[20];          /* 0x160 */
    unsigned int qualityFlags;    /* 0x1b0 */
} Skeleton_8306F3A8;

typedef struct Gesture_8306F3A8 {
    unsigned char pad0[0x670];
    float holdTime;    /* 0x670 */
    float releaseTime; /* 0x674 */
} Gesture_8306F3A8;

extern float fn_8306E888(float value);
extern unsigned char fn_8306F250(__vector4 point, float margin);
extern const float lbl_82186E18;

float fn_8306F3A8(Gesture_8306F3A8 *self, Skeleton_8306F3A8 *skeleton, float dt)
{
    unsigned int count;

    if (fn_8306E888(skeleton->joints[0].v[2]) < lbl_82186E18) {
        return 0.0f;
    }
    if (fn_8306F250(skeleton->joints[12], 0.06f) || fn_8306F250(skeleton->joints[16], 0.06f)) {
        return 0.0f;
    }
    if (fn_8306F250(skeleton->joints[4], 0.06f) || fn_8306F250(skeleton->joints[8], 0.06f)) {
        if (self->holdTime > 1.5f) {
            self->releaseTime = 0.0f;
            return 0.0f;
        }
        self->holdTime += dt;
    } else {
        self->releaseTime = dt + self->releaseTime;
        if (self->releaseTime < 0.5f) {
            return 0.0f;
        }
        self->holdTime = 0.0f;
    }
    count = 4;
    if (skeleton->qualityFlags & 1) {
        count = 3;
    }
    if (skeleton->qualityFlags & 2) {
        count--;
    }
    if (skeleton->qualityFlags & 4) {
        count--;
    }
    return (float)count * 0.25f;
}
