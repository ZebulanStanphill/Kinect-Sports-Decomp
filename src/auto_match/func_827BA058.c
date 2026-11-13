extern int fn_827B76D8();
extern int fn_827B9528();


void fn_827BA058(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_827B76D8(param_1 + 0x794,param_3);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
    fn_827B9528(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    piVar1 = *(int **)(iVar2 + 0xc);
    *(int *)(*piVar1 + 4) = piVar1[1];
    *(int *)piVar1[1] = *piVar1;
    *piVar1 = *(int *)(param_1 + 0x740);
    piVar1[1] = param_1 + 0x740;
    *(int **)(*(int *)(param_1 + 0x740) + 4) = piVar1;
    *(int **)(param_1 + 0x740) = piVar1;
  }
  return;
}

