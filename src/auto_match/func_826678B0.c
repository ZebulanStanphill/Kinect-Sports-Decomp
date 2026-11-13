typedef struct Obj_826678B0 {
    int field_0;
    int field_4;
    int field_8;
    int field_c;
} Obj_826678B0;

extern void fn_82667A70(int a, int b, int c, int *d);

void fn_826678B0(Obj_826678B0 *self, int a, int b, int c)
{
    fn_82667A70(a, b, c, &self->field_c);
}
