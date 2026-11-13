extern void fn_82A1EFC0(void *p, int value, unsigned int size);
typedef struct { char data[0x9c90]; int a; int b; int c; } Obj_829E01B0;

void fn_829E01B0(Obj_829E01B0 *self)
{
    self->a = 0;
    self->b = 0;
    fn_82A1EFC0(self->data, 0, sizeof(self->data));
    self->c = 0;
}
