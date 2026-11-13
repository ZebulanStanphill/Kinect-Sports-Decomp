typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826909B0();
extern int fn_82690F08();


void fn_8270AC48(unsigned int *param_1,int param_2,int param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  bool bVar5;
  unsigned __int64 uVar6;
  int iVar7;
  bool bVar9;
  int iVar8;
  __int64 lVar10;
  
  iVar7 = param_2 + 0x20;
  bVar5 = true;
  iVar8 = *(int *)(param_2 + 0x1c);
  iVar1 = *(int *)(param_2 + 0x18);
  uVar3 = param_4 >> (*param_1 & 0x3f);
  uVar2 = param_3 - iVar8 >> (*param_1 & 0x3f);
  uVar4 = uVar2 >> 3 & 0x1ffffffc;
  lVar10 = (unsigned __int64)uVar3 + (__int64)(int)uVar2;
  uVar6 = lVar10 - 1;
  *(unsigned int *)(uVar4 + iVar7) = *(unsigned int *)(uVar4 + iVar7) & ~(1 << (uVar2 & 0x1f));
  uVar4 = (unsigned int)((uVar6 & 0xffffffff) >> 3) & 0x1ffffffc;
  *(unsigned int *)(uVar4 + iVar7) = *(unsigned int *)(uVar4 + iVar7) & ~(1 << ((unsigned int)uVar6 & 0x1f));
  if ((__int64)(int)uVar2 == 0) {
LAB_8270acec:
    bVar9 = false;
  }
  else {
    bVar9 = true;
    if ((1 << (uVar2 - 1 & 0x1f) & *(unsigned int *)((uVar2 - 1 >> 3 & 0x1ffffffc) + iVar7)) != 0)
    goto LAB_8270acec;
  }
  if (param_3 + param_4 < (unsigned int)(iVar1 + iVar8)) {
    uVar2 = (unsigned int)lVar10;
    if ((1 << (uVar2 & 0x1f) & *(unsigned int *)((uVar2 >> 3 & 0x1ffffffc) + iVar7)) == 0)
    goto LAB_8270ad18;
  }
  bVar5 = false;
LAB_8270ad18:
  iVar8 = (uVar3 << (*param_1 & 0x3f)) + param_3;
  if ((unsigned __int64)uVar3 < 0x21) {
    *(short *)(iVar8 + -2) = (short)uVar3;
    *(short *)(param_3 + 0xc) = (short)uVar3;
  }
  else {
    *(unsigned short *)(iVar8 + -2) = 0x21;
    *(unsigned short *)(param_3 + 0xc) = 0x21;
    *(unsigned int *)(iVar8 + -8) = uVar3;
    *(unsigned int *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 8) = param_2;
  if (bVar5 || bVar9) {
    fn_82690F08(param_1 + 2,param_3,*param_1);
  }
  else {
    fn_826909B0(param_1 + 2);
  }
  return;
}

