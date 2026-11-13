typedef unsigned char bool;
#define true 1


unsigned __int64
fn_82C947D0(int param_1,unsigned int *param_2,int param_3,unsigned __int64 param_4,int param_5,int param_6,
             int *param_7,unsigned int *param_8)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *in_stack_00000054;
  
  bVar4 = true;
  uVar5 = 0;
  iVar10 = 0;
  iVar8 = 0;
  if (param_6 != 0) {
    iVar10 = *(int *)(param_1 + 0x78c);
    iVar8 = param_3 + (*(unsigned int *)(param_1 + 0x88) & 0x3ffffff) * -0x40;
  }
  iVar9 = iVar8;
  if (param_5 != 0) {
    iVar10 = *(int *)(param_1 + 0x788);
    iVar9 = param_3 + -0x20;
    if (iVar9 == 0) goto LAB_82c948a8;
    if ((iVar8 != 0) &&
       (sVar1 = *(short *)((*(int *)(param_1 + 0x784) + -0x10) * 2 + iVar8),
       uVar7 = (int)sVar1 - (int)*(short *)(*(int *)(param_1 + 0x780) * 2 + iVar9),
       uVar6 = (int)sVar1 - (int)*(short *)(*(int *)(param_1 + 0x784) * 2 + iVar8),
       uVar2 = (int)uVar7 >> 0x1f, uVar3 = (int)uVar6 >> 0x1f,
       (int)((uVar7 ^ uVar2) - uVar2) < (int)((uVar6 ^ uVar3) - uVar3))) {
      iVar10 = *(int *)(param_1 + 0x78c);
      iVar9 = iVar8;
    }
  }
  if (iVar9 != 0) {
    uVar5 = 1;
    bVar4 = (*param_2 & 0x18) != 0;
  }
LAB_82c948a8:
  *in_stack_00000054 = iVar9;
  if (!bVar4) {
    iVar10 = -1;
  }
  *param_7 = iVar10;
  *param_8 = (unsigned int)LZCOUNT(*(int *)(param_1 + 0x78c) - iVar10) >> 5;
  return uVar5;
}

