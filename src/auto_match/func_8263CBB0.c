#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8264B4A0();
extern unsigned int uStack_70;


void fn_8263CBB0(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 *puVar7;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar8;
  unsigned int uVar11;
  int iVar12;
  unsigned int *puVar13;
  unsigned int uStack_70;
  
  iVar5 = (param_2 + 0xc6c) * 4;
  iVar12 = (param_2 + 0x30) * 0x18;
  puVar4 = *(unsigned int **)(iVar5 + param_1);
  if (param_3 == 0) {
    *(unsigned int *)(iVar12 + param_1) = *(unsigned int *)(iVar12 + param_1) & 0xfffffffc;
  }
  else {
    uVar1 = *(unsigned int *)(param_3 + 0x30);
    puVar13 = (unsigned int *)(iVar12 + param_1);
    uVar11 = *(unsigned int *)(param_3 + 0x20);
    uVar2 = *(unsigned int *)(param_3 + 0x2c);
    uVar10 = *(unsigned int *)(param_3 + 0x1c);
    uVar3 = *(unsigned int *)(param_3 + 0x28);
    puVar13[2] = *(unsigned int *)(param_3 + 0x24);
    uVar6 = puVar13[4] & 0xfffffc03;
    uVar9 = (unsigned int)*(unsigned char *)(param_1 + param_2 + 0x2f5e);
    puVar13[4] = uVar6 | uVar2 & 0x3fc;
    *puVar13 = *puVar13 & 0x3ffc00 | uVar10 & 0xffc003ff;
    puVar13[1] = puVar13[1] & 0x800 |
                 ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1fffffff) & 0xfffff7ff;
    puVar13[3] = puVar13[3] & 0x7ff80000 | uVar3 & 0x8007ffff;
    puVar13[5] = puVar13[5] & 0x1ff | ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1ffffe00);
    if (uVar9 < (uVar2 >> 2 & 0xf)) {
      uVar9 = uVar2 >> 2 & 0xf;
    }
    uVar1 = (uVar9 & 0xf) << 2;
    uVar11 = (unsigned int)*(unsigned char *)(param_1 + param_2 + 0x2f78);
    uVar10 = *(unsigned int *)(param_3 + 0x2c) >> 6 & 0xf;
    puVar13[4] = uVar1 | uVar6 | uVar2 & 0x3c0;
    if (uVar10 < uVar11) {
      uVar11 = uVar10;
    }
    uVar8 = *(unsigned __int64 *)(param_1 + 0x18);
    puVar13[4] = (uVar11 & 0xf) << 6 | uVar1 | uVar6;
    *(unsigned __int64 *)(param_1 + 0x18) = uVar8 | param_4;
  }
  *(int *)(iVar5 + param_1) = param_3;
  if (puVar4 != (unsigned int *)0x0) {
    if (*(unsigned int *)(param_1 + 0x2a9c) == 0) {
      if ((*(unsigned int *)(param_1 + 0x2aa0) & *puVar4) != 0) {
        puVar7 = *(unsigned __int64 **)(param_1 + 0x35a8);
        if (*(unsigned __int64 **)(param_1 + 0x35ac) <= puVar7) {
          puVar7 = (unsigned __int64 *)fn_8264B4A0(param_1);
        }
        *puVar7 = CONCAT44((unsigned int)puVar4 >> 2 | uStack_70 & 0x80000000,0xffffffff);
        *(unsigned __int64 **)(param_1 + 0x35a8) = puVar7 + 1;
      }
    }
    else {
      puVar4[2] = *(unsigned int *)(param_1 + 0x2a9c);
    }
  }
  return;
}

