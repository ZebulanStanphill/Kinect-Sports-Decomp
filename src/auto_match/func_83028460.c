extern int fn_83007F58();
extern int fn_830195D8();
extern int fn_8301E178();
extern int fn_83028018();
extern int fn_830280E8();
extern unsigned int lbl_82002C5C;


unsigned __int64 fn_83028460(int param_1,char *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  char cVar8;
  unsigned int *puVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  double dVar14;
  double dVar15;
  
  uVar13 = 2;
  *(unsigned char *)(param_1 + 0x61) = (*param_2 != '\0') << 7 | *(unsigned char *)(param_1 + 0x61) & 0x7f;
  dVar14 = (double)fn_8301E178((double)*(float *)(param_2 + 4));
  dVar15 = (double)lbl_82002C5C;
  *(float *)(param_1 + 0x10) = (float)(dVar14 * dVar15);
  dVar14 = (double)fn_8301E178((double)*(float *)(param_2 + 8));
  *(float *)(param_1 + 0x14) = (float)(dVar14 * dVar15);
  *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_2 + 0xc);
  uVar12 = 0;
  *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_2 + 0x10);
  *(char *)(param_1 + 0x5c) = param_2[0x14];
  *(char *)(param_1 + 0x5d) = param_2[0x15];
  *(char *)(param_1 + 0x5e) = param_2[0x16];
  *(char *)(param_1 + 0x5f) = param_2[0x17];
  *(char *)(param_1 + 0x60) = param_2[0x18];
  if (*(int *)(param_2 + 0x1c) != 0) {
    iVar11 = 0;
    do {
      puVar9 = (unsigned int *)(iVar11 + *(int *)(param_2 + 0x20));
      uVar13 = fn_830195D8(param_1 + 0x20 + iVar11,puVar9[2],puVar9[1],*puVar9);
      if ((int)uVar13 != 1) break;
      uVar12 = uVar12 + 1;
      iVar11 = iVar11 + 0xc;
    } while (uVar12 < *(unsigned int *)(param_2 + 0x1c));
  }
  fn_830280E8(param_1);
  uVar12 = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    iVar11 = 0;
    do {
      uVar13 = 1;
      iVar10 = iVar11 + *(int *)(param_2 + 0x28);
      uVar1 = *(unsigned int *)(iVar10 + 0xc);
      uVar2 = *(unsigned int *)(iVar10 + 8);
      iVar3 = *(int *)(iVar10 + 0x18);
      iVar4 = *(int *)(iVar10 + 0x14);
      uVar5 = *(unsigned int *)(iVar10 + 0x10);
      uVar6 = *(unsigned int *)(iVar10 + 4);
      fn_83028018(param_1,uVar2,uVar1);
      uVar7 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100) >> 5;
      if (((uVar7 < *(unsigned int *)(param_1 + 0x6c)) ||
          (cVar8 = fn_83007F58((int *)(param_1 + 100),2), cVar8 != '\0')) &&
         (uVar7 < *(unsigned int *)(param_1 + 0x6c))) {
        iVar10 = *(int *)(param_1 + 0x68);
        if (iVar10 != 0) {
          *(unsigned int *)(iVar10 + 0x14) = 0;
          *(unsigned int *)(iVar10 + 0x18) = 0;
          *(unsigned int *)(iVar10 + 0x1c) = 0;
        }
        puVar9 = *(unsigned int **)(param_1 + 0x68);
        *(unsigned int **)(param_1 + 0x68) = puVar9 + 8;
        if (puVar9 == (unsigned int *)0x0) goto LAB_8302864c;
        puVar9[3] = uVar2;
        puVar9[4] = uVar1;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = uVar6;
        if ((iVar4 != 0) && (iVar3 != 0)) {
          uVar13 = fn_830195D8(puVar9 + 5,iVar4,iVar3,uVar5);
        }
      }
      else {
LAB_8302864c:
        uVar13 = 2;
      }
      if ((int)uVar13 != 1) {
        return uVar13;
      }
      uVar12 = uVar12 + 1;
      iVar11 = iVar11 + 0x1c;
    } while (uVar12 < *(unsigned int *)(param_2 + 0x24));
  }
  return uVar13;
}

