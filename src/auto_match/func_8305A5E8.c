typedef struct Target_8305A5E8 {
    char pad[0x54];
    float gain0;           /* 0x54 */
    char pad58[0xc];
    float gain1;           /* 0x64 */
    char pad68[0xc];
    float gain2;           /* 0x74 */
    char pad78[0xc];
    float gain3;           /* 0x84 */
    char pad88[0xc];
    float gain4;           /* 0x94 */
    char pad98[0xc];
    float gain5;           /* 0xa4 */
} Target_8305A5E8;

typedef struct Obj_8305A5E8 {
    unsigned int count;
    unsigned int unk4;
    Target_8305A5E8 *target;
} Obj_8305A5E8;

extern const double lbl_82005710;
extern const double lbl_82005778;
extern double fn_82F655D8(double x, double y);

void fn_8305A5E8(Obj_8305A5E8 *self, double db, double t)
{
    float gain;
    Target_8305A5E8 *target;

    if (t < lbl_82005710)
        db = db - lbl_82005778;
    gain = (float)fn_82F655D8(10.0, db * 0.05);
    target = self->target;
    target->gain5 = gain;
    target->gain4 = gain;
    target->gain3 = gain;
    target->gain2 = gain;
    target->gain1 = gain;
    target->gain0 = gain;
}
