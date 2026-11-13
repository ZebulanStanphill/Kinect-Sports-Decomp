#define TBLr 0
extern int fn_82CE8B30();
extern int fn_83097830();
extern unsigned int iStack_a8;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_ca;
extern unsigned int uStack_cc;
extern unsigned int uStack_ce;
extern unsigned int uStack_cf;
extern unsigned int uStack_d0;


unsigned __int64 fn_82E010B0(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned int param_6,__int64 param_7)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar8;
  unsigned __int64 uVar7;
  __int64 lVar9;
  int iVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned char uStack_d0;
  unsigned char uStack_cf;
  unsigned char uStack_ce;
  unsigned short uStack_cc;
  unsigned short uStack_ca;
  unsigned int uStack_c0;
  int *piStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int iStack_a8;
  
  iVar8 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar8 + 4);
  if (puVar1 < *(unsigned int **)(iVar8 + 0xc)) {
    *puVar1 = "TtBuildAndAddRaycastJobs";
    uVar6 = TBLr;
    puVar1[1] = (int)uVar6;
    *(unsigned int **)(iVar8 + 4) = puVar1 + 3;
  }
  uVar2 = *(unsigned int *)(param_1 + 0xc);
  uVar3 = *(unsigned int *)(param_2 + 0x7c);
  lVar9 = ((unsigned __int64)*(unsigned short *)(param_1 + 0x14) * 0x50 + 0xf & 0xfffffff0) + param_7;
  lVar11 = ((unsigned __int64)*(unsigned short *)(param_1 + 0x14) * 0x60 + 0xf & 0xfffffff0) + lVar9;
  uVar16 = 0;
  lVar13 = ((unsigned __int64)uVar2 + 0xf & 0xfffffff0) + lVar11;
  iVar8 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar8 + 4);
  if (puVar1 < *(unsigned int **)(iVar8 + 0xc)) {
    *puVar1 = "TtBuildCommands";
    uVar6 = TBLr;
    puVar1[1] = (int)uVar6;
    *(unsigned int **)(iVar8 + 4) = puVar1 + 3;
  }
  iVar8 = 0;
  if (0 < (int)uVar2) {
    iVar10 = 0;
    lVar14 = param_7;
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 8) + iVar10);
      piVar4 = *(int **)(iVar5 + 0x3c);
      uVar7 = (**(int (***)())(*piVar4 + 0x30))(piVar4,iVar5,uVar3,param_3,lVar14,lVar9);
      iVar5 = (int)lVar11;
      if ((int)uVar7 < 1) {
        *(unsigned char *)(iVar5 + iVar8) = 0;
      }
      else {
        *(char *)(iVar5 + iVar8) = (char)uVar7;
        uVar16 = uVar7 + uVar16;
        lVar14 = (uVar7 + (uVar7 & 0x3fffffff) * 4 & 0xfffffff) * 0x10 + lVar14;
        lVar9 = (uVar7 + (uVar7 & 0x7fffffff) * 2 & 0x7ffffff) * 0x20 + lVar9;
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar8 < (int)uVar2);
  }
  iVar8 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar8 + 4);
  if (puVar1 < *(unsigned int **)(iVar8 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar6 = TBLr;
    puVar1[1] = (int)uVar6;
    *(unsigned int **)(iVar8 + 4) = puVar1 + 3;
  }
  iVar8 = (int)uVar16;
  if (iVar8 <= (int)param_4) {
    param_4 = uVar16;
  }
  iVar10 = (int)param_4;
  uVar7 = param_4 & ~(((uVar16 & 0x7fffffff) << 1 | (uVar16 & 0xffffffff) >> 0x1f) - 1);
  uVar12 = uVar16 - (__int64)(iVar8 / iVar10) * (__int64)iVar10;
  trapWord(6,param_4,0);
  trapWord(6,param_4,0);
  trapWord(5,param_4 & ~(((uVar16 & 0x7fffffff) << 1 | (uVar16 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar7,0xffff);
  uVar16 = 0;
  if (0 < iVar10) {
    do {
      uStack_b4 = *(unsigned int *)(param_2 + 0x78);
      piStack_bc = (int *)lVar13;
      uStack_ac = (unsigned int)param_7;
      uStack_d0 = 0;
      uStack_cf = 3;
      uStack_cc = 0x30;
      uStack_ca = 0xffff;
      uVar15 = (((~(uVar12 ^ uVar16) & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar12 <= uVar16) & 1) +
               (__int64)(iVar8 / iVar10);
      uStack_b8 = 0;
      uStack_ce = 1;
      iStack_a8 = (int)uVar15;
      uStack_b0 = 0x5a;
      *piStack_bc = (iStack_a8 + -1) / 0x5a + 1;
      uStack_c0 = param_6;
      fn_83097830(&uStack_d0,uVar7);
      fn_82CE8B30(param_5,&uStack_d0,1);
      uVar16 = uVar16 + 1;
      uVar7 = uVar15 + (uVar15 & 0x3fffffff) * 4;
      lVar13 = lVar13 + 0x10;
      param_7 = (uVar7 & 0xfffffff) * 0x10 + param_7;
    } while ((int)uVar16 < iVar10);
  }
  iVar8 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar8 + 4);
  if (puVar1 < *(unsigned int **)(iVar8 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar6 = TBLr;
    puVar1[1] = (int)uVar6;
    *(unsigned int **)(iVar8 + 4) = puVar1 + 3;
  }
  return param_4;
}

