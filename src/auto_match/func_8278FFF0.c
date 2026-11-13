extern int fn_82F66A80();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_82015610;
extern unsigned int lbl_82015618;


void fn_8278FFF0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned short uVar1;
  float *pfVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned short *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  pfVar3 = (float *)fn_82F6A548();
  if (param_3 == 0) {
code_r0x82790010:
    uVar2 = 0;
  }
  else {
    uVar5 = ((unsigned __int64)param_3 & 0x7fffffff) * 2 + param_2;
    dVar7 = lbl_8200E890;
    if ((*(short *)param_2 == 0x2d) || (dVar7 = lbl_82005758, *(short *)param_2 == 0x2b)) {
      param_2 = param_2 + 2;
    }
    dVar8 = lbl_82015618;
    dVar9 = lbl_82005710;
    dVar10 = lbl_82005710;
    if ((param_2 & 0xffffffff) < (uVar5 & 0xffffffff)) {
      do {
        puVar6 = (unsigned short *)param_2;
        uVar1 = *puVar6;
        if ((uVar1 == 0x2e) || (uVar1 == 0x2c)) break;
        iVar4 = fn_82F66A80();
        if (iVar4 == 0) goto code_r0x82790010;
        param_2 = param_2 + 2;
        dVar10 = dVar10 * dVar8 + (double)(__int64)(int)(*puVar6 - 0x30);
      } while ((param_2 & 0xffffffff) < (uVar5 & 0xffffffff));
      if (((param_2 & 0xffffffff) < (uVar5 & 0xffffffff)) &&
         ((*(short *)param_2 == 0x2e || (*(short *)param_2 == 0x2c)))) {
        param_2 = param_2 + 2;
        dVar8 = lbl_82015610;
        if ((param_2 & 0xffffffff) < (uVar5 & 0xffffffff)) {
          do {
            puVar6 = (unsigned short *)param_2;
            iVar4 = fn_82F66A80(*puVar6);
            if (iVar4 == 0) goto code_r0x82790010;
            param_2 = param_2 + 2;
            dVar9 = ((double)(__int64)(int)(*puVar6 - 0x30) + dVar9) * dVar8;
          } while ((param_2 & 0xffffffff) < (uVar5 & 0xffffffff));
        }
        dVar10 = dVar9 + dVar10;
      }
    }
    uVar2 = 1;
    *pfVar3 = (float)(dVar7 * dVar10);
  }
  fn_82F6A594(uVar2);
  return;
}

