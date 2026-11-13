extern int fn_82ACAFD8();
extern int fn_82B16ED0();


unsigned __int64
fn_82B19C90(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  if ((((param_7 & 0x18) == 0) ||
      ((*(int *)(param_5 + 0x1c) == *(int *)(param_2 + 0x1c) &&
       (((param_7 & 0x10) == 0 || (*(int *)(param_8 + 0x1c) == *(int *)(param_2 + 0x1c))))))) &&
     (((*(unsigned int *)(*(int *)(param_2 + 0x1c) + 0x4c) ^ *(unsigned int *)(*(int *)(param_8 + 0x1c) + 0x4c)) &
      0x7ffff) == 0)) {
    iVar1 = fn_82B16ED0(param_2,param_3);
    iVar2 = fn_82B16ED0(param_5,param_6);
    if (iVar1 == iVar2) {
      cVar3 = fn_82ACAFD8(param_5);
      if (cVar3 != '\0') {
        for (iVar1 = *(int *)(param_5 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          if ((*(int *)(iVar1 + 0x10) != 0) && (*(int *)(iVar1 + 0x10) != param_8)) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

