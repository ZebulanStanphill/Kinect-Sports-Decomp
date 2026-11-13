extern int fn_82A52830();
extern int fn_82A6CA88();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


unsigned __int64 fn_82A6CF00(unsigned int *param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  
  uVar2 = 0;
  if ((*(int *)(param_1[2] + 0x2c0) != 0) &&
     ((unsigned int)(param_1[7] + param_1[8]) < (unsigned int)(param_1[6] + param_1[5]))) {
    fn_82A6CA88();
    if (param_2 == 0) {
      iVar1 = param_1[8] * 8 + param_1[0xc];
    }
    else {
      iVar1 = 0;
    }
    if (param_3 <= (unsigned int)(param_1[10] + iVar1)) {
      return 0;
    }
  }
  if (param_1[0x13] == 0) {
    if ((int (**)())*param_1 == (int (**)())0x0) {
      return 0xffffffff80040004;
    }
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uVar2 = (*(int (**)())*param_1)(param_1[1],&uStack_60);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar2 = fn_82A52830(param_1[2],&uStack_60);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((((unsigned int)param_1[10] < 0x18) && (*(int *)(param_1[2] + 0x2c0) != 0)) &&
       ((unsigned int)(param_1[8] + param_1[7]) < (unsigned int)(param_1[6] + param_1[5]))) {
      fn_82A6CA88(param_1);
    }
  }
  if (param_2 == 0) {
    iVar1 = param_1[8] * 8 + param_1[0xc];
  }
  else {
    iVar1 = 0;
  }
  if (param_3 <= (unsigned int)(param_1[10] + iVar1)) {
    return uVar2;
  }
  if (param_1[0x13] != 0) {
    if (param_2 == 0) {
      return uVar2;
    }
    if (param_2 == 1) {
      return uVar2;
    }
  }
  return 0xffffffff80040004;
}

