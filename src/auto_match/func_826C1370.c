extern int fn_82694D70();
extern int fn_82695FA0();
extern int fn_826BF098();
extern int fn_826BFFB0();


unsigned __int64 fn_826C1370(__int64 param_1,int param_2,int *param_3,int param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  int *apiStack_20 [2];
  
  if (6 < *(unsigned char *)(param_2 + 4)) {
    iVar2 = fn_826BF098();
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      if (param_4 != 0) {
        fn_82695FA0(param_4,iVar2 + 8);
        *(unsigned char *)(param_4 + 1) = *(unsigned char *)(iVar2 + 9);
      }
      uVar1 = 1;
    }
    return uVar1;
  }
  apiStack_20[0] = param_3;
  if (*(int *)(*param_3 + 4) == 0) {
    fn_82694D70();
  }
  uVar1 = fn_826BFFB0(param_1 + 8,apiStack_20,param_4);
  return uVar1;
}

