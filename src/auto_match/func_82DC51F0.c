#define TBLr 0
extern int fn_82CE8AF0();
extern int fn_82CE8E78();
extern int fn_830ABD78();
extern int fn_830B1390();
extern unsigned int iStack_a8;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_8a;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_ba;
extern unsigned int uStack_bc;
extern unsigned int uStack_be;
extern unsigned int uStack_bf;
extern unsigned int uStack_c0;


void fn_82DC51F0(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned char uStack_c0;
  unsigned char uStack_bf;
  unsigned char uStack_be;
  unsigned short uStack_bc;
  unsigned short uStack_ba;
  unsigned short uStack_b0;
  unsigned int uStack_ac;
  int iStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_90;
  unsigned short uStack_8c;
  unsigned short uStack_8a;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(unsigned int **)(iVar3 + 4);
  if (puVar5 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar5 = "LtIntegrate";
    puVar5[3] = "StSolve";
    uVar2 = TBLr;
    puVar5[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar5 + 4;
  }
  iVar3 = *(int *)(param_3 + 0x20);
  iVar4 = *(int *)(param_3 + 0x28);
  iVar1 = *(int *)(param_3 + 0x2c);
  uVar6 = (((unsigned __int64)*(unsigned int *)(param_3 + 0x38) & 0x3fffffff) * 4 + 0xf & 0xffffffff) >> 4;
  if ((int)uVar6 != 0) {
    puVar5 = (unsigned int *)(*(int *)(param_3 + 0x30) + iVar3 + -4);
    do {
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5 = puVar5 + 4;
      *puVar5 = 0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  fn_830ABD78((unsigned __int64)*param_1 + 0x1e0,iVar1 + iVar3,iVar4 + iVar3);
  uStack_b0 = *(unsigned short *)(param_3 + 0x10);
  uStack_c0 = 0xb;
  uStack_ac = *(unsigned int *)(param_3 + 0x14);
  uStack_bf = 0;
  uStack_be = 2;
  uStack_bc = 0x40;
  uStack_ba = 0xffff;
  iVar3 = *(int *)(param_3 + 0x18);
  uStack_a4 = *(unsigned int *)(param_3 + 0x1c);
  uStack_a0 = *(unsigned int *)(iVar3 + 0x78);
  uStack_8a = 0;
  uStack_8c = *(unsigned short *)(iVar3 + 0x54);
  uStack_90 = *(unsigned int *)(iVar3 + 0x14);
  iStack_a8 = iVar3;
  fn_82CE8AF0(param_2,&uStack_c0,0);
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(unsigned int **)(iVar4 + 4);
  if (puVar5 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar5 = "StSolverExport";
    uVar2 = TBLr;
    puVar5[1] = (int)uVar2;
    *(unsigned int **)(iVar4 + 4) = puVar5 + 3;
  }
  fn_830B1390((unsigned __int64)*param_1 + 0x1e0,*(unsigned int *)(iVar3 + 0x40),
                  *(unsigned int *)(iVar3 + 0x3c),*(unsigned int *)(iVar3 + 0x30));
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(unsigned int **)(iVar3 + 4);
  if (puVar5 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar5 = &lbl_8202CF7C;
    uVar2 = TBLr;
    puVar5[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar5 + 3;
  }
  fn_82CE8E78(param_2,param_3,param_3,0);
  return;
}

