typedef unsigned char bool;
#define true 1


unsigned __int64
fn_82C94E60(int param_1,unsigned int *param_2,int param_3,int param_4,int param_5,int *param_6,
             unsigned int *param_7,int *param_8)

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
  
  bVar4 = true;
  uVar5 = 0;
  iVar10 = 0;
  iVar9 = 0;
  if (param_5 != 0) {
    iVar9 = *(int *)(param_1 + 0x78c);
    iVar10 = param_3 + (*(unsigned int *)(param_1 + 0x88) & 0x7ffffff) * -0x20;
  }
  iVar8 = iVar10;
  if (param_4 != 0) {
    iVar9 = *(int *)(param_1 + 0x788);
    iVar8 = param_3 + -0x20;
    if (iVar8 == 0) goto LAB_82c94f38;
    if ((iVar10 != 0) &&
       (sVar1 = *(short *)((*(int *)(param_1 + 0x784) + -0x10) * 2 + iVar10),
       uVar7 = (int)sVar1 - (int)*(short *)(*(int *)(param_1 + 0x780) * 2 + iVar8),
       uVar6 = (int)sVar1 - (int)*(short *)(*(int *)(param_1 + 0x784) * 2 + iVar10),
       uVar2 = (int)uVar7 >> 0x1f, uVar3 = (int)uVar6 >> 0x1f,
       (int)((uVar7 ^ uVar2) - uVar2) < (int)((uVar6 ^ uVar3) - uVar3))) {
      iVar9 = *(int *)(param_1 + 0x78c);
      iVar8 = iVar10;
    }
  }
  if (iVar8 != 0) {
    uVar5 = 1;
    bVar4 = (*param_2 & 0x18) != 0;
  }
LAB_82c94f38:
  *param_8 = iVar8;
  if (!bVar4) {
    iVar9 = -1;
  }
  *param_7 = (unsigned int)LZCOUNT(*(int *)(param_1 + 0x78c) - iVar9) >> 5;
  *param_6 = iVar9;
  return uVar5;
}

