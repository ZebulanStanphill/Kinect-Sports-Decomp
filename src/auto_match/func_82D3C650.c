#define TBLr 0
extern int fn_82D3C3E0();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


unsigned __int64 fn_82D3C650(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = "TtrcSphere";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  fn_82D3C3E0((double)*(float *)(param_2 + 0x10),param_1);
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar3 + 4);
  if (puVar1 < *(unsigned int **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(unsigned int **)(iVar3 + 4) = puVar1 + 3;
  }
  return param_1;
}

