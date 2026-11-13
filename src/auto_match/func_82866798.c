typedef struct Obj_82866798 {
    char pad[0x4d0];
    unsigned char enabled;
    char pad2[3];
    int a;
    int b;
} Obj_82866798;

extern int fn_8286A350(int a, int b, int c);

int fn_82866798(Obj_82866798 *self, int c)
{
    if (self->enabled == 0) {
        return 0;
    }
    return fn_8286A350(self->a, self->b, c);
}
