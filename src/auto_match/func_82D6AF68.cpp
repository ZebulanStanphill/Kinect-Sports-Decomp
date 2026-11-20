#include "havok/hkTransform.h"

// A child hkpCdBody: shape, shape key, transform, parent.
typedef struct Ctx_82D6AF68 {
  int first;
  int second;
  const hkTransform *buf;
  int *src;
} Ctx_82D6AF68;

typedef int (*Fn_82D6AF68)(int *obj, Ctx_82D6AF68 *ctx, int, int, int, int);

extern "C" void fn_82D6AF68(int self, int *param_2, int param_3, int param_4, int param_5,
                 int param_6)
{
  int iVar1;
  int first;
  int *obj;
  Ctx_82D6AF68 ctx;
  hkTransform buf;

  iVar1 = *param_2;
  buf.setMul(*(const hkTransform *)param_2[2], *(const hkTransform *)(iVar1 + 0x30));
  ctx.src = param_2;
  ctx.buf = &buf;
  first = *(int *)(iVar1 + 0x14);
  ctx.second = 0;
  ctx.first = first;
  obj = *(int **)(self + 0xc);
  (*(Fn_82D6AF68 *)(*(int *)obj + 0x14))(obj, &ctx, param_3, param_4, param_5, param_6);
}
