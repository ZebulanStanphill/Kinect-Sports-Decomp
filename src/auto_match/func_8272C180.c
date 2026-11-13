typedef struct Obj_8272C180 {
    char pad0[0x118];
    char dial[0x10];
    short angle;
} Obj_8272C180;

extern const double lbl_82005768;
extern double fn_82F6A7A0(double x, double y);
extern void fn_8272C070(void *dial);

void fn_8272C180(Obj_8272C180 *self, float angle)
{
    float a = (float)fn_82F6A7A0(angle, lbl_82005768);
    self->angle = (short)(a * 10.0f);
    fn_8272C070(self->dial);
}
