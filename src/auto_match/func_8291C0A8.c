#define true 1
extern int fn_8291BB88();
extern int fn_82F66A80();
extern int fn_82F66AC0();
extern int fn_82F66AE0();


int * fn_8291C0A8(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  char cVar7;
  char *pcVar6;
  char *pcVar8;
  __int64 lVar9;
  unsigned int uVar10;
  
LAB_8291c0bc:
  cVar7 = *param_2;
  while (iVar2 = fn_82F66AC0(cVar7), iVar2 != 0) {
    param_2 = param_2 + 1;
    cVar7 = *param_2;
  }
  cVar7 = *param_2;
  if (cVar7 == '\0') {
    return param_1;
  }
  if (cVar7 != '[') {
    if (cVar7 != '.') {
      if (param_3 == 0) {
        return (int *)0x0;
      }
      pcVar8 = param_2;
      if (cVar7 != '.') goto LAB_8291c1b8;
    }
    pcVar8 = param_2 + 1;
LAB_8291c1b8:
    cVar7 = *pcVar8;
    while (iVar2 = fn_82F66AC0(cVar7), iVar2 != 0) {
      pcVar8 = pcVar8 + 1;
      cVar7 = *pcVar8;
    }
    uVar10 = 0;
    while( true ) {
      param_2 = pcVar8 + uVar10;
      iVar2 = fn_82F66AE0(pcVar8[uVar10]);
      if ((iVar2 == 0) && (*param_2 != '_')) break;
      uVar10 = uVar10 + 1;
    }
    if (uVar10 == 0) {
      return (int *)0x0;
    }
    uVar3 = 0;
    iVar2 = 0;
    do {
      if (*(unsigned short *)(param_1[6] + 10) <= uVar3) {
        return (int *)0x0;
      }
      iVar4 = *(int *)(*(int *)(iVar2 + param_1[0xe]) + 4);
      if (iVar4 != 0) {
        uVar5 = 0;
        iVar4 = *(int *)(*param_1 + 8) + iVar4;
        if (uVar10 != 0) {
          pcVar6 = pcVar8;
          do {
            if ((pcVar6[iVar4 - (int)pcVar8] < *pcVar6) || (*pcVar6 < pcVar6[iVar4 - (int)pcVar8]))
            goto LAB_8291c298;
            uVar5 = uVar5 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar5 < uVar10);
        }
        if ((uVar5 != uVar10) || (*(char *)(uVar5 + iVar4) == '\0')) goto LAB_8291c2a4;
      }
LAB_8291c298:
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while( true );
  }
  do {
    param_2 = param_2 + 1;
    iVar2 = fn_82F66AC0(*param_2);
  } while (iVar2 != 0);
  iVar2 = fn_82F66A80(*param_2);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  cVar7 = *param_2;
  lVar9 = 0;
  while (iVar2 = fn_82F66A80(cVar7), iVar2 != 0) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    cVar7 = *param_2;
    lVar9 = lVar9 * 10 + (__int64)cVar1 + -0x30;
  }
  cVar7 = *param_2;
  while (iVar2 = fn_82F66AC0(cVar7), iVar2 != 0) {
    param_2 = param_2 + 1;
    cVar7 = *param_2;
  }
  if (*param_2 != ']') {
    return (int *)0x0;
  }
  param_1 = (int *)fn_8291BB88(param_1,lVar9);
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  param_2 = param_2 + 1;
  goto LAB_8291c194;
LAB_8291c2a4:
  param_1 = *(int **)(uVar3 * 4 + param_1[0xe]);
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_8291c194:
  param_3 = 0;
  goto LAB_8291c0bc;
}

