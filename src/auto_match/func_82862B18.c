typedef struct Shape_82862B18 {
    float origin[3];    /* 0x00 */
    float direction[3]; /* 0x0c */
    float radius;       /* 0x18 */
    float angle;        /* 0x1c */
} Shape_82862B18;

extern float fn_82809CB0(float);
extern void fn_82810360(void *, const void *);
extern void fn_82810B78(void *, const void *);
extern const float lbl_82015468;

static __forceinline unsigned char isInterior(float angle)
{
    return angle > 0.0f && angle < lbl_82015468;
}

Shape_82862B18 *fn_82862B18(Shape_82862B18 *self, void *origin, void *direction, float radius, float angle)
{
    self->angle = angle;
    if (fn_82809CB0(angle - 3.1415927410125732422f) <= 0.01745329238474369f) {
        self->angle -= 0.01745329238474369f;
    }
    self->radius = radius;
    fn_82810360(origin, self);
    if (isInterior(self->angle)) {
        fn_82810B78(direction, self->direction);
    }
    return self;
}
