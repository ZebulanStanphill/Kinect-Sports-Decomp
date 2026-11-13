extern int fn_82E58BE8();


unsigned __int64 fn_82E41AB8(int param_1,unsigned int *param_2,int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  if ((param_2 == (unsigned int *)0x0) || (param_3 == (int *)0x0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    *param_3 = 0;
    uVar2 = 0;
    *param_2 = 0;
    if (*(int *)(param_1 + 0x594) != 0) {
      iVar1 = fn_82E58BE8(param_1 + 0x4b4,param_3);
      if (iVar1 == 0) {
        uVar2 = 0xffffffff8000ffff;
        if ((int *)*param_3 != (int *)0x0) {
          (**(int (***)())(*(int *)*param_3 + 8))();
          *param_3 = 0;
        }
      }
      else if (*(int *)(param_1 + 0x594) != 0) {
        *param_2 = *param_2 | 1;
      }
    }
  }
  return uVar2;
}

