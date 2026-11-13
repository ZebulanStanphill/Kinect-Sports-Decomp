extern int fn_82869768();
extern int fn_82876408();
extern int fn_82876968();


int
fn_82869DD8(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int *param_4,unsigned char *param_5,
             unsigned __int64 param_6)

{
  unsigned int iVar1;
  int iVar3;
  unsigned int uVar2;
  
  if (((((int)param_3 == 0) && (param_4 != (int *)0x0)) && (*param_4 == 0)) && (param_4[1] == 0)) {
    for (iVar1 = *(int *)(param_1 + 0x424); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      uVar2 = fn_82876968(iVar1 + 8,param_2);
      if (((int)uVar2 != -1) &&
         (iVar3 = fn_82869768(param_1,iVar1,uVar2,param_4,param_6), iVar3 == 1)) {
        *param_5 = 1;
        return 1;
      }
    }
  }
  uVar2 = fn_82876408(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar2;
}

