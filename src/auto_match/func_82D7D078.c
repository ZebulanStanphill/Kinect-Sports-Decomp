extern int fn_82CE5410();
extern int fn_82CE6460();
extern int fn_82D7C4B0();


void fn_82D7D078(unsigned __int64 param_1,unsigned char *param_2,int param_3)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned char *puVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  __int64 lVar11;
  unsigned short *puVar12;
  int *piVar13;
  int *piVar14;
  __int64 lVar15;
  
  switch(*param_2) {
  case 2:
  case 6:
  case 10:
  case 0xe:
    puVar7 = param_2 + 0x20;
    break;
  default:
    goto LAB_82d7d120;
  case 4:
  case 0xc:
    puVar7 = param_2 + 0x30;
  }
  (**(int (***)())((unsigned int)(unsigned char)param_2[1] * 0x50 + param_3 + 0x16b4))
            (param_2,puVar7,*(unsigned int *)(param_2 + 8));
LAB_82d7d120:
  puVar12 = (unsigned short *)(param_2 + 4);
  piVar13 = (int *)(param_2 + 0x10);
  lVar11 = 2;
  do {
    iVar2 = *piVar13;
    uVar1 = *puVar12;
    piVar14 = (int *)(iVar2 + 0x50);
    uVar8 = *(int *)(iVar2 + 0x54) - 1;
    *(unsigned int *)(iVar2 + 0x54) = uVar8;
    if (uVar8 != uVar1) {
      puVar9 = (unsigned int *)((unsigned int)uVar1 * 8 + *piVar14);
      iVar6 = (uVar8 * 8 + *piVar14) - (int)puVar9;
      lVar15 = 2;
      do {
        *puVar9 = *(unsigned int *)(iVar6 + (int)puVar9);
        puVar9 = puVar9 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if ((int)(unsigned int)uVar1 < *(int *)(iVar2 + 0x54)) {
      iVar6 = *(int *)((unsigned int)uVar1 * 8 + *piVar14);
      *(unsigned short *)((3 - (unsigned int)(iVar2 == *(int *)(iVar6 + 0x10))) * 2 + iVar6) = uVar1;
    }
    iVar6 = fn_82CE5410();
    uVar10 = *(int *)(iVar2 + 0x54) + 3;
    uVar8 = uVar10 >> 0x10;
    uVar3 = (uVar8 | uVar10) >> 8;
    uVar4 = (uVar3 | uVar8 | uVar10) >> 4;
    uVar5 = (uVar4 | uVar3 | uVar8 | uVar10) >> 2;
    if ((int)(((uVar5 | uVar4 | uVar3 | uVar8 | uVar10) >> 1 |
              uVar5 | uVar4 | (uVar8 | uVar10) >> 8 | uVar10 >> 0x10 | uVar10) + 1) <
        (int)(*(unsigned int *)(iVar2 + 0x58) & 0x3fffffff)) {
      fn_82CE6460(*(unsigned int *)(iVar6 + 0x10),piVar14,8,0);
    }
    lVar11 = lVar11 + -1;
    piVar13 = piVar13 + 1;
    puVar12 = puVar12 + 1;
  } while (lVar11 != 0);
  fn_82D7C4B0(param_1,param_2);
  return;
}

