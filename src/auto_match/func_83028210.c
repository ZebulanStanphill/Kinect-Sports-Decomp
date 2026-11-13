typedef unsigned char bool;
extern int fn_83007F58();
extern int fn_830195D8();
extern int fn_8301E178();
extern int fn_83028018();
extern unsigned int lbl_82002C5C;


unsigned __int64 fn_83028210(int param_1,int param_2)

{
  unsigned char uVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  char cVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int iVar13;
  float *pfVar14;
  unsigned short *puVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  
  bVar16 = *(char *)(param_2 + 4) != '\0';
  pfVar14 = (float *)(param_2 + 5);
  *(unsigned char *)(param_1 + 0x61) = bVar16 << 7 | *(unsigned char *)(param_1 + 0x61) & 0x7f;
  if (bVar16) {
    dVar17 = (double)fn_8301E178((double)*pfVar14);
    dVar18 = (double)lbl_82002C5C;
    *(float *)(param_1 + 0x10) = (float)(dVar17 * dVar18);
    dVar17 = (double)fn_8301E178((double)*(float *)(param_2 + 9));
    *(float *)(param_1 + 0x14) = (float)(dVar17 * dVar18);
    *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_2 + 0xd);
    pfVar14 = (float *)(param_2 + 0x15);
    *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_2 + 0x11);
  }
  uVar9 = 2;
  uVar12 = 0;
  *(unsigned char *)(param_1 + 0x5c) = *(unsigned char *)pfVar14;
  *(unsigned char *)(param_1 + 0x5d) = *(unsigned char *)((int)pfVar14 + 1);
  *(unsigned char *)(param_1 + 0x5e) = *(unsigned char *)((int)pfVar14 + 2);
  *(unsigned char *)(param_1 + 0x5f) = *(unsigned char *)((int)pfVar14 + 3);
  *(unsigned char *)(param_1 + 0x60) = *(unsigned char *)(pfVar14 + 1);
  bVar2 = *(unsigned char *)((int)pfVar14 + 5);
  puVar15 = (unsigned short *)((int)pfVar14 + 6);
  if (bVar2 != 0) {
    iVar13 = param_1 + 0x20;
    do {
      uVar1 = *(unsigned char *)puVar15;
      uVar3 = *(unsigned short *)((int)puVar15 + 1);
      puVar15 = (unsigned short *)((int)puVar15 + 3);
      uVar9 = fn_830195D8(iVar13,puVar15,(unsigned int)uVar3,uVar1);
      if ((int)uVar9 != 1) break;
      uVar12 = uVar12 + 1;
      iVar13 = iVar13 + 0xc;
      puVar15 = puVar15 + (unsigned int)uVar3 * 6;
    } while (uVar12 < bVar2);
  }
  uVar3 = *puVar15;
  puVar15 = puVar15 + 1;
  uVar12 = 0;
  if (uVar3 != 0) {
    do {
      uVar5 = *(unsigned int *)((int)puVar15 + 5);
      uVar9 = 1;
      uVar6 = *(unsigned int *)((int)puVar15 + 9);
      uVar7 = *(unsigned int *)((int)puVar15 + 0xd);
      uVar1 = *(unsigned char *)((int)puVar15 + 0x11);
      uVar11 = (unsigned int)puVar15[9];
      puVar15 = puVar15 + 10;
      fn_83028018(param_1,uVar6,uVar7);
      uVar8 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100) >> 5;
      if (((uVar8 < *(unsigned int *)(param_1 + 0x6c)) ||
          (cVar10 = fn_83007F58((int *)(param_1 + 100),2), cVar10 != '\0')) &&
         (uVar8 < *(unsigned int *)(param_1 + 0x6c))) {
        iVar13 = *(int *)(param_1 + 0x68);
        if (iVar13 != 0) {
          *(unsigned int *)(iVar13 + 0x14) = 0;
          *(unsigned int *)(iVar13 + 0x18) = 0;
          *(unsigned int *)(iVar13 + 0x1c) = 0;
        }
        puVar4 = *(unsigned int **)(param_1 + 0x68);
        *(unsigned int **)(param_1 + 0x68) = puVar4 + 8;
        if (puVar4 == (unsigned int *)0x0) goto LAB_83028428;
        puVar4[3] = uVar6;
        puVar4[4] = uVar7;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = uVar5;
        if ((puVar15 != (unsigned short *)0x0) && (uVar11 != 0)) {
          uVar9 = fn_830195D8(puVar4 + 5,puVar15,uVar11,uVar1);
        }
      }
      else {
LAB_83028428:
        uVar9 = 2;
      }
      if ((int)uVar9 != 1) {
        return uVar9;
      }
      uVar12 = uVar12 + 1;
      puVar15 = puVar15 + uVar11 * 6;
    } while (uVar12 < uVar3);
  }
  return uVar9;
}

