typedef struct {
    int f00, f04;
    void *f08;
    int f0c;
    char f10[0x10];
    unsigned int f20;
    unsigned int f24;
} Obj_8304D650;

extern void fn_8304EAF8(void *a, void *b, void *c, unsigned int d, unsigned int e, unsigned int f, unsigned int g, int h);

void fn_8304D650(Obj_8304D650 *self, void *a, unsigned int b, unsigned int c)
{
    fn_8304EAF8(self->f10, self->f08, a, b, self->f20, self->f24, c, 0);
}
