typedef struct Obj_83080B30 {
    char pad[0x4c];
    float a;
    char pad50[0xc];
    float b;
} Obj_83080B30;

void fn_83080B30(float a, float b, Obj_83080B30 *o)
{
    o->a = a;
    o->b = b;
}
