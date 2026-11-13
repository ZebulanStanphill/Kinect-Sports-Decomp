extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82696330();
extern int fn_826A1CC8();
extern int fn_826C35B8();
extern unsigned int lbl_82006D90;
extern unsigned int lbl_82006D94;
extern unsigned int lbl_82006EE0;
extern unsigned int lbl_82013278;
extern unsigned int uStack_38;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_826A4558(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [8];
  unsigned int uStack_38;
  
  fn_826C35B8(param_1,param_2,0xffffffff826a3b48);
  *param_1 = &lbl_82006EE0;
  param_1[4] = &lbl_82013278;
  iVar3 = 0;
  if (lbl_82006D90 != 0) {
    iVar2 = 0;
    iVar1 = lbl_82006D90;
    do {
      auStack_50[0] = 3;
      auStack_40[0] = 4;
      uStack_38 = *(unsigned int *)(&lbl_82006D94 + iVar2);
      fn_826A1CC8(param_1 + 4,param_2,iVar1,auStack_40,auStack_50);
      fn_82696330(auStack_40);
      iVar3 = iVar3 + 1;
      iVar2 = iVar3 * 8;
      iVar1 = *(int *)(&lbl_82006D90 + iVar2);
    } while (iVar1 != 0);
  }
  return param_1;
}

