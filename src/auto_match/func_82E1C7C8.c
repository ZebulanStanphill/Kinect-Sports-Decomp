extern int fn_82E1C598();


void fn_82E1C7C8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*(char *)(param_1 + 8) != '\0') || (iVar1 = fn_82E1C598(), -1 < iVar1)) {
    piVar2 = param_1 + 9;
    if (0xf < (unsigned int)param_1[0xe]) {
      piVar2 = (int *)*piVar2;
    }
    (**(int (***)())(*param_1 + 0x1c))(param_1,param_2,param_3,piVar2,(unsigned __int64)(unsigned int)param_1[0xd] + 1)
    ;
  }
  return;
}

