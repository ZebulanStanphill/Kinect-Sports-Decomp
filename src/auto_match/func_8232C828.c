typedef struct Range_8232C828 {
    float end;
    float start;
} Range_8232C828;

typedef struct Chances_8232C828 {
    Range_8232C828 ranges[3];
    float scale;
} Chances_8232C828;

extern unsigned int lbl_83265A28;
extern int fn_82520780(unsigned int *seed, float chance);

static __forceinline float Lerp(const Range_8232C828 *r, float t, float scale)
{
    return ((r->end - r->start) * t + r->start) * scale;
}

int fn_8232C828(float t, unsigned int which, const Chances_8232C828 *chances)
{
    switch (which) {
    case 0:
        return 0;
    case 1:
        return fn_82520780(&lbl_83265A28, Lerp(&chances->ranges[0], t, chances->scale));
    case 2:
        return fn_82520780(&lbl_83265A28, Lerp(&chances->ranges[1], t, chances->scale));
    case 3:
        return fn_82520780(&lbl_83265A28, Lerp(&chances->ranges[2], t, chances->scale));
    default:
        return 0;
    }
}
