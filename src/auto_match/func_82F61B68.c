unsigned __int64 fn_82F61B68(int *param_1,int param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  if (param_3 == (int *)0x0) {
    return 0xffffffff82240403;
  }
  *param_3 = 0;
  if (*param_1 == 0) {
    return 0xffffffff82240406;
  }
  if (param_2 < 0) {
    return uVar2;
  }
  if (param_1[7] <= param_2) {
    return uVar2;
  }
  uVar1 = param_1[9];
  trapWord(6,(unsigned __int64)uVar1,0);
  *param_3 = ((param_1[6] - param_2) - ((unsigned int)(param_1[6] - param_2) / uVar1) * uVar1) * param_1[10]
             + param_1[0x14];
  return uVar2;
}

