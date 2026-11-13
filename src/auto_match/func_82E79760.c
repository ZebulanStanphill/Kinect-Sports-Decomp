#define true 1
extern unsigned int *auStack_40;
extern int fn_82E76D10();
extern int fn_82E78690();


unsigned __int64 fn_82E79760(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned char uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int auStack_40 [16];
  
  if (((unsigned __int64)*(unsigned int *)(param_1 + 0x1e0) <= (param_2 & 0xffffffff)) ||
     ((unsigned __int64)*(unsigned short *)(param_1 + 0x146) <= (param_2 & 0xffffffff))) {
    return 0xffffffff80070057;
  }
  iVar6 = param_1 + 0x178;
  lVar1 = fn_82E78690(iVar6,param_2,auStack_40);
  uVar9 = -(unsigned int)(lVar1 != 0) & auStack_40[0];
  if (uVar9 != 0) {
    iVar3 = *(int *)(uVar9 + 300);
    iVar2 = 0;
    if ((iVar3 == 0) || (*(char *)(uVar9 + 0x130) == '\0')) {
      iVar2 = fn_82E76D10(param_1);
      iVar2 = iVar2 + (unsigned int)*(unsigned short *)(uVar9 + 0x1f);
      if (*(int *)(param_1 + 0x154) != 0) {
        iVar2 = (unsigned int)*(unsigned char *)(param_1 + 0x171) + iVar2;
      }
    }
    if (iVar3 != 0) {
      iVar2 = iVar2 + 1;
    }
    *(int *)(uVar9 + 0x17) = *(int *)(uVar9 + 0x1b) + iVar2;
    if (iVar3 == 0) {
      return 0;
    }
    if ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned char *)(uVar9 + 0x130)) {
      return 0xffffffff80070057;
    }
    uVar8 = param_2 - *(unsigned char *)(uVar9 + 0x130);
    lVar1 = fn_82E78690(iVar6,uVar8,auStack_40);
    uVar5 = -(unsigned int)(lVar1 != 0) & auStack_40[0];
    if (uVar5 != 0) {
      uVar4 = (unsigned __int64)*(unsigned char *)(uVar9 + 0x130);
      uVar7 = *(unsigned char *)(uVar5 + 0x13c);
      if (1 < uVar4 + 1) {
        trapWord(6,uVar4,0);
        uVar7 = (unsigned char)
                (((unsigned __int64)*(unsigned int *)(uVar9 + 0xf) - (unsigned __int64)*(unsigned int *)(uVar5 + 0xf) & 0xffffffff
                 ) / uVar4);
      }
      iVar3 = *(int *)(uVar5 + 0x134);
      iVar2 = *(int *)(uVar9 + 0x17);
      while( true ) {
        if ((param_2 & 0xffffffff) < (uVar8 & 0xffffffff)) {
          return 0;
        }
        lVar1 = fn_82E78690(iVar6,uVar8,auStack_40);
        uVar9 = -(unsigned int)(lVar1 != 0) & auStack_40[0];
        if (uVar9 == 0) break;
        uVar8 = uVar8 + 1;
        *(int *)(uVar9 + 0x134) = iVar3 + iVar2;
        *(unsigned char *)(uVar9 + 0x13c) = uVar7;
      }
    }
  }
  return 0xffffffff8000ffff;
}

