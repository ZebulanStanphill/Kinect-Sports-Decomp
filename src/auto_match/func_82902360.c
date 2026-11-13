extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6DFB0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82005F78;
extern unsigned int lbl_8200E890;


void fn_82902360(unsigned __int64 param_1,unsigned __int64 param_2,double *param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar4;
  unsigned __int64 uVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_50;
  double dStack_48;
  
  iVar4 = fn_82F6A548();
  dVar5 = lbl_82005710;
  puVar2 = *(unsigned int **)(*(int *)(*(int *)(iVar4 + 8) + 0x14) + (int)((param_2 & 0xffffffff) << 2));
  uVar1 = *puVar2;
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 0x80) == 0) {
      dStack_50 = *(double *)(iVar4 + 0xb0);
      dStack_48 = *(double *)(iVar4 + 0xa8);
      if ((uVar1 & 4) == 0) {
        if (lbl_82005710 <= dStack_50) {
          *puVar2 = uVar1 | 4;
        }
      }
      else {
        if (dStack_50 <= lbl_82005710) {
          dStack_50 = lbl_82005710;
        }
        if (dStack_48 <= lbl_82005710) {
          dStack_48 = lbl_82005710;
        }
      }
      dVar6 = dStack_48;
      if ((*puVar2 & 8) == 0) {
        if (dStack_48 <= dVar5) {
          *puVar2 = *puVar2 | 8;
        }
      }
      else {
        dVar6 = dVar5;
        if (dStack_50 < 0.0) {
          dVar6 = dStack_50;
        }
        dStack_50 = dVar6;
        dVar6 = dVar5;
        if (dStack_48 < 0.0) {
          dVar6 = dStack_48;
        }
      }
      dStack_48 = dVar6;
      dVar6 = lbl_82005758;
      if ((*puVar2 & 0x10) == 0) {
        if ((lbl_8200E890 <= dStack_50) && (dStack_48 <= lbl_82005758)) {
          *puVar2 = *puVar2 | 0x10;
        }
      }
      else {
        if (dStack_50 <= lbl_8200E890) {
          dStack_50 = lbl_8200E890;
        }
        if (dStack_48 <= lbl_8200E890) {
          dStack_48 = lbl_8200E890;
        }
        if (lbl_82005758 <= dStack_50) {
          dStack_50 = lbl_82005758;
        }
        if (lbl_82005758 <= dStack_48) {
          dStack_48 = lbl_82005758;
        }
      }
      dVar7 = dStack_48;
      dVar8 = dStack_50;
      if ((dStack_50 == dStack_48) && (iVar4 = fn_82F6DFB0(dStack_50), iVar4 != 0)) {
        uVar1 = *puVar2;
        *puVar2 = uVar1 | 0x80;
        if ((dVar8 == dVar5) || (dVar8 == dVar6)) {
          *puVar2 = uVar1 | 0x81;
        }
        if (ABS(dVar8 - (double)(__int64)(int)dVar8) < lbl_82005F78) {
          *puVar2 = *puVar2 | 2;
        }
      }
      *(double *)(puVar2 + 8) = dVar8;
      *(double *)(puVar2 + 10) = dVar7;
      *puVar2 = *puVar2 | 0x100;
      if (param_3 != (double *)0x0) {
        *param_3 = dStack_50;
        param_3[1] = dStack_48;
      }
      uVar3 = 0xffffffff80004005;
      goto code_r0x829025a0;
    }
    if (param_3 != (double *)0x0) {
      *param_3 = *(double *)(puVar2 + 8);
      dVar5 = *(double *)(puVar2 + 8);
      goto code_r0x829023b0;
    }
  }
  else if (param_3 != (double *)0x0) {
    *param_3 = *(double *)(puVar2 + 8);
    dVar5 = *(double *)(puVar2 + 10);
code_r0x829023b0:
    param_3[1] = dVar5;
  }
  uVar3 = 0;
code_r0x829025a0:
  fn_82F6A594(uVar3);
  return;
}

