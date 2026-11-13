extern unsigned int *auStack_30;
extern int fn_8251F720();
extern int fn_8255F448();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F21F0();
extern int fn_827F2220();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_822B84C0(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_30 [48];
  
  fn_8255F880(auStack_30);
  uVar2 = fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,auStack_30);
  iVar1 = *(int *)(param_1 + 0xc);
  *(unsigned int *)(iVar1 + 0x184) = lbl_821917B4;
  uVar3 = fn_8251F720(param_3,0);
  fn_8255F448(iVar1,uVar2,uVar3,0);
  *(unsigned int *)(iVar1 + 0x168) = 0;
  *(unsigned int *)(iVar1 + 0x160) = *param_3;
  fn_827F21F0(*(unsigned int *)(param_1 + 0xc));
  fn_827F2220(*(unsigned int *)(param_1 + 0xc));
  return uVar2;
}

