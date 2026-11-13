typedef struct Obj_8304D6C8 {
    char pad[8];
    int handle;
    int pad2;
    char sub[1];
} Obj_8304D6C8;

extern int fn_8304EEA0(void *sub, int handle, float scale, int a, int b, int c);

int fn_8304D6C8(Obj_8304D6C8 *self, int a, int b, int c)
{
    return fn_8304EEA0(self->sub, self->handle, 1.0f, a, b, c);
}
