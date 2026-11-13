typedef struct Obj_82BFFB08 {
    char pad[0x108];
    int a[3];
    int b[3];
} Obj_82BFFB08;

int fn_82BFFB08(Obj_82BFFB08 *self, int kind, int a, int b)
{
    if (kind != 1) {
        if (kind != 3 && kind == 4) { self->a[1] = a; self->b[1] = b; } else { self->a[0] = a; self->b[0] = b; }
    } else { self->a[2] = a; self->b[2] = b; }
    return 0;
}
