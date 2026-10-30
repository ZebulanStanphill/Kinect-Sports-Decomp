extern int fn_828142D8();

typedef struct { char pad[0x14]; unsigned int (*f14)(int, unsigned int, unsigned int, int); } Cb_82814C50;
typedef struct { char pad[0x51]; unsigned char cnt; } Cfg_82814C50;
typedef struct {
  char pad0[0xc]; unsigned int f0c; char pad1[8]; int f18; Cfg_82814C50 *f1c; char pad2[0x10]; unsigned char *f30; unsigned int f34;
} Obj_82814C50;

void fn_82814C50(Obj_82814C50 *param_1)
{
  Cfg_82814C50 *cfg;
  Cb_82814C50 *cb;
  unsigned char *e;
  unsigned int sum;
  unsigned char i;

  cfg = param_1->f1c;
  if (cfg->cnt != 0) {
    i = 0;
    do {
      e = param_1->f30 + i * 0x21;
      fn_828142D8(param_1->f34 + *(unsigned int *)e, &cb);
      if (cb->f14 != 0) {
        sum = *(unsigned int *)(e + 0x11) + *(unsigned int *)(e + 9);
        *(unsigned int *)(e + 0xd) = cb->f14(param_1->f18, *(unsigned int *)(e + 0xd), sum, 4);
        *(unsigned int *)(e + 9) = sum;
      }
      if (*(unsigned int *)(e + 0xd) == 0) {
        param_1->f0c = param_1->f0c | 4;
      }
      i = i + 1;
    } while (i < cfg->cnt);
  }
}
