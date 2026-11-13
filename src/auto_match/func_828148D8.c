extern unsigned int *auStack_50;
extern int fn_82820290();
extern int memcpy();


void fn_828148D8(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  int iVar9;
  unsigned int auStack_50;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar6 = 0;
  puVar8 = (unsigned int *)0x0;
  do {
    iVar5 = uVar6 * 0x14 + *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar5 + 0x60) != 0) {
      uVar7 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x5c);
      if (iVar1 != 0) {
        fn_82820290(iVar1,uVar6 + 1,&auStack_50);
        uVar7 = auStack_50 + uVar7;
      }
      uVar4 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x58);
      if (*(unsigned int *)(iVar5 + 0x68) < uVar4) {
        uVar7 = ((uVar4 - *(unsigned int *)(iVar5 + 0x68)) + (unsigned __int64)*(unsigned int *)(iVar5 + 0x60) + uVar7 +
                 0x43 & 0xfffffffc) - (unsigned __int64)*(unsigned int *)(iVar5 + 0x60);
      }
      if (puVar8 == (unsigned int *)0x0) {
        iVar9 = *(int *)(iVar2 + 0x1c) + iVar2;
      }
      else {
        iVar9 = puVar8[1] + *puVar8;
        if (iVar1 != 0) {
          fn_82820290(iVar1,uVar6,&auStack_50);
          iVar9 = iVar9 + auStack_50;
        }
        uVar3 = puVar8[4];
        if (uVar3 < *puVar8) {
          iVar9 = (((puVar8[2] - uVar3) + iVar9 + 0x43 & 0xfffffffc) - puVar8[2]) + uVar3;
        }
      }
      memcpy(uVar7,iVar9,*(unsigned int *)(iVar5 + 0x60));
    }
    uVar6 = uVar6 + 1 & 0xff;
    puVar8 = (unsigned int *)(iVar5 + 0x58);
  } while (uVar6 < 2);
  return;
}

