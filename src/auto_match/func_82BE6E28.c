extern unsigned int *auStack_30;
extern int fn_82BE6268();
extern int fn_82BE6328();
extern int fn_82F6D460();


unsigned __int64 fn_82BE6E28(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned short uVar2;
  int iVar1;
  unsigned short auStack_30 [24];
  
  if ((param_2 & 0xffffffff) != 0) {
    uVar2 = fn_82F6D460(param_2,2000);
    auStack_30[0] = uVar2;
    if (param_3 == 0) {
      iVar1 = fn_82BE6268(param_1,auStack_30,2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = fn_82BE6268(param_1,param_2,uVar2);
    }
    else {
      iVar1 = fn_82BE6328(param_1,param_2,uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = fn_82BE6328(param_1,auStack_30,2);
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

