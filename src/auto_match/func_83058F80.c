typedef struct Target_83058F80 {
    char pad[0x3c];
    float gain;            /* 0x3c */
} Target_83058F80;

typedef struct Obj_83058F80 {
    unsigned int count;
    unsigned int unk4;
    Target_83058F80 *target;
} Obj_83058F80;

extern const double lbl_82005710;
extern const double lbl_82005778;
extern double fn_82F655D8(double x, double y);

void fn_83058F80(Obj_83058F80 *self, double t, double unused, double db)
{
    double v = db;

    if (t < lbl_82005710)
        v = v - lbl_82005778;
    self->target->gain = (float)fn_82F655D8(10.0, v * 0.05);
}
