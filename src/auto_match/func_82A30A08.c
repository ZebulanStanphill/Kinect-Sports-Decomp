extern int fn_82A30780();
extern int fn_82A30800();
extern int fn_82A30870();
extern int fn_82A30910();


unsigned __int64 fn_82A30A08(unsigned __int64 param_1,int param_2,unsigned int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if (param_3 < 0xfffff001) {
    uVar2 = 0;
    uVar1 = param_3 + 0xfff & 0xfffff000;
    if (*(unsigned int *)(param_2 + 0x14) != uVar1) {
      if ((((*(unsigned char *)(param_2 + 0x35) & 4) != 0) || ((*(unsigned char *)(param_2 + 0x35) & 0x20) != 0)) ||
         (uVar2 = fn_82A30780(param_1,param_2), -1 < (int)uVar2)) {
        if (uVar1 == 0) {
          uVar2 = fn_82A30800(param_1,param_2);
        }
        else if (*(unsigned int *)(param_2 + 0x14) < uVar1) {
          uVar2 = fn_82A30910(param_1,param_2,uVar1);
        }
        else if ((param_4 == 0) && (uVar1 < *(unsigned int *)(param_2 + 0x14))) {
          uVar2 = fn_82A30870(param_1,param_2,uVar1);
        }
        else {
          uVar2 = 0;
        }
      }
    }
  }
  else {
    uVar2 = 0xffffffffc000007f;
  }
  return uVar2;
}

