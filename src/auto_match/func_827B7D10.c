typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT42(h,l) ((unsigned __int64)((((unsigned int)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT62(h,l) ((unsigned __int64)((((unsigned __int64)(h)) << 16) | ((unsigned short)(l))))
extern int fn_827B7AE0();


int fn_827B7D10(int param_1,int *param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned int *puVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = param_2[7];
  iVar9 = param_2[4];
  bVar7 = true;
  if (iVar9 == iVar3 + 8) {
    iVar9 = param_2[3];
    bVar7 = false;
    if (iVar9 == iVar3 + 8) {
      return 0;
    }
  }
  puVar4 = (unsigned int *)param_2[2];
  piVar5 = *(int **)(iVar9 + 8);
  fn_827B7AE0(param_1,param_2);
  uVar1 = *(unsigned short *)((int)param_2 + 0x22);
  uVar2 = *(unsigned short *)(param_2 + 9);
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  if ((*(unsigned short *)(param_2 + 8) & 0x4000) == 0) {
    *(int *)(param_2[5] + 0x18) = param_2[6];
    *(int *)(param_2[6] + 0x14) = param_2[5];
  }
  bVar6 = false;
  *(int *)(param_2[3] + 0x10) = param_2[4];
  *(int *)(param_2[4] + 0xc) = param_2[3];
  *param_2 = *(int *)(param_1 + 0x28);
  *(int **)(param_1 + 0x28) = param_2;
  if (((*piVar5 == 0) && (piVar5[5] == 0)) &&
     (*(short *)((int)piVar5 + 0x1e) == *(short *)(iVar3 + 4))) {
    if (bVar7) {
      iVar8 = (unsigned int)*(unsigned short *)(piVar5 + 6) - ((unsigned int)uVar2 + (unsigned int)uVar1);
    }
    else {
      iVar8 = (unsigned int)uVar1 - ((unsigned int)*(unsigned short *)(piVar5 + 7) + (unsigned int)*(unsigned short *)(piVar5 + 6));
    }
    bVar6 = iVar8 == 0;
  }
  if (bVar6) {
    *puVar4 = *(unsigned int *)(param_1 + 0x70);
    *(unsigned int **)(param_1 + 0x70) = puVar4;
    if (bVar7) {
      *(unsigned short *)(piVar5 + 6) = uVar1;
    }
    *(unsigned short *)(piVar5 + 7) = *(short *)(piVar5 + 7) + uVar2;
  }
  else {
    puVar4[3] = iVar9;
    puVar4[5] = 0;
    puVar4[4] = piVar5;
    *(unsigned __int64 *)(puVar4 + 6) =
         CONCAT62(CONCAT42(CONCAT22(uVar1,*(unsigned short *)(iVar3 + 2)),uVar2),
                  *(unsigned short *)(iVar3 + 4));
    *(unsigned int **)(iVar9 + 8) = puVar4;
  }
  if (bVar7) {
    *(unsigned short *)(iVar9 + 0x22) = uVar1;
  }
  *(unsigned short *)(iVar9 + 0x24) = *(short *)(iVar9 + 0x24) + uVar2;
  if ((*(unsigned short *)(iVar9 + 0x20) & 0x4000) != 0) {
    *(unsigned short *)(iVar9 + 0x26) = 0;
    *(unsigned short *)(iVar9 + 0x20) = *(unsigned short *)(iVar9 + 0x20) & 0xbfff;
    *(unsigned int *)(iVar9 + 0x18) = *(unsigned int *)(param_1 + 0x54);
    *(int *)(iVar9 + 0x14) = param_1 + 0x3c;
    *(int *)(*(int *)(param_1 + 0x54) + 0x14) = iVar9;
    *(int *)(param_1 + 0x54) = iVar9;
  }
  return iVar9;
}

