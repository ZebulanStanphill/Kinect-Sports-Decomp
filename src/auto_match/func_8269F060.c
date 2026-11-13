extern int fn_82694D70();
extern int fn_8269DB10();


unsigned __int64 fn_8269F060(unsigned __int64 param_1,int *param_2,unsigned char *param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  int *apiStack_20 [2];
  
  apiStack_20[0] = param_2;
  if (*(int *)(*param_2 + 4) == 0) {
    fn_82694D70();
  }
  iVar2 = fn_8269DB10(param_1,apiStack_20);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_3 != (unsigned char *)0x0) {
      *param_3 = *(unsigned char *)(iVar2 + 4);
    }
    uVar1 = 1;
  }
  return uVar1;
}

