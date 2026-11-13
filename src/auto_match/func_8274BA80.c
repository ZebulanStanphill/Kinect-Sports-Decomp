extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82696330();
extern int fn_826A1CC8();
extern int fn_826B1688();
extern int fn_826C35B8();
extern int fn_82720700();
extern unsigned int lbl_820131F8;
extern unsigned int lbl_820131FC;
extern unsigned int lbl_82013278;
extern unsigned int lbl_820132D0;
extern unsigned int uStack_38;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_8274BA80(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [8];
  unsigned int uStack_38;
  
  fn_826C35B8(param_1,param_2,0xffffffff826c0c68);
  *param_1 = &lbl_820132D0;
  puVar4 = param_1 + 4;
  param_1[4] = &lbl_82013278;
  fn_82720700(param_2,puVar4);
  fn_826B1688(puVar4,param_2,0xffffffff82013240,7);
  iVar3 = 0;
  if (lbl_820131F8 != 0) {
    iVar2 = 0;
    iVar1 = lbl_820131F8;
    do {
      auStack_50[0] = 7;
      auStack_40[0] = 4;
      uStack_38 = *(unsigned int *)(&lbl_820131FC + iVar2);
      fn_826A1CC8(puVar4,param_2,iVar1,auStack_40,auStack_50);
      fn_82696330(auStack_40);
      iVar3 = iVar3 + 1;
      iVar2 = iVar3 * 8;
      iVar1 = *(int *)(&lbl_820131F8 + iVar2);
    } while (iVar1 != 0);
  }
  return param_1;
}

