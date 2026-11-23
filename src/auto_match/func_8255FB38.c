typedef struct Animation_8255FB38 {
    char pad0[0x24];
    char player[1]; /* 0x24 */
} Animation_8255FB38;

extern float fn_827F6318(Animation_8255FB38 *animation);
extern float fn_827F6428(Animation_8255FB38 *animation);
extern float fn_827F6310(Animation_8255FB38 *animation);
extern int fn_827F9DF8(void *player);

/* Returns 1 when the time lies inside the animation's current range, taking the playing direction
   into account. */
/* Whether the animation runs backwards. */
static __forceinline int IsReversed(Animation_8255FB38 *self)
{
    return fn_827F6310(self) < 0.0f || fn_827F9DF8(self->player) == 1;
}

int fn_8255FB38(Animation_8255FB38 *self, float time)
{
    float start = fn_827F6318(self);
    float end = fn_827F6428(self);
    float swap;
    float t;

    if (start != end) {
        if (IsReversed(self)) {
            swap = start;
            start = end;
            end = swap;
            t = time - 2.0e-07f >= 0.0f ? time : 2.0e-07f;
        } else {
            t = time - 0.9999998f >= 0.0f ? 0.9999998f : time;
        }
        if (start > end) {
            return t >= end && t < start;
        }
        return t >= end || t < start;
    }
    return 0;
}
