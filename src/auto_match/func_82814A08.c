extern unsigned int *auStack_60;
extern int fn_82820290();
extern int memcpy();


void fn_82814A08(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  __int64 lVar8;
  int iVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned int auStack_60;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(char *)(iVar1 + 0x51) != '\0') {
    uVar7 = 0;
    iVar6 = 0;
    do {
      iVar9 = uVar7 * 0x21 + *(int *)(param_1 + 0x30);
      if (*(int *)(iVar9 + 0x15) != 0) {
        lVar8 = (unsigned __int64)*(unsigned int *)(iVar9 + 0x11) + (unsigned __int64)*(unsigned int *)(iVar9 + 0xd);
        if (iVar2 != 0) {
          fn_82820290(iVar2,uVar7 + 3,&auStack_60);
          lVar8 = (unsigned __int64)auStack_60 + lVar8;
        }
        if ((unsigned __int64)*(unsigned int *)(iVar9 + 0x1d) < (unsigned __int64)*(unsigned int *)(iVar9 + 9)) {
          lVar8 = (((unsigned __int64)*(unsigned int *)(iVar9 + 9) - (unsigned __int64)*(unsigned int *)(iVar9 + 0x1d)) +
                   (unsigned __int64)*(unsigned int *)(iVar9 + 0x15) + lVar8 + 0x43 & 0xfffffffc) -
                  (unsigned __int64)*(unsigned int *)(iVar9 + 0x15);
        }
        if (iVar6 == 0) {
          iVar6 = (unsigned int)*(unsigned char *)(param_1 + 0x79) * 0x14 + *(int *)(param_1 + 0x1c);
          uVar5 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x58);
          uVar3 = *(unsigned int *)(iVar6 + 0x68);
          uVar4 = *(unsigned int *)(iVar6 + 0x60);
          lVar11 = *(unsigned int *)(iVar6 + 0x5c) + uVar5;
        }
        else {
          uVar5 = (unsigned __int64)*(unsigned int *)(iVar6 + 9);
          uVar3 = *(unsigned int *)(iVar6 + 0x1d);
          uVar4 = *(unsigned int *)(iVar6 + 0x15);
          lVar11 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x11) + (unsigned __int64)*(unsigned int *)(iVar6 + 0xd) + uVar5;
        }
        uVar10 = (unsigned __int64)uVar3;
        if (iVar2 != 0) {
          fn_82820290(iVar2,uVar7 + 2,&auStack_60);
          lVar11 = lVar11 + (unsigned __int64)auStack_60;
        }
        if (uVar10 < uVar5) {
          lVar11 = (((uVar4 - uVar10) + lVar11 + 0x43 & 0xfffffffc) - (unsigned __int64)uVar4) + uVar10;
        }
        memcpy(lVar8,lVar11,*(unsigned int *)(iVar9 + 0x15));
      }
      uVar7 = uVar7 + 1 & 0xff;
      iVar6 = iVar9;
    } while (uVar7 < *(unsigned char *)(iVar1 + 0x51));
  }
  return;
}

