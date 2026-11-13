extern int fn_82FACB48();
extern int fn_82FAE140();


void fn_82FACCE8(int param_1,__int64 param_2,char param_3)

{
  __int64 lVar1;
  int iVar2;
  
  lVar1 = fn_82FAE140(*(unsigned int *)(param_1 + 0x60));
  if (param_3 == '\0') {
    if ((int)param_2 < 0) {
      param_2 = 0;
    }
  }
  else if ((int)param_2 < (int)-lVar1) {
    param_2 = -lVar1;
  }
  iVar2 = fn_82FACB48(param_1,lVar1 + param_2);
  *(int *)(param_1 + 0x68) = iVar2;
  *(int *)(param_1 + 0x5c) = -(iVar2 - (int)param_2);
  return;
}

