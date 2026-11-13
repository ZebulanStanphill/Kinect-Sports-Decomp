extern unsigned int *auStack_5c;
extern int fn_82C1D9D8();
extern int fn_82C1E828();
extern int fn_82C1E938();
extern int fn_82C1EAB8();


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_82C22E40(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  int *piVar2;
  unsigned short *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int iVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned char abStack_60 [4];
  unsigned int auStack_5c [23];
  
  piVar2 = *(int **)(param_1 + 0x1c);
  auStack_5c[3] = 0;
  auStack_5c[2] = 0;
  abStack_60[0] = 0;
  auStack_5c[0] = 0;
  if (*(unsigned __int64 *)(piVar2 + 2) <
      (unsigned __int64)*(unsigned int *)(piVar2[0xc] + 0xc) + *(unsigned __int64 *)(piVar2 + 8)) {
    uVar10 = ((*(unsigned __int64 *)(piVar2 + 8) & 0xffffffff) - (*(unsigned __int64 *)(piVar2 + 2) & 0xffffffff))
             + (unsigned __int64)*(unsigned int *)(piVar2[0xc] + 0xc);
    uVar6 = (**(int (***)())(*piVar2 + 0x14))(*piVar2,uVar10);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    *(unsigned __int64 *)(piVar2 + 2) = (uVar10 & 0xffffffff) + *(__int64 *)(piVar2 + 2);
  }
  uVar6 = (**(int (***)())(*piVar2 + 0xc))(*piVar2,param_2);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  puVar3 = (unsigned short *)piVar2[0xd];
  lVar9 = 2;
  iVar4 = piVar2[0xc];
  auStack_5c[1] = 2;
  *(unsigned int *)(puVar3 + 0x28) = 0;
  *(unsigned int *)(puVar3 + 0x2a) = 0;
  *(unsigned int *)(puVar3 + 0x2c) = 0;
  *(unsigned int *)(puVar3 + 0x1e) = 0;
  *(unsigned int *)(puVar3 + 0x20) = 0;
  *(unsigned int *)(puVar3 + 0x22) = 0;
  *(unsigned int *)(puVar3 + 0x24) = 0;
  if ((param_2 & 0xffffffff) < 2) {
    return 0xffffffff80500018;
  }
  uVar6 = fn_82C1E828(param_1,abStack_60,auStack_5c + 3,auStack_5c + 2,auStack_5c + 1);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  uVar5 = *(unsigned int *)(iVar4 + 0xc);
  *(unsigned int *)(puVar3 + 10) = (unsigned int)(abStack_60[0] >> 7);
  *puVar3 = (short)uVar5;
  *(unsigned char *)(puVar3 + 2) = abStack_60[0] & 0x7f;
  uVar6 = fn_82C1E828(param_1,abStack_60,auStack_5c + 3,auStack_5c + 2,auStack_5c + 1);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  *(unsigned char *)((int)puVar3 + 5) = abStack_60[0];
  uVar6 = fn_82C1D9D8(*(unsigned int *)(piVar2[1] + 0x80),*(unsigned char *)(puVar3 + 2),auStack_5c);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  cVar1 = *(char *)(iVar4 + 0x19);
  if (cVar1 == '\x01') {
    auStack_5c[1] = 1;
    if ((param_2 & 0xffffffff) < 3) {
      return 0xffffffff80500018;
    }
    lVar9 = 3;
    uVar6 = fn_82C1E828(param_1,abStack_60,auStack_5c + 3,auStack_5c + 2,auStack_5c + 1);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    uVar7 = (unsigned int)abStack_60[0];
LAB_82c23080:
    *(unsigned int *)(puVar3 + 4) = uVar7;
  }
  else {
    if (cVar1 == '\x02') {
      auStack_5c[0] = auStack_5c[0] & 0xffff;
      auStack_5c[1] = 2;
      if ((param_2 & 0xffffffff) < 4) {
        return 0xffffffff80500018;
      }
      lVar9 = 4;
      uVar6 = fn_82C1E938(param_1,auStack_5c,auStack_5c + 3,auStack_5c + 2,auStack_5c + 1);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      uVar7 = auStack_5c[0] >> 0x10;
      goto LAB_82c23080;
    }
    if (cVar1 == '\x03') {
      auStack_5c[0] = 0;
      auStack_5c[1] = 4;
      if ((param_2 & 0xffffffff) < 6) {
        return 0xffffffff80500018;
      }
      lVar9 = 6;
      uVar6 = fn_82C1EAB8(param_1,auStack_5c,auStack_5c + 3,auStack_5c + 2,auStack_5c + 1);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      *(unsigned int *)(puVar3 + 4) = auStack_5c[0];
    }
  }
  cVar1 = *(char *)(iVar4 + 0x1a);
  if (cVar1 == '\x01') {
    iVar8 = *(int *)(puVar3 + 0x28) + 1;
  }
  else if (cVar1 == '\x02') {
    iVar8 = *(int *)(puVar3 + 0x28) + 2;
  }
  else {
    if (cVar1 != '\x03') goto LAB_82c230c4;
    iVar8 = *(int *)(puVar3 + 0x28) + 4;
  }
  *(int *)(puVar3 + 0x28) = iVar8;
LAB_82c230c4:
  auStack_5c[1] = 1;
  *(unsigned int *)(puVar3 + 0x2c) = *(unsigned char *)(iVar4 + 0x18) + 2;
  if ((param_2 & 0xffffffff) < lVar9 + 1U) {
    return 0xffffffff80500018;
  }
  uVar6 = fn_82C1E828(param_1,abStack_60,auStack_5c + 3,auStack_5c + 2,auStack_5c + 1);
  if (-1 < (int)uVar6) {
    *(int *)(puVar3 + 0x2a) = (int)(lVar9 + 1U);
    *(unsigned char *)(puVar3 + 3) = abStack_60[0];
    *(unsigned int *)(puVar3 + 0x28) = (unsigned int)abStack_60[0] + *(int *)(puVar3 + 0x28);
    return uVar6;
  }
  return uVar6;
}

