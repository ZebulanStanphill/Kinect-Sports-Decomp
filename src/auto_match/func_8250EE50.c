extern unsigned int *auStack_40;
extern int fn_8251F720();
extern int fn_8255F448();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F21F0();
extern int fn_827F2220();
extern int fn_827F62A8();
extern int fn_827F6430();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8250EE50(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_40 [64];
  
  fn_8255F880(auStack_40,param_2 + 0x18);
  uVar1 = fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,auStack_40);
  fn_827F62A8(param_1);
  fn_827F6430(param_1,uVar1);
  *(float *)(param_3 + 0x184) = ltcg_pool_0_0f;
  uVar2 = fn_8251F720(param_2 + 0x1c,0);
  fn_8255F448(param_3,uVar1,uVar2,0);
  *(unsigned int *)(param_3 + 0x168) = 0;
  *(unsigned int *)(param_3 + 0x160) = *(unsigned int *)(param_2 + 0x1c);
  fn_827F21F0(param_3);
  fn_827F2220(param_3);
  return uVar1;
}

