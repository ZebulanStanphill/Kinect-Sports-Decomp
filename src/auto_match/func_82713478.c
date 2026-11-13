extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82696330();
extern int fn_826A1CC8();
extern int fn_826C35B8();
extern unsigned int lbl_8200F164;
extern unsigned int lbl_8200F168;
extern unsigned int lbl_8200F210;
extern unsigned int lbl_82013278;
extern unsigned int uStack_48;


unsigned int * fn_82713478(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned char **ppuVar2;
  int iVar3;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [8];
  unsigned __int64 uStack_48;
  
  fn_826C35B8(param_1,param_2,0xffffffff82713238);
  ppuVar2 = &lbl_8200F164;
  *param_1 = &lbl_8200F210;
  param_1[4] = &lbl_82013278;
  iVar3 = 0;
  if (lbl_8200F164 != (unsigned char *)0x0) {
    iVar1 = 0;
    do {
      auStack_60[0] = 7;
      uStack_48 = (**(int (***)())((int)&lbl_8200F168 + iVar1))();
      auStack_50[0] = 3;
      fn_826A1CC8(param_1 + 4,param_2,*ppuVar2,auStack_50,auStack_60);
      fn_82696330(auStack_50);
      iVar3 = iVar3 + 1;
      iVar1 = iVar3 * 8;
      ppuVar2 = &lbl_8200F164 + iVar3 * 2;
    } while ((&lbl_8200F164)[iVar3 * 2] != (unsigned char *)0x0);
  }
  return param_1;
}

