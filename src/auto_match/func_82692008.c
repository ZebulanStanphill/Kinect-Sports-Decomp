extern unsigned int *auStack_30;
extern int fn_826914F8();
extern unsigned int lbl_831E7E60;


unsigned int fn_82692008(int param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned char auStack_30 [48];
  
  uVar5 = (unsigned __int64)lbl_831E7E60;
  RtlEnterCriticalSection(uVar5 + 0x2c4);
  uVar1 = param_2 + 1 << (*(unsigned int *)(param_1 + 0xc) & 0x3f);
  uVar8 = (unsigned __int64)uVar1;
  uVar6 = ((unsigned __int64)uVar1 & 0x3fffffff) << 2;
  if (uVar6 < 0x1001) {
    uVar6 = 0x1000;
  }
  iVar3 = fn_826914F8(param_1,param_2,uVar6 + 0xfff & 0xfffff000,0x1000,0,auStack_30);
  if (iVar3 == 0) {
    uVar9 = 0;
  }
  else {
    trapWord(6,uVar8,0);
    uVar7 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x1c);
    uVar6 = *(unsigned int *)(iVar3 + 0x18) / uVar8;
    piVar4 = (int *)(param_2 * 8 + param_1 + 0x1b4);
    if ((int)uVar6 != 0) {
      do {
        piVar2 = (int *)uVar7;
        piVar2[2] = iVar3;
        *piVar2 = *piVar4;
        piVar2[1] = (int)piVar4;
        *(int **)(*piVar4 + 4) = piVar2;
        *piVar4 = (int)piVar2;
        uVar7 = uVar7 + uVar8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *(int *)(param_1 + 0x210) = *(int *)(iVar3 + 0x18) + *(int *)(param_1 + 0x210);
    uVar9 = *(unsigned int *)(iVar3 + 0x1c);
  }
  RtlLeaveCriticalSection(uVar5 + 0x2c4);
  return uVar9;
}

