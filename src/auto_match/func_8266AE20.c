typedef struct Obj_8266AE20 {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
} Obj_8266AE20;

extern void fn_8266AED0(int a, int b, int c, int *d);

void fn_8266AE20(Obj_8266AE20 *self, int a, int b, int c)
{
    fn_8266AED0(a, b, c, &self->field_c);
}
