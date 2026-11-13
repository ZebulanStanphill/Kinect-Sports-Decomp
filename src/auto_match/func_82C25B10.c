extern unsigned int *auStack_88;
extern unsigned int *auStack_8c;
extern int fn_82C1E828();
extern int fn_82C1E938();
extern int fn_82C1EAB8();
extern int fn_82C1EFD0();
extern int fn_82C23720();
extern int fn_82C237D0();
extern unsigned int uStack_8e;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_82C25B10(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned char bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned short uVar7;
  unsigned short uVar8;
  unsigned short uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned char abStack_90;
  unsigned short uStack_8e;
  unsigned short auStack_8c [2];
  unsigned int auStack_88 [34];
  
  piVar3 = *(int **)(param_1 + 0x1c);
  auStack_88[2] = 0;
  auStack_88[1] = 0;
  uVar14 = 0;
  abStack_90 = 0;
  uStack_8e = 0xffff;
  auStack_8c[0] = 0;
  auStack_88[3] = 0;
  uVar10 = (**(int (***)())(*piVar3 + 0xc))();
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  iVar4 = piVar3[0xd];
  iVar5 = piVar3[0xc];
  *(unsigned int *)(iVar4 + 0x10) = 0xffffffff;
  if (*(unsigned char *)(iVar4 + 6) == 1) {
    uVar6 = *(unsigned int *)(iVar4 + 8);
    *(unsigned int *)(iVar4 + 8) = 0;
    *(unsigned int *)(iVar4 + 0xc) = 0;
    *(unsigned int *)(iVar4 + 0x18) = 1;
    auStack_88[0] = 1;
    *(unsigned int *)(iVar4 + 0x10) = uVar6;
    if ((param_2 & 0xffffffff) == 0) {
      return 0xffffffff80500018;
    }
    uVar14 = 1;
    uVar10 = fn_82C1E828(param_1,&abStack_90,auStack_88 + 2,auStack_88 + 1,auStack_88);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    *(unsigned int *)(iVar4 + 0x20) = (unsigned int)abStack_90;
  }
  else if (7 < *(unsigned char *)(iVar4 + 6)) {
    uVar14 = 8;
    auStack_88[0] = 8;
    if ((param_2 & 0xffffffff) < 8) {
      return 0xffffffff80500018;
    }
    uVar10 = fn_82C1EAB8(param_1,iVar4 + 0xc,auStack_88 + 2,auStack_88 + 1,auStack_88);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    uVar10 = fn_82C1EAB8(param_1,(unsigned int *)(iVar4 + 0x10),auStack_88 + 2,auStack_88 + 1,
                           auStack_88);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    *(unsigned int *)(iVar4 + 0x18) = 0;
  }
  uVar10 = fn_82C23720(param_1,*(unsigned char *)(iVar4 + 4),&uStack_8e,auStack_8c,auStack_88 + 3);
  uVar9 = auStack_8c[0];
  uVar7 = uStack_8e;
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  *(unsigned int *)(iVar4 + 0x4c) = auStack_88[3];
  if (((auStack_88[3] != 0) && (uStack_8e != 0xffff)) &&
     (uVar12 = (unsigned __int64)auStack_8c[0], uVar12 != 0)) {
    uVar11 = 0;
    if (0 < (short)uStack_8e) {
      do {
        uStack_8e = 0;
        uVar10 = fn_82C237D0(param_1,*(unsigned char *)(iVar4 + 4),uVar11,&uStack_8e);
        if ((int)uVar10 < 0) {
          return uVar10;
        }
        if (uStack_8e == 0xffff) {
          uVar14 = uVar14 + 2;
          auStack_88[0] = 2;
          if ((param_2 & 0xffffffff) < (uVar14 & 0xffffffff)) {
            return 0xffffffff80500018;
          }
          uVar10 = fn_82C1E938(param_1,&uStack_8e,auStack_88 + 2,auStack_88 + 1,auStack_88);
          if ((int)uVar10 < 0) {
            return uVar10;
          }
        }
        uVar8 = uStack_8e;
        uVar13 = (unsigned __int64)uStack_8e;
        uVar10 = (**(int (***)())(*piVar3 + 0x14))(*piVar3,uVar13);
        if ((int)uVar10 < 0) {
          return uVar10;
        }
        uVar14 = uVar13 + uVar14;
        uVar11 = uVar11 + 1 & 0xffff;
        *(unsigned __int64 *)(piVar3 + 2) = (unsigned __int64)uVar8 + *(__int64 *)(piVar3 + 2);
      } while ((int)uVar11 < (int)(short)uVar7);
    }
    uVar14 = uVar12 + uVar14;
    if ((param_2 & 0xffffffff) < (uVar14 & 0xffffffff)) {
      return 0xffffffff80500018;
    }
    auStack_88[0] = (unsigned int)uVar9;
    uVar10 = fn_82C1EFD0(param_1,iVar4 + 0x2c,uVar12,auStack_88 + 2,auStack_88 + 1,auStack_88);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    *(int *)(iVar4 + 0x40) = iVar4 + 0x2c;
    *(unsigned int *)(iVar4 + 0x44) = (unsigned int)uVar9;
    *(unsigned int *)(iVar4 + 0x3c) = 1;
  }
  uVar13 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x58) + (unsigned __int64)*(unsigned char *)(iVar4 + 6) + 1;
  uVar12 = uVar13 & 0xffff;
  *(short *)(iVar4 + 2) = (short)uVar13;
  if ((*(unsigned int *)(iVar4 + 0x54) + uVar14 & 0xffffffff) < uVar12) {
    uVar12 = (uVar12 - *(unsigned int *)(iVar4 + 0x54)) - uVar14;
    uVar10 = (**(int (***)())(*piVar3 + 0x14))(*piVar3,uVar12);
    if ((int)uVar10 < 0) {
      return uVar10;
    }
    uVar14 = uVar12 + uVar14;
    *(unsigned __int64 *)(piVar3 + 2) = (uVar12 & 0xffffffff) + *(__int64 *)(piVar3 + 2);
  }
  if (*(int *)(iVar5 + 8) == 0) {
    if (*(int *)(iVar5 + 0x20) == 0) {
      auStack_88[3] =
           ((*(int *)(piVar3[1] + 8) - *(int *)(iVar5 + 0x30)) - *(int *)(iVar5 + 0xc)) -
           (unsigned int)*(unsigned short *)(iVar4 + 2);
    }
    else {
      auStack_88[3] =
           ((*(int *)(iVar5 + 0x20) - *(int *)(iVar5 + 0x30)) - *(int *)(iVar5 + 0xc)) -
           (unsigned int)*(unsigned short *)(iVar4 + 2);
    }
  }
  else {
    cVar1 = *(char *)(iVar5 + 0x1a);
    if (cVar1 == '\x01') {
      auStack_88[0] = 1;
      if ((param_2 & 0xffffffff) < (uVar14 + 1 & 0xffffffff)) {
        return 0xffffffff80500018;
      }
      uVar10 = fn_82C1E828(param_1,&abStack_90,auStack_88 + 2,auStack_88 + 1,auStack_88);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      auStack_88[3] = (unsigned int)abStack_90;
    }
    else if (cVar1 == '\x02') {
      auStack_8c[0] = 0;
      auStack_88[0] = 2;
      if ((param_2 & 0xffffffff) < (uVar14 + 2 & 0xffffffff)) {
        return 0xffffffff80500018;
      }
      uVar10 = fn_82C1E938(param_1,auStack_8c,auStack_88 + 2,auStack_88 + 1,auStack_88);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      auStack_88[3] = (unsigned int)auStack_8c[0];
    }
    else if (cVar1 == '\x03') {
      auStack_88[3] = 0;
      auStack_88[0] = 4;
      if ((param_2 & 0xffffffff) < (uVar14 + 4 & 0xffffffff)) {
        return 0xffffffff80500018;
      }
      uVar10 = fn_82C1EAB8(param_1,auStack_88 + 3,auStack_88 + 2,auStack_88 + 1,auStack_88);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
    }
    else {
      auStack_88[3] = 0;
    }
  }
  *(short *)(iVar4 + 0x1c) = (short)auStack_88[3];
  bVar2 = *(unsigned char *)(iVar5 + 0x1b);
  *(short *)(iVar4 + 0x1e) = (short)auStack_88[3];
  uVar11 = (unsigned int)bVar2 + (auStack_88[3] & 0xffff) + (unsigned int)*(unsigned short *)(iVar4 + 2);
  *(short *)(iVar4 + 2) = (short)uVar11;
  uVar11 = (uVar11 & 0xffff) + *(int *)(iVar5 + 0xc);
  *(unsigned int *)(iVar5 + 0xc) = uVar11;
  if (uVar11 <= *(unsigned int *)(piVar3[1] + 8)) {
    if (uVar11 != *(unsigned int *)(piVar3[1] + 8)) {
      return uVar10;
    }
    if (*(int *)(iVar5 + 0x3c) - 1U <= (unsigned int)piVar3[0xe]) {
      return uVar10;
    }
  }
  return 0xffffffff80500018;
}

