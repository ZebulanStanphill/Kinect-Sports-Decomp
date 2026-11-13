extern int fn_824DF260();
extern unsigned int lbl_82192480;
extern unsigned int lbl_821C100C;
extern unsigned int lbl_821C1024;
extern unsigned int lbl_821C103C;
extern unsigned int lbl_821C1054;
extern unsigned int lbl_821C107C;
extern unsigned int lbl_821C108C;
extern unsigned int lbl_821C10A4;
extern unsigned int lbl_821C10B4;
extern unsigned int ltcg_pool_0_0f;


int * fn_824DF9F8(int *param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  unsigned char **appuStack_40 [4];
  unsigned char ***pppuStack_30;
  
  *param_1 = param_3;
  pppuStack_30 = appuStack_40;
  param_1[1] = param_2;
  appuStack_40[0] = &lbl_821C100C;
  param_1[2] = 0;
  fn_824DF260((double)*(float *)(param_3 + 0x1c),param_1 + 4,param_2,appuStack_40);
  pppuStack_30 = appuStack_40;
  appuStack_40[0] = &lbl_821C1024;
  fn_824DF260((double)*(float *)(param_3 + 0x24),param_1 + 0x12);
  pppuStack_30 = appuStack_40;
  appuStack_40[0] = &lbl_821C103C;
  fn_824DF260((double)*(float *)(param_3 + 0x20),param_1 + 0x20);
  pppuStack_30 = appuStack_40;
  appuStack_40[0] = &lbl_821C1054;
  fn_824DF260((double)*(float *)(param_3 + 0x28),param_1 + 0x2e);
  fVar1 = *(float *)(param_3 + 0x30);
  param_1[0x3d] = param_3 + 0x30;
  pppuStack_30 = appuStack_40;
  param_1[0x3c] = (int)&lbl_821C107C;
  appuStack_40[0] = &lbl_821C108C;
  fn_824DF260((double)fVar1,param_1 + 0x3e);
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  iVar2 = ltcg_pool_0_0f;
  pppuStack_30 = appuStack_40;
  param_1[0x4c] = (int)&lbl_821C10A4;
  param_1[0x51] = iVar2;
  param_1[0x4d] = param_3 + 0x38;
  param_1[0x52] = iVar2;
  appuStack_40[0] = &lbl_821C10B4;
  fn_824DF260((double)lbl_82192480,param_1 + 0x54);
  return param_1;
}

