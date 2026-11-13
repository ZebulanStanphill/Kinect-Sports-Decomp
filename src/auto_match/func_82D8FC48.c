typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82D7D9D8();
extern int fn_82D80B88();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D903E0();
extern int fn_82DAF6C8();
extern int fn_82DAF730();


void fn_82D8FC48(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int *piVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  unsigned int *puVar9;
  int iVar10;
  char cVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  int *piVar15;
  __int64 lVar16;
  int iVar17;
  unsigned int *puVar18;
  
  puVar18 = param_2;
  if (((int)param_2[0x13] <= (int)param_3[0x13]) &&
     (((int)param_2[0x13] < (int)param_3[0x13] ||
      (*(unsigned short *)(param_3 + 8) < *(unsigned short *)(param_2 + 8))))) {
    puVar18 = param_3;
    param_3 = param_2;
  }
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  bVar1 = *(unsigned char *)((int)puVar18 + 0x26);
  if ((bVar1 >> 6 != 0) || (bVar6 = false, (*(unsigned char *)((int)param_3 + 0x26) & 0xc0) != 0)) {
    bVar6 = true;
  }
  if ((bVar1 & 0x30) == 0) {
    cVar7 = '\0';
    if ((*(unsigned char *)((int)param_3 + 0x26) & 0x30) != 0) goto LAB_82d8fce8;
  }
  else {
LAB_82d8fce8:
    cVar7 = '\x01';
  }
  if (bVar6) {
    if (bVar1 >> 6 == 0) {
      *(unsigned char *)((int)puVar18 + 0x26) = bVar1 & 0xcf | 0x10;
      puVar9 = puVar18;
    }
    else {
      if ((*(unsigned char *)((int)param_3 + 0x26) & 0xc0) != 0) goto LAB_82d8fd50;
      *(unsigned char *)((int)param_3 + 0x26) = *(unsigned char *)((int)param_3 + 0x26) & 0xcf | 0x10;
      puVar9 = param_3;
    }
    fn_82D903E0(param_1,puVar9,0);
  }
LAB_82d8fd50:
  *(unsigned char *)((int)puVar18 + 0x25) =
       *(unsigned char *)((int)param_3 + 0x25) & 0x30 | *(unsigned char *)((int)puVar18 + 0x25);
  fn_82DAF6C8(puVar18);
  fn_82DAF6C8(param_3);
  fn_82DAF6C8(*(unsigned int *)(param_1 + 0x20));
  fn_82D7D9D8(puVar18 + 0x16,param_3 + 0x16);
  uVar3 = puVar18[0x13];
  lVar16 = (unsigned __int64)(unsigned int)param_3[0x13] + (unsigned __int64)uVar3;
  iVar8 = fn_82CE5410();
  iVar17 = (int)lVar16;
  if ((int)(puVar18[0x14] & 0x3fffffff) < iVar17) {
    lVar12 = ((unsigned __int64)(unsigned int)puVar18[0x14] & 0x3fffffff) << 1;
    if ((int)lVar12 <= iVar17) {
      lVar12 = lVar16;
    }
    fn_82CE6310(*(unsigned int *)(iVar8 + 0x10),puVar18 + 0x12,lVar12,4);
  }
  puVar18[0x13] = iVar17;
  iVar8 = 0;
  if (0 < (int)param_3[0x13]) {
    iVar17 = 0;
    do {
      iVar8 = iVar8 + 1;
      *(unsigned int *)((uVar3 & 0xffff) * 4 + puVar18[0x12]) =
           *(unsigned int *)(iVar17 + param_3[0x12]);
      *(unsigned int **)(*(int *)(iVar17 + param_3[0x12]) + 0xcc) = puVar18;
      piVar15 = (int *)(iVar17 + param_3[0x12]);
      iVar17 = iVar17 + 4;
      *(short *)(*piVar15 + 0xa8) = (short)uVar3;
      uVar3 = (uVar3 & 0xffff) + 1;
    } while (iVar8 < (int)param_3[0x13]);
  }
  uVar3 = puVar18[0xf];
  uVar13 = (unsigned __int64)uVar3;
  piVar15 = puVar18 + 0xe;
  uVar4 = param_3[0xf];
  iVar8 = fn_82CE5410();
  iVar17 = (int)(uVar13 + uVar4);
  if ((int)(puVar18[0x10] & 0x3fffffff) < iVar17) {
    lVar16 = ((unsigned __int64)(unsigned int)puVar18[0x10] & 0x3fffffff) << 1;
    if ((int)lVar16 <= iVar17) {
      lVar16 = uVar13 + uVar4;
    }
    fn_82CE6310(*(unsigned int *)(iVar8 + 0x10),piVar15,lVar16,4);
  }
  puVar18[0xf] = iVar17;
  iVar8 = 0;
  if (0 < (int)param_3[0xf]) {
    iVar17 = uVar3 << 2;
    iVar10 = 0;
    do {
      if (*(int *)(iVar10 + param_3[0xe]) != 0) {
        uVar13 = uVar13 + 1;
        *(unsigned int *)(iVar17 + *piVar15) = *(unsigned int *)(iVar10 + param_3[0xe]);
        piVar5 = (int *)(iVar17 + *piVar15);
        iVar17 = iVar17 + 4;
        *(unsigned int **)(*piVar5 + 0xc) = puVar18;
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar8 < (int)param_3[0xf]);
  }
  iVar8 = fn_82CE5410();
  iVar17 = (int)uVar13;
  if ((int)(puVar18[0x10] & 0x3fffffff) < iVar17) {
    uVar14 = ((unsigned __int64)(unsigned int)puVar18[0x10] & 0x3fffffff) << 1;
    if ((int)uVar14 <= iVar17) {
      uVar14 = uVar13;
    }
    fn_82CE6310(*(unsigned int *)(iVar8 + 0x10),piVar15,uVar14,4);
  }
  puVar18[0xf] = iVar17;
  iVar8 = 0;
  if (0 < (int)param_3[0x13]) {
    iVar17 = 0;
    do {
      uVar13 = (unsigned __int64)*(unsigned short *)(*(int *)(iVar17 + param_3[0x12]) + 0xb0);
      if (-1 < (__int64)(uVar13 - 1)) {
        piVar15 = (int *)(*(int *)(*(int *)(iVar17 + param_3[0x12]) + 0xac) + -0x30);
        do {
          piVar15 = piVar15 + 0xc;
          *(unsigned int **)(*piVar15 + 8) = puVar18;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      iVar8 = iVar8 + 1;
      iVar17 = iVar17 + 4;
    } while (iVar8 < (int)param_3[0x13]);
  }
  fn_82DAF730(puVar18,param_3);
  puVar18[7] = param_3[7] + puVar18[7];
  piVar15 = (int *)(param_1 + 0x28);
  param_3[7] = 0;
  uVar2 = *(unsigned short *)(param_3 + 8);
  if ((*(unsigned char *)((int)param_3 + 0x26) & 0xc0) == 0) {
    piVar15 = (int *)(param_1 + 0x34);
  }
  if ((int)(unsigned int)uVar2 < piVar15[1] + -1) {
    *(unsigned int *)((unsigned int)uVar2 * 4 + *piVar15) = *(unsigned int *)(piVar15[1] * 4 + *piVar15 + -4);
    *(unsigned short *)(*(int *)(*piVar15 + (unsigned int)uVar2 * 4) + 0x20) = uVar2;
  }
  piVar15[1] = piVar15[1] + -1;
  bVar1 = *(unsigned char *)((int)puVar18 + 0x25);
  if (((bVar1 & 0xc0) != 0) || (cVar11 = '\0', (*(unsigned char *)((int)param_3 + 0x25) & 0xc0) != 0)) {
    cVar11 = '\x01';
  }
  *(unsigned char *)((int)puVar18 + 0x25) = cVar11 << 6 | bVar1 & 0x3f;
  if (((bVar1 & 0xc) != 0) || (cVar11 = '\0', (*(unsigned char *)((int)param_3 + 0x25) & 0xc) != 0)) {
    cVar11 = '\x01';
  }
  *(unsigned char *)((int)puVar18 + 0x25) = cVar11 << 2 | *(unsigned char *)((int)puVar18 + 0x25) & 0xf3;
  *(unsigned char *)((int)puVar18 + 0x26) = cVar7 << 4 | *(unsigned char *)((int)puVar18 + 0x26) & 0xcf;
  if ((*(short *)((int)param_3 + 0x22) != -1) && (*(short *)((int)puVar18 + 0x22) == -1)) {
    *(short *)((int)puVar18 + 0x22) = (short)*(unsigned int *)(param_1 + 0x44);
    iVar8 = fn_82CE5410();
    if (*(unsigned int *)(param_1 + 0x44) == (*(unsigned int *)(param_1 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),(int *)(param_1 + 0x40),4);
    }
    *(unsigned int **)(*(int *)(param_1 + 0x44) * 4 + *(int *)(param_1 + 0x40)) = puVar18;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  if (*(unsigned short *)((int)param_3 + 0x22) != 0xffff) {
    *(unsigned int *)((unsigned int)*(unsigned short *)((int)param_3 + 0x22) * 4 + *(int *)(param_1 + 0x40)) = 0;
    *(unsigned short *)((int)param_3 + 0x22) = 0xffff;
  }
  (**(int (***)())*param_3)(param_3,1);
  if ((*(unsigned char *)((int)puVar18 + 0x26) & 0xc0) != 0) {
    uVar2 = *(unsigned short *)(puVar18 + 8);
    if (uVar2 != 0) {
      iVar8 = **(int **)(param_1 + 0x28);
      if (*(int *)(iVar8 + 0x4c) < (int)puVar18[0x13]) {
        *(unsigned short *)(puVar18 + 8) = 0;
        *(unsigned short *)(iVar8 + 0x20) = uVar2;
        **(unsigned int **)(param_1 + 0x28) = puVar18;
        *(int *)((unsigned int)uVar2 * 4 + *(int *)(param_1 + 0x28)) = iVar8;
      }
    }
  }
  fn_82D80B88(param_1,puVar18);
  lVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94) - 1;
  *(int *)(param_1 + 0x94) = (int)lVar16;
  if ((lVar16 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      fn_82D80C18(param_1);
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
      fn_82D80C30(param_1);
    }
  }
  return;
}

