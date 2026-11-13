extern int fn_82B24700();


void fn_82B4FA78(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *apuStack_20 [4];
  
  fn_82B24700(apuStack_20,param_1);
  if ((apuStack_20[0][1] & 1) == 0) {
    iVar2 = (*apuStack_20[0] & 0xfffffffe) - 4;
    if (iVar2 != 0) {
      iVar1 = *(int *)((*apuStack_20[0] & 0xfffffffe) + 4);
      goto LAB_82b4fab0;
    }
  }
  else {
    iVar2 = 0;
  }
  iVar1 = 0;
LAB_82b4fab0:
  *param_2 = iVar2;
  param_2[1] = iVar1;
  return;
}

