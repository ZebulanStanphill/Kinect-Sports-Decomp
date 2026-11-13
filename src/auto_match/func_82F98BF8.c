typedef unsigned char bool;
extern int fn_82F65FB0();
extern int fn_82F98A08();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82005748;
extern unsigned int lbl_8216C674;
extern unsigned int lbl_8216C678;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F98BF8(int param_1,int *param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int iVar3;
  float fVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  double dVar10;
  
  if ((*(char *)(param_1 + 0x3e) != '\0') ||
     ((*(int *)(param_1 + 0x20) != 0 && (*(int *)(param_1 + 0x28) != 0)))) {
    iVar3 = *(int *)(param_1 + 4);
    *(unsigned char *)(param_1 + 0x18) = *(unsigned char *)(iVar3 + 0x14);
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(iVar3 + 8);
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(iVar3 + 0xc);
    *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(iVar3 + 0x10);
    if (*(char *)(param_1 + 0x40) != '\0') {
      *(unsigned int *)(param_1 + 0x10) = lbl_82002AE0;
    }
    fVar4 = lbl_821AAD20;
    if (*(char *)(param_1 + 0x18) == '\0') {
      *(float *)(param_1 + 0xc) = lbl_821AAD20;
    }
    iVar3 = param_2[2];
    if (iVar3 == 0x11) {
      if ((*(char *)(param_1 + 0x18) == '\0') || (*(float *)(param_1 + 0xc) == fVar4)) {
        if ((*(char *)(param_1 + 0x3c) != '\0') || (*(char *)(param_1 + 0x3d) == '\0')) {
          *(unsigned char *)(param_1 + 0x3c) = 0;
          *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x28);
        }
      }
      else if ((*(float *)(param_1 + 0xc) != *(float *)(param_1 + 0x38)) ||
              (*(char *)(param_1 + 0x3d) == '\0')) {
        dVar10 = (double)fn_82F65FB0();
        fVar4 = lbl_82005748;
        if ((float)dVar10 * lbl_8200571C < lbl_8216C678) {
          fVar4 = lbl_8216C674 / ((float)dVar10 * lbl_8200571C);
        }
        *(int *)(param_1 + 0x2c) = (int)(__int64)((float)*(unsigned int *)(param_1 + 0x28) * fVar4);
      }
      uVar1 = *(unsigned short *)((int)param_2 + 0xe);
      uVar2 = *(unsigned short *)(param_2 + 3);
      uVar8 = (unsigned int)uVar2 - (unsigned int)uVar1;
      uVar5 = *(unsigned int *)(param_1 + 0x2c);
      if (uVar8 <= *(unsigned int *)(param_1 + 0x2c)) {
        uVar5 = uVar8;
      }
      uVar7 = 0;
      for (uVar8 = param_2[1]; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
        uVar7 = uVar7 + 1;
      }
      if ((uVar7 & 0xffffffff) != 0) {
        iVar6 = (unsigned int)uVar1 * 4 + *param_2;
        do {
          if (uVar5 != 0) {
            puVar9 = (unsigned int *)(iVar6 + -4);
            uVar8 = uVar5;
            do {
              puVar9 = puVar9 + 1;
              *puVar9 = 0;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          uVar7 = uVar7 - 1;
          iVar6 = (unsigned int)uVar2 * 4 + iVar6;
        } while (uVar7 != 0);
      }
      *(unsigned short *)((int)param_2 + 0xe) = uVar1 + (short)uVar5;
      iVar6 = *(int *)(param_1 + 0x2c) - uVar5;
      *(int *)(param_1 + 0x2c) = iVar6;
      if (iVar6 != 0) {
        param_2[2] = 0x2d;
      }
    }
    fn_82F98A08(param_1,param_2);
    *(bool *)(param_1 + 0x3d) = iVar3 == 0x11;
    *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x14);
    *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_1 + 0x10);
    *(unsigned int *)(param_1 + 0x38) = *(unsigned int *)(param_1 + 0xc);
  }
  return;
}

