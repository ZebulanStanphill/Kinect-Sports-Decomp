typedef struct Obj_8279A130 { int f0; int f4; void *f8; } Obj_8279A130;
extern void fn_82797D20(void *a, unsigned int start, unsigned int count);
extern void fn_82797C78(void *a, int b, unsigned int start, int d, int e);

void fn_8279A130(Obj_8279A130 *self, int b, unsigned int start, unsigned int end, int d)
{
    unsigned int n = end - start; if (end < start) n = 0; fn_82797D20(self->f8, start, n);
    fn_82797C78(self->f8, b, start, d, 1);
}
