extern void *fn_82BEA420(int, int);
extern int fn_82BF1430(void *, int);

typedef struct {
  char pad0[0x18]; int f18;
  char pad1[0x28 - 0x1c]; unsigned int f28; void *f2c;
  char pad2[0x3c - 0x30]; int f3c;
  char pad3[0x44 - 0x40]; int f44;
} S_82BEF330;

int fn_82BEF330(S_82BEF330 *self, int flag)
{
  void *p = self->f2c;
  if (p == 0 || flag != 0 || self->f28 == 0) {
    p = fn_82BEA420(self->f18, 0);
    if (p != 0) goto ok;
    return 0;
  } else {
ok:
    self->f3c = fn_82BF1430(p, self->f44);
    return 1;
  }
}
