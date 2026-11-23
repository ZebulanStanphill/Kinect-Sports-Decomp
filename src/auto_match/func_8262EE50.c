extern double __fctid(double);
extern double __fcfid(double);

typedef struct Vector3_8262EE50 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
} Vector3_8262EE50;

typedef struct Wobble_8262EE50 {
    Vector3_8262EE50 speed;     /* 0x00 */
    int pad0C;                  /* 0x0c */
    Vector3_8262EE50 phase;     /* 0x10 */
    int pad1C;                  /* 0x1c */
    Vector3_8262EE50 center;    /* 0x20 */
    int pad2C;                  /* 0x2c */
    Vector3_8262EE50 amplitude; /* 0x30 */
    int pad3C;                  /* 0x3c */
    Vector3_8262EE50 value;     /* 0x40 */
    int pad4C;                  /* 0x4c */
    int wrapCountdown;          /* 0x50 */
} Wobble_8262EE50;

extern float fn_82809950(float angle);

/* Maps an angle to [0, 2 pi). */
static __forceinline float WrapPositive(float angle)
{
    double turns = (float)(angle * 0.15915494f);

    return (float)((turns - (float)__fcfid(__fctid(turns - 0.49999999))) * 6.2831854820251465);
}

/* Updates the wobble's value from its phases, then advances the phases, wrapping them every tenth
   update. */
void fn_8262EE50(Wobble_8262EE50 *self, float time)
{
    self->value.x = fn_82809950(self->phase.x) * self->amplitude.x + self->center.x;
    self->value.y = fn_82809950(self->phase.y) * self->amplitude.y + self->center.y;
    self->value.z = fn_82809950(self->phase.z) * self->amplitude.z + self->center.z;
    if (self->wrapCountdown-- > 0) {
        self->phase.x = self->speed.x * time + self->phase.x;
        self->phase.y = self->speed.y * time + self->phase.y;
        self->phase.z = self->speed.z * time + self->phase.z;
    } else {
        self->wrapCountdown = 10;
        self->phase.x = WrapPositive(self->speed.x * time + self->phase.x);
        self->phase.y = WrapPositive(self->speed.y * time + self->phase.y);
        self->phase.z = WrapPositive(self->speed.z * time + self->phase.z);
    }
}
