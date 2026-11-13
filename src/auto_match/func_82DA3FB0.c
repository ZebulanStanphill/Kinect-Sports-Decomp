#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define TBLr 0
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern int fn_82DA3900();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_40;


unsigned __int64 fn_82DA3FB0(double param_1,int param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uStack_40;
  float fStack_38;
  float fStack_34;
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar5 + 4);
  if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
    *puVar1 = "TtPhysics";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
  }
  *(float *)(param_2 + 0x1c) = (float)param_1;
  fStack_38 = (float)((double)(float)((double)*(float *)(param_2 + 0x18) + param_1) -
                     (double)*(float *)(param_2 + 0x18));
  fStack_34 = lbl_821AAD20;
  if (fStack_38 != lbl_821AAD20) {
    fStack_34 = lbl_82002AE0 / fStack_38;
  }
  iVar5 = *(int *)(param_2 + 0xc);
  *(unsigned __int64 *)(iVar5 + 0x1d0) = uStack_40;
  *(unsigned __int64 *)(iVar5 + 0x1d8) = CONCAT44(fStack_38,fStack_34);
  iVar5 = *(int *)(*(int *)(param_2 + 0xc) + 0x78);
  *(unsigned __int64 *)(iVar5 + 0x50) = uStack_40;
  *(unsigned __int64 *)(iVar5 + 0x58) = CONCAT44(fStack_38,fStack_34);
  piVar2 = *(int **)(*(int *)(param_2 + 0xc) + 0x4c);
  (**(int (***)())(*piVar2 + 0x10))(piVar2,*(int *)(param_2 + 0xc),&uStack_40);
  uVar4 = fn_82DA3900(param_2,&uStack_40);
  *(int *)(param_2 + 0x28) = (int)uVar4;
  if ((uVar4 & 0xffffffff) == 0) {
    *(unsigned char *)(param_2 + 0x10) = 0;
  }
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar5 + 4);
  if (puVar1 < *(unsigned int **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar5 + 4) = puVar1 + 3;
  }
  return uVar4;
}

