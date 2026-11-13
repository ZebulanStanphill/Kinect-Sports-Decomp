typedef struct Src_82B1C278 { unsigned pad : 4; unsigned x : 3; unsigned rest : 25; } Src_82B1C278;
typedef struct Dst_82B1C278 {
  char pad0[8];
  unsigned pad : 15; unsigned t : 3; unsigned rest : 14;
  char pad1[0x20];
  Src_82B1C278 *f2c; void *f30; void *f34;
} Dst_82B1C278;
extern void *fn_82AD17B0(void *, void *);
extern void *fn_82AD1978(Dst_82B1C278 *, void *);
extern Dst_82B1C278 *fn_82B841E8(void *, int, int, int, int, int);
extern void fn_82AC6860(void *, Dst_82B1C278 *, void *, void *);

Dst_82B1C278 *fn_82B1C278(void *param_1, void *param_2, char *param_3, void *param_4, void *param_5, void *param_6)
{
  Dst_82B1C278 *d = fn_82B841E8(param_1, *(int *)(param_3 + 0x1c), 0, 0xd, 3, 4);
  d->f2c = (Src_82B1C278 *)fn_82AD1978(d, fn_82AD17B0(param_1, param_4));
  d->f30 = fn_82AD1978(d, fn_82AD17B0(param_1, param_5));
  d->f34 = fn_82AD1978(d, fn_82AD17B0(param_1, param_6));
  d->t = d->f2c->x ? d->f2c->x : 0;
  fn_82AC6860(param_1, d, param_2, param_3);
  return d;
}
