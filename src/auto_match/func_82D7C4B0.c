extern int fn_82CE5410();
extern int fn_82CE6460();


void fn_82D7C4B0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  
  iVar8 = *(int *)(param_1[2] * 4 + param_1[1] + -4) + *param_1;
  if (param_2 != (unsigned int *)(iVar8 + -0x80)) {
    *param_2 = *(unsigned int *)(iVar8 + -0x80);
    param_2[1] = *(unsigned int *)(iVar8 + -0x7c);
    param_2[2] = *(unsigned int *)(iVar8 + -0x78);
    param_2[3] = *(unsigned int *)(iVar8 + -0x74);
    param_2[4] = *(unsigned int *)(iVar8 + -0x70);
    param_2[5] = *(unsigned int *)(iVar8 + -0x6c);
    param_2[6] = *(unsigned int *)(iVar8 + -0x68);
    param_2[7] = *(unsigned int *)(iVar8 + -100);
    param_2[8] = *(unsigned int *)(iVar8 + -0x60);
    param_2[9] = *(unsigned int *)(iVar8 + -0x5c);
    param_2[10] = *(unsigned int *)(iVar8 + -0x58);
    param_2[0xb] = *(unsigned int *)(iVar8 + -0x54);
    param_2[0xc] = *(unsigned int *)(iVar8 + -0x50);
    param_2[0xd] = *(unsigned int *)(iVar8 + -0x4c);
    param_2[0xe] = *(unsigned int *)(iVar8 + -0x48);
    param_2[0xf] = *(unsigned int *)(iVar8 + -0x44);
    param_2[0x10] = *(unsigned int *)(iVar8 + -0x40);
    param_2[0x11] = *(unsigned int *)(iVar8 + -0x3c);
    param_2[0x12] = *(unsigned int *)(iVar8 + -0x38);
    param_2[0x13] = *(unsigned int *)(iVar8 + -0x34);
    param_2[0x14] = *(unsigned int *)(iVar8 + -0x30);
    param_2[0x15] = *(unsigned int *)(iVar8 + -0x2c);
    param_2[0x16] = *(unsigned int *)(iVar8 + -0x28);
    param_2[0x17] = *(unsigned int *)(iVar8 + -0x24);
    param_2[0x18] = *(unsigned int *)(iVar8 + -0x20);
    param_2[0x19] = *(unsigned int *)(iVar8 + -0x1c);
    param_2[0x1a] = *(unsigned int *)(iVar8 + -0x18);
    param_2[0x1b] = *(unsigned int *)(iVar8 + -0x14);
    param_2[0x1c] = *(unsigned int *)(iVar8 + -0x10);
    param_2[0x1d] = *(unsigned int *)(iVar8 + -0xc);
    param_2[0x1e] = *(unsigned int *)(iVar8 + -8);
    param_2[0x1f] = *(unsigned int *)(iVar8 + -4);
    uVar1 = *(unsigned short *)((int)param_2 + 6);
    *(unsigned int **)((unsigned int)*(unsigned short *)(param_2 + 1) * 8 + *(int *)(param_2[4] + 0x50)) = param_2;
    *(unsigned int **)((unsigned int)uVar1 * 8 + *(int *)(param_2[5] + 0x50)) = param_2;
  }
  uVar2 = *param_1;
  *param_1 = (unsigned int)((unsigned __int64)uVar2 - 0x80);
  if ((unsigned __int64)uVar2 - 0x80 == 0) {
    uVar3 = *(unsigned int *)(param_1[2] * 4 + param_1[1] + -4);
    param_1[2] = param_1[2] - 1;
    iVar8 = fn_82CE5410();
    (**(int (***)())(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),uVar3,0x200);
    *param_1 = 0x200;
  }
  if ((param_1[3] & 0x80000000) == 0) {
    uVar10 = (unsigned __int64)param_1[2] + 3;
    uVar4 = (uVar10 & 0xffffffff) >> 0x10;
    uVar5 = (uVar4 | uVar10 & 0xffffffff) >> 8;
    uVar6 = (uVar5 | uVar4 | uVar10 & 0xffffffff) >> 4;
    uVar7 = (uVar6 | uVar5 | uVar4 | uVar10 & 0xffffffff) >> 2;
    lVar11 = ((uVar7 | uVar6 | uVar5 | uVar4 | uVar10 & 0xffffffff) >> 1 |
             uVar7 | uVar6 | uVar5 | uVar4 | uVar10) + 1;
    if ((int)lVar11 < 1) {
      iVar8 = fn_82CE5410();
      lVar11 = 1;
      puVar9 = param_1 + 4;
    }
    else {
      if ((int)(param_1[3] & 0x3fffffff) <= (int)lVar11) {
        return;
      }
      iVar8 = fn_82CE5410();
      puVar9 = (unsigned int *)0x0;
    }
    fn_82CE6460(*(unsigned int *)(iVar8 + 0x10),param_1 + 1,4,puVar9,lVar11);
  }
  return;
}

