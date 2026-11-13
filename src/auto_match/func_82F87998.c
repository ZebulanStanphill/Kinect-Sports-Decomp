typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F68CC0();
extern unsigned int iStack_40;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_82F87998(char *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  short sVar6;
  struct { int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;

  param_3[2] = 0;
  sVar6 = 0x404e;
  param_3[1] = 0;
  *param_3 = 0;
  if ((param_2 & 0xffffffff) != 0) {
    do {
      fn_82F68CC0(&stack_pair_40.first,param_3,0xc);
      uVar2 = param_3[2];
      uVar4 = param_3[1];
      bVar3 = false;
      uVar1 = *param_3 << 1 | uVar4 >> 0x1f;
      param_3[1] = uVar4 << 1 | uVar2 >> 0x1f;
      *param_3 = uVar1;
      uVar5 = uVar2 * 4;
      uVar1 = uVar1 << 1 | (unsigned int)(((unsigned __int64)uVar4 & 0x7fffffff) >> 0x1e);
      uVar4 = (uVar4 << 1 & 0x7fffffff | uVar2 >> 0x1f) << 1 | uVar2 >> 0x1e & 1;
      param_3[2] = uVar2 << 1;
      uVar2 = uVar5 + uStack_38;
      param_3[2] = uVar5;
      param_3[1] = uVar4;
      *param_3 = uVar1;
      if ((uVar2 < uVar5) || (uVar2 < uStack_38)) {
        bVar3 = true;
      }
      param_3[2] = uVar2;
      if (bVar3) {
        uVar5 = uVar4 + 1;
        bVar3 = false;
        if ((uVar5 < uVar4) || (uVar5 == 0)) {
          bVar3 = true;
        }
        param_3[1] = uVar5;
        if (bVar3) {
          *param_3 = uVar1 + 1;
        }
      }
      bVar3 = false;
      uVar4 = param_3[1] + stack_pair_40.second;
      if ((uVar4 < param_3[1]) || (uVar4 < stack_pair_40.second)) {
        bVar3 = true;
      }
      param_3[1] = uVar4;
      if (bVar3) {
        *param_3 = *param_3 + 1;
      }
      uVar5 = uVar2 * 2;
      param_3[2] = uVar5;
      uVar1 = param_3[1] << 1 | uVar2 >> 0x1f;
      uVar2 = (*param_3 + stack_pair_40.first) * 2 | uVar4 >> 0x1f;
      param_3[1] = uVar1;
      bVar3 = false;
      *param_3 = uVar2;
      uVar4 = uVar5 + (int)*param_1;
      uStack_38 = (unsigned int)*param_1;
      if ((uVar4 < uVar5) || (uVar4 < uStack_38)) {
        bVar3 = true;
      }
      param_3[2] = uVar4;
      if (bVar3) {
        uVar4 = uVar1 + 1;
        bVar3 = false;
        if ((uVar4 < uVar1) || (uVar4 == 0)) {
          bVar3 = true;
        }
        param_3[1] = uVar4;
        if (bVar3) {
          *param_3 = uVar2 + 1;
        }
      }
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    if (*param_3 != 0) goto LAB_82f87c14;
  }
  do {
    uVar2 = param_3[2];
    param_3[2] = uVar2 << 0x10;
    uVar4 = param_3[1] >> 0x10;
    *param_3 = uVar4;
    sVar6 = sVar6 + -0x10;
    param_3[1] = param_3[1] << 0x10 | uVar2 >> 0x10;
  } while (uVar4 == 0);
LAB_82f87c14:
  while ((*param_3 & 0x8000) == 0) {
    uVar2 = param_3[2];
    uVar4 = param_3[1];
    param_3[2] = uVar2 << 1;
    sVar6 = sVar6 + -1;
    param_3[1] = uVar4 << 1 | uVar2 >> 0x1f;
    *param_3 = *param_3 << 1 | uVar4 >> 0x1f;
  }
  *(short *)param_3 = sVar6;
  return;
}
