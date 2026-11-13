typedef struct Obj_82628C20 {
    char pad[0x14];
    int a;
    int b;
} Obj_82628C20;

extern int fn_827DEBF8(void *p, int a, int b);

int fn_82628C20(Obj_82628C20 *self, int x, int y, void *p)
{
    if (p != 0) {
        return fn_827DEBF8(p, self->a, self->b);
    }
    return 0;
}
