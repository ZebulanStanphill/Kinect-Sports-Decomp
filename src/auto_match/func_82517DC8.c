extern unsigned int *auStack_20;
extern int fn_82518070();
extern int fn_82895158();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern unsigned int lbl_82197CE0;
extern unsigned int lbl_821C2838;
extern unsigned int lbl_821C2878;


unsigned int * fn_82517DC8(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_20 [8];
  
  fn_82895158();
  param_1[0x1a] = &lbl_82197CE0;
  param_1[0x1d] = 0;
  param_1[0x1c] = param_1 + 0x1b;
  param_1[0x1b] = param_1 + 0x1b;
  *param_1 = &lbl_821C2838;
  param_1[0x1a] = &lbl_821C2878;
  param_1[0x1e] = 0;
  fn_828B5580(auStack_20,param_2 + 4);
  uVar1 = *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x50);
  uVar2 = fn_828B55F8(auStack_20);
  fn_82518070(param_1,uVar1,uVar2);
  fn_828B55B0(auStack_20);
  return param_1;
}

