extern int fn_827797D8();
extern unsigned int lbl_82005328;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82779958(int param_1,float *param_2,float *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  unsigned __int64 uStack_30;
  
  dVar3 = (double)lbl_821AAD20;
  dVar1 = dVar3;
  if (*(unsigned char *)(param_1 + 1) != 0) {
    uStack_40 = (double)(__int64)(int)(unsigned int)*(unsigned char *)(param_1 + 1);
    dVar1 = (double)((float)(__int64)uStack_40 * lbl_82005328);
  }
  dVar2 = dVar3;
  if (*(unsigned char *)(param_1 + 2) != 0) {
    uStack_40 = (double)(__int64)(int)(unsigned int)*(unsigned char *)(param_1 + 2);
    dVar2 = (double)((float)(__int64)uStack_40 * lbl_82005328);
  }
  if (*(unsigned char *)(param_1 + 3) != 0) {
    uStack_40 = (double)(__int64)(int)(unsigned int)*(unsigned char *)(param_1 + 3);
    dVar3 = (double)((float)(__int64)uStack_40 * lbl_82005328);
  }
  fn_827797D8(dVar1,dVar2,dVar3);
  *param_2 = (float)uStack_40;
  *param_3 = (float)uStack_38;
  *param_4 = (float)uStack_30;
  return;
}

