typedef struct Obj_82CA0B70 {
    char pad0[0xcc];
    int cc;
    int d0;
    int d4;
    int d8;
    char padDC[0xecc - 0xdc];
    int ecc;
    int ed0;
    int ed4;
    char padED8[0x3a0c - 0xed8];
    int want;
    int cur;
} Obj_82CA0B70;

extern void fn_82CA0A28(Obj_82CA0B70 *self, int a, int b, int c, int w, int h);
extern void fn_82CA0AC8(Obj_82CA0B70 *self, int a, int b, int c, int w, int h);

void fn_82CA0B70(Obj_82CA0B70 *self)
{
    int w = self->d4 * self->cc;
    int h = self->d8 * self->d0;
    int a = self->ecc;
    int b = self->ed0;
    int c = self->ed4;

    if (self->cur == 0) {
        if (self->want == 1) {
            fn_82CA0A28(self, a, b, c, w, h);
            self->cur = self->want;
        }
    } else if (self->cur == 1) {
        if (self->want == 0) {
            fn_82CA0AC8(self, a, b, c, w, h);
            self->cur = self->want;
        }
    }
}
