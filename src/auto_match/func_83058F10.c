typedef struct Target_83058F10 {
    char pad[0x3c];
    float gain;            /* 0x3c */
} Target_83058F10;

typedef struct Obj_83058F10 {
    unsigned int count;
    unsigned int unk4;
    Target_83058F10 *target;
} Obj_83058F10;

extern const double lbl_82005710;
extern const double lbl_82005778;
extern double fn_82F655D8(double x, double y);

void fn_83058F10(Obj_83058F10 *self, double db, double t)
{
    if (t < lbl_82005710)
        db = db - lbl_82005778;
    self->target->gain = (float)fn_82F655D8(10.0, db * 0.05);
}
