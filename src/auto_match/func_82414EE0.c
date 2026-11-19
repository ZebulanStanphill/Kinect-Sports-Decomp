typedef struct Target_82414EE0 {
    char pad0[0x4];
    void *active; /* 0x004 */
    char pad8[0x1c4];
    int index;   /* 0x1cc */
    float time;  /* 0x1d0 */
    int pending; /* 0x1d4 */
    float x;     /* 0x1d8 */
    float y;     /* 0x1dc */
    float scale; /* 0x1e0 */
} Target_82414EE0;

typedef struct Blend_82414EE0 {
    Target_82414EE0 *target; /* 0x000 */
    char pad4[0xb4];
    float x; /* 0x0b8 */
    float y; /* 0x0bc */
    char padc0[0x4];
    int local; /* 0x0c4 */
    char padc8[0x2c];
    float values[7]; /* 0x0f4 */
    float value;     /* 0x110 */
    float time;      /* 0x114 */
    float valueX;    /* 0x118 */
    float valueY;    /* 0x11c */
} Blend_82414EE0;

extern const float lbl_821CA45C[2];

static __forceinline void SetTarget(Target_82414EE0 *target, float time, int index, float x, float y)
{
    if (target->active == 0) {
        return;
    }
    target->index = index;
    target->y = y;
    target->time = time;
    target->x = x;
    target->pending = 1;
    target->scale = lbl_821CA45C[1];
}

void fn_82414EE0(Blend_82414EE0 *self, float time, int index)
{
    if (self->local != 0) {
        self->time = time;
        self->value = self->values[index];
        self->valueX = self->x;
        {
            float *valueY = &self->valueY;

            *valueY = self->y;
        }
        return;
    }
    SetTarget(self->target, time, index, self->x, self->y);
}
