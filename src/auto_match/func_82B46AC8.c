typedef struct { unsigned int w[20]; } Tmp_82B46AC8;
typedef struct { char pad[0xc]; unsigned int *tab; } Self_82B46AC8;
extern unsigned int fn_82B468D0(Self_82B46AC8 *, int, unsigned int);
extern unsigned int *fn_82AC6560(Self_82B46AC8 *, int, int);
extern void fn_82933030(Tmp_82B46AC8 *);
extern unsigned int fn_82B46928(Self_82B46AC8 *, unsigned int, unsigned int);

unsigned int *fn_82B46AC8(Self_82B46AC8 *self, int idx, unsigned int arg)
{
  Tmp_82B46AC8 t;
  unsigned int v;
  unsigned int *o;
  unsigned int a;
  int off = idx * 0x28;
  a = fn_82B468D0(self, idx, (*(unsigned int *)((char *)self->tab + off) >> 3) & 0x3fff);
  o = fn_82AC6560(self, 0x50, 10);
  fn_82933030(&t);
  v = t.w[0];
  o[1] = 0xe;
  o[5] = 1;
  o[0] = v;
  o[6] = (*(unsigned int *)((char *)self->tab + off) >> 3) & 0x3fff;
  o[7] = 0x13;
  o[8] = fn_82B46928(self, a, (*(unsigned int *)((char *)self->tab + off) >> 3) & 0x3fff);
  o[9] = fn_82B46928(self, arg, (*(unsigned int *)((char *)self->tab + off) >> 3) & 0x3fff);
  return o;
}
