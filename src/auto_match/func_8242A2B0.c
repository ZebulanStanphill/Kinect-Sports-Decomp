extern unsigned int *auStack_38;
extern unsigned int *auStack_60;
extern int fn_8223C610();
extern int fn_82429898();
extern int fn_82429BA8();
extern int fn_828ABBC0();
extern int fn_828ABF58();
extern unsigned int lbl_821B8BDC;
extern unsigned int lbl_821B8C30;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_3c;
extern unsigned int uStack_6c;


void fn_8242A2B0(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned char **ppuStack_70;
  unsigned int uStack_6c;
  unsigned char auStack_60 [32];
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  unsigned char auStack_38 [56];
  
  uStack_3c = 0;
  ppuStack_40 = &lbl_821B8C30;
  fn_828ABF58(auStack_38,0,0,7);
  iVar1 = param_3 + 8;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  fn_82429898(&ppuStack_40,param_2,iVar1);
  fn_828ABF58(auStack_60,0,4,0x18);
  iVar1 = param_3 + 0xc;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  fn_828ABBC0(auStack_60,param_2,iVar1);
  iVar1 = fn_8223C610(param_2,1,0,0);
  if (iVar1 == 0) {
    if (param_3 != 0) {
      *(unsigned int *)(param_3 + 0x10) = ltcg_pool_0_0f;
    }
  }
  else {
    uStack_6c = 0;
    iVar1 = param_3 + 0x10;
    ppuStack_70 = &lbl_821B8BDC;
    if (param_3 == 0) {
      iVar1 = 0;
    }
    fn_82429BA8(&ppuStack_70,param_2,iVar1);
  }
  return;
}

