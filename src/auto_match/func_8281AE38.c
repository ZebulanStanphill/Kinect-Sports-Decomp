typedef struct { char pad[0x28]; unsigned f28; char pad2c[0xa]; unsigned char f36; char pad37[9]; } Ent_8281AE38;
typedef struct { char pad[0x7c]; char *base; char pad80[8]; int s88; } Self_8281AE38;
extern int fn_828192C8();
extern int fn_8281A3C8(void *, int, int);
extern int fn_828233A8(void *, int *, void *, int);

int fn_8281AE38(Self_8281AE38 *self, int param_2, unsigned param_3)
{
  char *base = self->base;
  int iter;
  int idx;
  Ent_8281AE38 *e;

  fn_828233A8(&self->s88, &iter, (void *)fn_828192C8, param_2);
  idx = (short)((iter - (int)base) >> 6);
  e = (Ent_8281AE38 *)(base + idx * 0x40);
  if ((e->f36 & 1) != 0 && fn_8281A3C8(self, idx, param_3 - e->f28) != 0) {
    e->f28 = param_3;
    return param_2;
  }
  return 0;
}
