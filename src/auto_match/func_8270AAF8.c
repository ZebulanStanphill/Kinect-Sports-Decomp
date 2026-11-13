extern int fn_826909B0();
extern int fn_82690BA0();


int fn_8270AAF8(unsigned int *param_1,unsigned int param_2,int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int iVar11;
  
  uVar1 = *param_1;
  uVar10 = (unsigned __int64)(param_2 >> (uVar1 & 0x3f));
  iVar7 = fn_82690BA0(param_1 + 2,uVar10);
  if (iVar7 != 0) {
    uVar9 = (unsigned __int64)*(unsigned short *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 8);
    if (0x20 < uVar9) {
      uVar9 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x10);
    }
    uVar9 = uVar9 - uVar10;
    iVar11 = (int)uVar9;
    uVar3 = iVar11 << (uVar1 & 0x3f);
    if (uVar3 < 0x10) {
      param_2 = uVar3 + param_2;
    }
    else {
      iVar6 = iVar7 + param_2;
      iVar4 = uVar3 + iVar6;
      if ((uVar9 & 0xffffffff) < 0x21) {
        *(short *)(iVar4 + -2) = (short)uVar9;
        *(short *)(iVar6 + 0xc) = (short)uVar9;
      }
      else {
        *(unsigned short *)(iVar4 + -2) = 0x21;
        *(unsigned short *)(iVar6 + 0xc) = 0x21;
        *(int *)(iVar4 + -8) = iVar11;
        *(int *)(iVar6 + 0x10) = iVar11;
      }
      *(int *)(iVar6 + 8) = iVar2;
      fn_826909B0(param_1 + 2);
      iVar11 = iVar2 + 0x20;
      uVar3 = (iVar7 - *(int *)(iVar2 + 0x1c)) + param_2 >> (uVar1 & 0x3f);
      uVar5 = uVar3 >> 3 & 0x1ffffffc;
      uVar10 = (uVar3 + uVar9) - 1;
      *(unsigned int *)(uVar5 + iVar11) = *(unsigned int *)(uVar5 + iVar11) & ~(1 << (uVar3 & 0x1f));
      uVar3 = (unsigned int)((uVar10 & 0xffffffff) >> 3) & 0x1ffffffc;
      *(unsigned int *)(uVar3 + iVar11) = *(unsigned int *)(uVar3 + iVar11) & ~(1 << ((unsigned int)uVar10 & 0x1f));
    }
    iVar11 = iVar2 + 0x20;
    uVar3 = iVar7 - *(int *)(iVar2 + 0x1c) >> (uVar1 & 0x3f);
    uVar5 = uVar3 >> 3 & 0x1ffffffc;
    uVar8 = ((param_2 >> (uVar1 & 0x3f)) + uVar3) - 1;
    *(unsigned int *)(uVar5 + iVar11) = 1 << (uVar3 & 0x1f) | *(unsigned int *)(uVar5 + iVar11);
    uVar1 = uVar8 >> 3 & 0x1ffffffc;
    *(unsigned int *)(uVar1 + iVar11) = 1 << (uVar8 & 0x1f) | *(unsigned int *)(uVar1 + iVar11);
    *param_3 = iVar2;
  }
  return iVar7;
}

