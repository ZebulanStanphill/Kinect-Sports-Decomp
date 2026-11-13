typedef struct Obj_83078558 {
    char pad[0x54];
    float value;
    int mode;
} Obj_83078558;

extern const float lbl_82079F6C;
extern const float lbl_8217EB78;

unsigned char fn_83078558(Obj_83078558 *self)
{
    float limit = self->mode == 2 ? lbl_82079F6C : lbl_8217EB78;
    return self->value > limit;
}
