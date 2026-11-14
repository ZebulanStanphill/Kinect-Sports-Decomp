typedef struct Obj_82706B48 {
    char pad0[0x940];
    unsigned char alpha;
} Obj_82706B48;

void fn_82706B48(Obj_82706B48 *self, float value)
{
    unsigned char a = (unsigned char)(value * 255.0f);
    if (a >= 0xff) {
        a = 0xff;
    }
    self->alpha = a;
}
