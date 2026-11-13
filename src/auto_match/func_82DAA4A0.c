extern int fn_82F68B70();


unsigned __int64 fn_82DAA4A0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned char *param_3,int param_4)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 *puVar7;
  unsigned __int64 *puVar8;
  __int64 lVar9;
  
  puVar3 = (unsigned int *)(param_3 + -4);
  puVar4 = (unsigned int *)(param_4 + 8);
  lVar9 = 8;
  do {
    puVar4[-2] = puVar3[1];
    puVar4[-1] = puVar3[2];
    *puVar4 = *(unsigned int *)(((int)param_3 - param_4) + (int)puVar4);
    puVar3 = puVar3 + 4;
    puVar4[1] = *puVar3;
    puVar4 = puVar4 + 4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar6 = **(int **)(param_3 + 0x1c);
  *(unsigned int *)(param_4 + 0x14) =
       *(unsigned int *)((unsigned int)*(unsigned short *)(param_4 + 0x10) * 4 + *(int *)(iVar6 + 0x28));
  switch(*param_3) {
  case 0:
    if (1 < *(int *)(param_3 + 0x20)) {
      *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + -1;
      *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
      *(unsigned int *)(param_4 + 0x20) = 1;
      return 1;
    }
    break;
  case 1:
    if (0x80 < *(unsigned short *)(param_3 + 0x26)) {
      *(unsigned short *)(param_3 + 0x26) = *(unsigned short *)(param_3 + 0x26) - 0x80;
      *(short *)(param_3 + 0x24) = *(short *)(param_3 + 0x24) + 0x80;
      *(unsigned short *)(param_4 + 0x26) = 0x80;
      return 1;
    }
    break;
  case 3:
  case 6:
  case 0xe:
    puVar8 = (unsigned __int64 *)(param_3 + -8);
    puVar7 = (unsigned __int64 *)(param_4 + -8);
    lVar9 = 0x10;
    do {
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    break;
  case 4:
  case 10:
    if (**(int **)(param_3 + 0x20) != 0) {
      *(int *)(param_3 + 0x20) = **(int **)(param_3 + 0x20);
      return 1;
    }
    break;
  case 7:
    uVar5 = *(int *)(param_3 + 0x20) + 0x4000;
    if (uVar5 < *(unsigned int *)(param_3 + 0x24)) {
      *(unsigned int *)(param_3 + 0x20) = uVar5;
      *(unsigned int *)(param_4 + 0x24) = uVar5;
      return 1;
    }
    break;
  case 8:
    if (*(char *)(*(unsigned int **)(param_3 + 0x2c) + 7) == '\0') {
      *(unsigned int *)(param_3 + 0x2c) = **(unsigned int **)(param_3 + 0x2c);
      return 1;
    }
    break;
  case 9:
    if (*(int *)(param_3 + 0x20) + 0x4000U < *(unsigned int *)(param_3 + 0x24)) {
      iVar6 = *(int *)(param_3 + 0x20) + 0x4000;
      *(int *)(param_3 + 0x20) = iVar6;
      *(int *)(param_4 + 0x24) = iVar6;
      return 1;
    }
    break;
  case 0xb:
    if (0x80 < *(unsigned short *)(param_3 + 0x34)) {
      *(unsigned short *)(param_3 + 0x34) = *(unsigned short *)(param_3 + 0x34) - 0x80;
      *(short *)(param_3 + 0x36) = *(short *)(param_3 + 0x36) + 0x80;
      *(unsigned short *)(param_4 + 0x34) = 0x80;
      return 1;
    }
    if (*(int *)(param_3 + 0x20) != 0) {
      *param_3 = 10;
      return 1;
    }
    break;
  case 0xc:
    uVar2 = fn_82F68B70(param_3,iVar6 + 0x28,param_4);
    return uVar2;
  case 0xd:
    uVar1 = *(unsigned short *)(param_3 + 0x2a);
    if (uVar1 < *(unsigned short *)(param_3 + 0x28)) {
      *(unsigned short *)(param_3 + 0x28) = *(unsigned short *)(param_3 + 0x28) - uVar1;
      *(unsigned int *)(param_3 + 0x40) = (unsigned int)uVar1 + *(int *)(param_3 + 0x40);
      *(short *)(param_3 + 0x24) = *(short *)(param_3 + 0x24) + 1;
      *(unsigned short *)(param_4 + 0x28) = uVar1;
      *(unsigned short *)(param_4 + 0x44) = 0x200;
      return 1;
    }
    break;
  case 0xf:
    uVar1 = *(unsigned short *)(param_3 + 0x2a);
    if (uVar1 < *(unsigned short *)(param_3 + 0x28)) {
      *(unsigned short *)(param_3 + 0x28) = *(unsigned short *)(param_3 + 0x28) - uVar1;
      *(short *)(param_3 + 0x24) = *(short *)(param_3 + 0x24) + 1;
      *(unsigned short *)(param_4 + 0x28) = uVar1;
      return 1;
    }
  }
  return 0;
}

