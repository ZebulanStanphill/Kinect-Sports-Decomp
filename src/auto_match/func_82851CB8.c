extern void *memset(void *, int, unsigned int);
extern void fn_82857C40(void *self, void *arg);
extern void fn_8280ACD8(void *p);

typedef struct {
    char pad0[0x84];
    int f84;
    int f88;
    int f8c;
    int f90;
    int f94;
    char pad98[0x118 - 0x98];
    float f118;
    int f11c;
    char pad120[0x130 - 0x120];
    char a130[0x40];
    char a170[0x40];
    char a1b0[0x6950 - 0x1b0];
} Obj_82851CB8;

void fn_82851CB8(Obj_82851CB8 *self, void *arg)
{
    memset(self, 0, sizeof(*self));
    fn_82857C40(self, arg);
    self->f8c = 0;
    self->f118 = 1.0f;
    self->f88 = 0xffff;
    self->f84 = 3;
    self->f90 = 8;
    self->f94 = 0;
    self->f11c = 0;
    fn_8280ACD8(self->a170);
    fn_8280ACD8(self->a130);
    fn_8280ACD8(self->a1b0);
}
