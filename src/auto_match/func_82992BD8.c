typedef struct Obj_82992BD8 {
    char pad0[0x1fc];
    unsigned char x1fc[0x20];
    int x21c;
    int x220;
} Obj_82992BD8;

void *memset(void *dst, int c, unsigned int n);
extern void fn_8295BBE0(Obj_82992BD8 *self, void *arg);

void fn_82992BD8(Obj_82992BD8 *self, void *arg)
{
    unsigned char *p = self->x1fc;
    memset(p, 0, 0x20);
    self->x21c = 0;
    self->x220 = 0;
    fn_8295BBE0(self, arg);
}
