typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826909B0();
extern int fn_82690F08();
extern int fn_8270BD28();


void fn_8270C258(unsigned int *param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  bool bVar9;
  bool bVar11;
  int iVar10;
  int iVar12;
  __int64 lVar13;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  iVar12 = param_2 + 0x20;
  uVar2 = *param_1;
  iVar3 = *(int *)(param_2 + 0x18);
  uVar4 = param_3 - iVar1 >> (uVar2 & 0x3f);
  lVar13 = (__int64)(int)uVar4;
  uVar6 = fn_8270BD28(iVar12,lVar13);
  uVar5 = uVar4 >> 2 & 0x3ffffffc;
  uVar8 = uVar6 + lVar13;
  iVar7 = (int)uVar6;
  iVar10 = iVar7 << (uVar2 & 0x3f);
  *(unsigned int *)(uVar5 + iVar12) = *(unsigned int *)(uVar5 + iVar12) & ~(3 << ((uVar4 & 0xf) << 1));
  uVar5 = (unsigned int)((uVar8 - 1 & 0xffffffff) >> 2) & 0x3ffffffc;
  *(unsigned int *)(uVar5 + iVar12) =
       *(unsigned int *)(uVar5 + iVar12) & ~(3 << ((unsigned int)((uVar8 - 1 & 0xffffffff) << 1) & 0x1e));
  if (uVar4 == 0) {
LAB_8270c310:
    bVar9 = false;
  }
  else {
    bVar9 = true;
    if ((*(unsigned int *)(((unsigned int)(lVar13 - 1U) >> 2 & 0x3ffffffc) + iVar12) >>
         ((unsigned int)((lVar13 - 1U & 0xffffffff) << 1) & 0x1e) & 3) != 0) goto LAB_8270c310;
  }
  if ((unsigned int)(iVar10 + param_3) < (unsigned int)(iVar3 + iVar1)) {
    bVar11 = true;
    if ((*(unsigned int *)(((unsigned int)uVar8 >> 2 & 0x3ffffffc) + iVar12) >>
         ((unsigned int)((uVar8 & 0xffffffff) << 1) & 0x1e) & 3) == 0) goto LAB_8270c340;
  }
  bVar11 = false;
LAB_8270c340:
  iVar10 = iVar10 + param_3;
  if ((uVar6 & 0xffffffff) < 0x21) {
    *(short *)(iVar10 + -2) = (short)uVar6;
    *(short *)(param_3 + 0xc) = (short)uVar6;
  }
  else {
    *(unsigned short *)(iVar10 + -2) = 0x21;
    *(unsigned short *)(param_3 + 0xc) = 0x21;
    *(int *)(iVar10 + -8) = iVar7;
    *(int *)(param_3 + 0x10) = iVar7;
  }
  *(int *)(param_3 + 8) = param_2;
  if (bVar11 || bVar9) {
    fn_82690F08(param_1 + 2,param_3,uVar2);
  }
  else {
    fn_826909B0(param_1 + 2,param_3);
  }
  return;
}

