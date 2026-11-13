extern int fn_82CE6768();

typedef struct Ctx_82D6AF68 {
  int first;
  int second;
  unsigned char *buf;
  int *src;
} Ctx_82D6AF68;

void fn_82D6AF68(int param_1, int *param_2, int param_3, int param_4, int param_5,
                 int param_6)
{
  int iVar1;
  int first;
  int *obj;
  Ctx_82D6AF68 ctx;
  unsigned char buf[64];

  iVar1 = *param_2;
  fn_82CE6768(buf, param_2[2], iVar1 + 0x30);
  ctx.src = param_2;
  ctx.buf = buf;
  first = *(int *)(iVar1 + 0x14);
  ctx.second = 0;
  ctx.first = first;
  obj = *(int **)(param_1 + 0xc);
  (*(int (**)())(*(int *)obj + 0x14))(obj, &ctx, param_3, param_4, param_5, param_6);
}
