extern int fn_828FAF58();
extern int fn_828FBB60();


unsigned __int64 fn_828F4C10(int param_1)

{
  char cVar1;
  char cVar2;
  unsigned __int64 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  unsigned int uVar7;
  char *pcVar8;
  int *piVar9;
  
  piVar9 = (int *)(param_1 + 0x280);
  uVar3 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),*(unsigned int *)(param_1 + 0x2a0),piVar9
                           );
  if ((int)uVar3 < 0) goto LAB_828f4df8;
  iVar4 = *piVar9;
  if (iVar4 == 1) {
    pcVar5 = (char *)(param_1 + 0x288);
    pcVar6 = "(";
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar8 = pcVar8 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) goto LAB_828f4dd4;
    uVar3 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),*(unsigned int *)(param_1 + 0x2a0),
                              piVar9);
    if ((int)uVar3 < 0) goto LAB_828f4df8;
    if (*piVar9 == 9) {
      pcVar8 = *(char **)pcVar5;
      uVar3 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),*(unsigned int *)(param_1 + 0x2a0),
                                piVar9);
      if ((int)uVar3 < 0) goto LAB_828f4df8;
    }
    else {
      pcVar8 = (char *)0x0;
    }
    iVar4 = *piVar9;
    if (iVar4 != 1) goto LAB_828f4dd4;
    pcVar6 = ")";
    do {
      cVar1 = *pcVar5;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) goto LAB_828f4dd4;
    uVar3 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),*(unsigned int *)(param_1 + 0x2a0),
                              piVar9);
    if ((int)uVar3 < 0) goto LAB_828f4df8;
    iVar4 = *piVar9;
    if ((iVar4 != 0xc) && (iVar4 != 0xd)) goto LAB_828f4dd4;
    if (pcVar8 == (char *)0x0) {
      *(unsigned int *)(param_1 + 0x3c) = 0;
    }
    else {
      pcVar5 = "row_major";
      pcVar6 = pcVar8;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar7 = 0x400;
      }
      else {
        pcVar6 = "column_major";
        do {
          cVar1 = *pcVar8;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar8 = pcVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 != cVar2) goto LAB_828f4dd4;
        uVar7 = 0x800;
      }
      *(unsigned int *)(param_1 + 0x3c) = uVar7;
    }
  }
  else {
LAB_828f4dd4:
    if ((iVar4 != 0xc) && (iVar4 != 0xd)) {
      fn_828FAF58(*(unsigned int *)(param_1 + 0x278),0);
    }
    *(unsigned int *)(param_1 + 0x29c) = 0;
  }
  uVar3 = 0;
LAB_828f4df8:
  *(unsigned int *)(param_1 + 0x4c) = 1;
  return uVar3;
}

