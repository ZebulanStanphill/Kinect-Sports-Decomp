typedef struct Obj_822D8858 {
    unsigned char pad[0xd8];
    float value;
    int f_dc;
    int alt;
} Obj_822D8858;

extern float lbl_831CD820[26];

void fn_822D8858(Obj_822D8858 *self)
{
    self->value = self->alt != 0 ? lbl_831CD820[3] : lbl_831CD820[1];
}
