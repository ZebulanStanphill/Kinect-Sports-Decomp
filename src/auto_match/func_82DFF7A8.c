#define TBLr 0
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_82CE8B30();
extern int fn_82DFF728();
extern int fn_83097810();
extern unsigned int lbl_82021544;
extern unsigned int lbl_82057518;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_100;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_ea;
extern unsigned int uStack_ec;
extern unsigned int uStack_ee;
extern unsigned int uStack_ef;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


unsigned __int64 fn_82DFF7A8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned int param_6,unsigned __int64 param_7)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned __int64 uVar5;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  int *piVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  int *piStack_f4;
  unsigned char uStack_f0;
  unsigned char uStack_ef;
  unsigned char uStack_ee;
  unsigned short uStack_ec;
  unsigned short uStack_ea;
  unsigned int uStack_e0;
  int *piStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar6 + 4);
  if (puVar1 < *(unsigned int **)(iVar6 + 0xc)) {
    *puVar1 = "TtBuildAndAddLinearCastJobs";
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(unsigned int **)(iVar6 + 4) = puVar1 + 3;
  }
  uVar2 = *(unsigned int *)(param_2 + 0x7c);
  uVar3 = *(unsigned int *)(param_1 + 0xc);
  uVar14 = (unsigned __int64)uVar3;
  fn_82DFF728(param_1,param_7,param_4,&uStack_100);
  uVar15 = 0;
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar6 + 4);
  if (puVar1 < *(unsigned int **)(iVar6 + 0xc)) {
    *puVar1 = "TtBuildCommands";
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(unsigned int **)(iVar6 + 4) = puVar1 + 3;
  }
  uVar12 = (unsigned __int64)uStack_fc;
  uVar11 = (unsigned __int64)uStack_100;
  uVar9 = (unsigned __int64)uStack_f8;
  if (0 < (int)uVar3) {
    iVar6 = 0;
    uVar10 = uVar12;
    do {
      iVar8 = *(int *)(iVar6 + *(int *)(param_1 + 8));
      uVar5 = (**(int (***)())(**(int **)(iVar8 + 0x3c) + 0x38))
                        (*(int **)(iVar8 + 0x3c),iVar8,uVar2,uVar11,uVar10,uVar9);
      uVar14 = uVar14 - 1;
      uVar15 = uVar5 + uVar15;
      uVar10 = (uVar5 + (uVar5 & 0x3fffffff) * 4 & 0xfffffff) * 0x10 + uVar10;
      uVar9 = (uVar5 + (uVar5 & 0x7fffffff) * 2 & 0xfffffff) * 0x10 + uVar9;
      uVar11 = (unsigned __int64)*(unsigned char *)(*(int *)(iVar8 + 0x1c) + 0x20) * 0x50 + uVar11;
      iVar6 = iVar6 + 4;
    } while (uVar14 != 0);
  }
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar6 + 4);
  if (puVar1 < *(unsigned int **)(iVar6 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(unsigned int **)(iVar6 + 4) = puVar1 + 3;
  }
  iVar6 = (int)uVar15;
  if (iVar6 <= (int)param_4) {
    param_4 = uVar15;
  }
  iVar8 = (int)param_4;
  uVar14 = uVar15 - (__int64)(iVar6 / iVar8) * (__int64)iVar8;
  trapWord(6,param_4,0);
  trapWord(6,param_4,0);
  trapWord(5,param_4 & ~(((uVar15 & 0x7fffffff) << 1 | (uVar15 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,param_4 & ~(((uVar15 & 0x7fffffff) << 1 | (uVar15 & 0xffffffff) >> 0x1f) - 1),0xffff);
  uVar15 = 0;
  if (0 < iVar8) {
    dVar16 = (double)lbl_82021544;
    dVar17 = (double)lbl_82057518;
    dVar18 = (double)lbl_821AAD20;
    piVar13 = piStack_f4;
    do {
      uStack_d8 = *(unsigned int *)(param_2 + 0x78);
      fStack_d0 = (float)dVar18;
      fStack_cc = (float)dVar17;
      uStack_f0 = 3;
      fStack_c8 = (float)dVar16;
      uStack_ef = 2;
      uStack_ee = 2;
      uVar9 = (((~(uVar14 ^ uVar15) & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar14 <= uVar15) & 1) +
              (__int64)(iVar6 / iVar8);
      uStack_ec = 0x40;
      uStack_bc = (unsigned int)uVar12;
      uStack_ea = 0xffff;
      uStack_b8 = (unsigned int)uVar9;
      iVar7 = (int)(uVar9 - 1);
      uStack_d4 = 0;
      uStack_c0 = 0x80;
      uStack_c4 = 10;
      *piVar13 = (iVar7 >> 7) + (unsigned int)(iVar7 < 0 && (uVar9 - 1 & 0x7f) != 0) + 1;
      uStack_e0 = param_6;
      piStack_dc = piVar13;
      fn_83097810(&uStack_f0);
      fn_82CE8B30(param_5,&uStack_f0,1);
      uVar15 = uVar15 + 1;
      piVar13 = piVar13 + 4;
      uVar12 = (uVar9 + (uVar9 & 0x3fffffff) * 4 & 0xfffffff) * 0x10 + uVar12;
    } while ((int)uVar15 < iVar8);
  }
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar6 + 4);
  if (puVar1 < *(unsigned int **)(iVar6 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(unsigned int **)(iVar6 + 4) = puVar1 + 3;
  }
  return param_4;
}

