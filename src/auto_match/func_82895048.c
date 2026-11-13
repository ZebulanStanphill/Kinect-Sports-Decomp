extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8288E380();
extern int fn_828939C0();
extern int fn_8289D8D0();
extern int fn_828A12E8();
extern int fn_828B5608();
extern unsigned int lbl_82023898;
extern unsigned int lbl_82023C3C;


unsigned int * fn_82895048(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_30 [4];
  unsigned int auStack_2c [11];
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (int)param_2;
  *param_1 = &lbl_82023898;
  fn_828B5608(param_1 + 5);
  param_1[8] = &lbl_82023C3C;
  fn_828B5608(param_1 + 10);
  auStack_2c[0] = 0;
  param_1[0xc] = 2;
  param_1[8] = &lbl_82023C3C;
  fn_8288E380(param_1 + 0xf,0,auStack_2c,auStack_30);
  param_1[0x13] = 0;
  iVar2 = fn_828A12E8(param_2);
  *(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + 1;
  uVar1 = fn_8289D8D0(param_1[4]);
  fn_828939C0(param_1,param_3,0,uVar1);
  return param_1;
}

