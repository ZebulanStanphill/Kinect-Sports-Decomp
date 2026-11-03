typedef struct { int pad[0x15b]; int cnt56c; char pad2[0x5ac - 0x570]; int heap; } Ctx_82BC5758;
extern int *fn_82B7BD28(int, int);
extern int fn_82BA03B8(int *, int);
extern int fn_82BBFDF0(int *);
extern int fn_82BBFE50(int *, int);
extern int fn_82BBFE78(int *, int);
extern int fn_82BC3830(int *, Ctx_82BC5758 *);
extern int fn_82BC3888(int *, Ctx_82BC5758 *);
extern unsigned int lbl_820E4BDC;

static __forceinline int *NewA_82BC5758(unsigned int *self)
{
  int u;
  int *m;
  int *o;
  u = ((Ctx_82BC5758 *)self[3])->heap;
  m = fn_82B7BD28(u, 0x14);
  o = m + 1;
  *m = u;
  if (o != 0) {
    fn_82BA03B8(o, ((Ctx_82BC5758 *)self[3])->heap);
  }
  else {
    o = 0;
  }
  return o;
}

unsigned int *fn_82BC5758(unsigned int *param_1, Ctx_82BC5758 *param_2)
{
  Ctx_82BC5758 *c;
  unsigned int *puVar4;
  int *m;
  int u;
  int v;

  param_1[3] = (unsigned int)param_2;
  param_1[1] = 0;
  puVar4 = param_1 + 5;
  *param_1 = (unsigned int)&lbl_820E4BDC;
  param_1[2] = 0;
  param_1[4] = 0;
  fn_82BBFDF0((int *)puVar4);
  param_1[0xc] = ((Ctx_82BC5758 *)param_1[3])->cnt56c;
  ((Ctx_82BC5758 *)param_1[3])->cnt56c = ((Ctx_82BC5758 *)param_1[3])->cnt56c + 1;
  param_1[0xd] = 0;
  param_1[0x12] = 0x400;
  param_1[0x13] = 0x400;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  *(unsigned char *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  param_1[0xb] = (unsigned int)NewA_82BC5758(param_1);
  param_1[0x17] = (unsigned int)NewA_82BC5758(param_1);
  param_1[0x16] = (unsigned int)NewA_82BC5758(param_1);
  param_1[0xe] = (unsigned int)NewA_82BC5758(param_1);
  param_1[0xf] = (unsigned int)NewA_82BC5758(param_1);
  u = ((Ctx_82BC5758 *)param_1[3])->heap;
  m = fn_82B7BD28(u, 0x3c4);
  *m = u;
  if (m + 1 != 0) {
    v = fn_82BC3830(m + 1, (Ctx_82BC5758 *)param_1[3]);
  }
  else {
    v = 0;
  }
  param_1[0x1c] = v;
  u = ((Ctx_82BC5758 *)param_1[3])->heap;
  m = fn_82B7BD28(u, 0x3c4);
  *m = u;
  if (m + 1 != 0) {
    v = fn_82BC3888(m + 1, (Ctx_82BC5758 *)param_1[3]);
  }
  else {
    v = 0;
  }
  param_1[0x1d] = v;
  fn_82BBFE78((int *)puVar4, param_1[0x1c]);
  fn_82BBFE50((int *)puVar4, param_1[0x1d]);
  *(unsigned int **)(param_1[0x1c] + 0x3b4) = param_1;
  *(unsigned int **)(param_1[0x1d] + 0x3b4) = param_1;
  return param_1;
}
