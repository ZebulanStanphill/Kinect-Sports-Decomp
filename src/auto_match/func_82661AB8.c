typedef struct Obj_82661AB8 {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
} Obj_82661AB8;

extern void fn_82662D80(int a, int b, int c, int *d);

void fn_82661AB8(Obj_82661AB8 *self, int a, int b, int c)
{
    fn_82662D80(a, b, c, &self->field_c);
}
