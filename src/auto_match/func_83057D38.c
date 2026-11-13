typedef struct Target_83057D38 {
    char pad[0x44];
    float gainA;           /* 0x44 */
    char pad48[0xc];
    float gainB;           /* 0x54 */
} Target_83057D38;

typedef struct Obj_83057D38 {
    unsigned int count;
    unsigned int unk4;
    Target_83057D38 *target;
} Obj_83057D38;

extern const double lbl_82005710;
extern const double lbl_82005778;
extern double fn_82F655D8(double x, double y);

void fn_83057D38(Obj_83057D38 *self, double t, double unused, double db)
{
    double v = db;
    float gain;
    Target_83057D38 *target;

    if (t < lbl_82005710)
        v = v - lbl_82005778;
    gain = (float)fn_82F655D8(10.0, v * 0.05);
    target = self->target;
    target->gainB = gain;
    target->gainA = gain;
}
