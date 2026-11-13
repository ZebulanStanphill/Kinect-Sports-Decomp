typedef struct Target_83057CC8 {
    char pad[0x44];
    float gainA;           /* 0x44 */
    char pad48[0xc];
    float gainB;           /* 0x54 */
} Target_83057CC8;

typedef struct Obj_83057CC8 {
    unsigned int count;
    unsigned int unk4;
    Target_83057CC8 *target;
} Obj_83057CC8;

extern const double lbl_82005710;
extern const double lbl_82005778;
extern double fn_82F655D8(double x, double y);

void fn_83057CC8(Obj_83057CC8 *self, double db, double t)
{
    float gain;
    Target_83057CC8 *target;

    if (t < lbl_82005710)
        db = db - lbl_82005778;
    gain = (float)fn_82F655D8(10.0, db * 0.05);
    target = self->target;
    target->gainB = gain;
    target->gainA = gain;
}
